/*
 * XREFs of RtlpHpHeapProtect @ 0x180159364
 * Callers:
 *     RtlProtectHeap @ 0x180024F60 (RtlProtectHeap.c)
 * Callees:
 *     RtlpHpLargeAllocationProtect @ 0x180159528 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x1801599D0 (RtlpHpSegProtect.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpHpHeapProtect(unsigned __int64 *BaseAddress, ULONG NewProtect)
{
  __int64 v2; // rsi
  __int16 v4; // ax
  int v5; // ebp
  NTSTATUS result; // eax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  bool v9; // zf
  char v10; // r8
  unsigned __int64 v11; // rcx
  char v12; // r8
  unsigned __int64 v13; // rdx
  __int16 v14; // cx
  __int128 MemoryInformation; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+40h] [rbp-38h]
  __int128 v17; // [rsp+50h] [rbp-28h]
  ULONG OldProtect; // [rsp+88h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp+18h] BYREF
  PVOID BaseAddressa; // [rsp+98h] [rbp+20h] BYREF

  OldProtect = 0;
  v2 = NewProtect;
  MemoryInformation = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( (NewProtect & 0x22) != 0 )
  {
    v4 = *((_WORD *)BaseAddress + 15);
    v5 = 1;
    if ( (v4 & 2) == 0 )
      *((_WORD *)BaseAddress + 15) = v4 | 2;
  }
  else
  {
    v5 = 0;
  }
  result = ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BaseAddress,
             MemoryBasicInformation,
             &MemoryInformation,
             0x30uLL,
             0LL);
  if ( result >= 0 )
  {
    RegionSize = *((_QWORD *)&v16 + 1);
    BaseAddressa = BaseAddress;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v2, &OldProtect);
    if ( result >= 0 )
    {
      result = RtlpHpSegProtect(BaseAddress + 40, (unsigned int)v2);
      if ( result >= 0 )
      {
        result = RtlpHpSegProtect(BaseAddress + 64, (unsigned int)v2);
        if ( result >= 0 )
        {
          v7 = BaseAddress[9];
          if ( !v7 )
          {
            result = 0;
LABEL_32:
            if ( !v5 )
            {
              v14 = *((_WORD *)BaseAddress + 15);
              if ( (v14 & 2) != 0 )
                *((_WORD *)BaseAddress + 15) = v14 & 0xFFFD;
            }
            return result;
          }
          while ( 1 )
          {
LABEL_30:
            result = RtlpHpLargeAllocationProtect(v7, v2);
            if ( result < 0 )
            {
LABEL_31:
              if ( result < 0 )
                return result;
              goto LABEL_32;
            }
            v8 = *(_QWORD *)v7;
            if ( !*(_QWORD *)v7 )
              break;
            v9 = (BaseAddress[10] & 1) == 0;
LABEL_13:
            if ( v9 )
              v7 = v8;
            else
              v7 ^= v8;
          }
          v8 = *(_QWORD *)(v7 + 8);
          v10 = *((_BYTE *)BaseAddress + 80);
          if ( v8 )
          {
            v9 = (v10 & 1) == 0;
            goto LABEL_13;
          }
          v11 = v7;
          v12 = v10 & 1;
          while ( 1 )
          {
            v11 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v12 )
            {
              if ( !v11 )
                goto LABEL_31;
              v11 ^= v7;
            }
            if ( !v11 )
              goto LABEL_31;
            v13 = *(_QWORD *)(v11 + 8);
            if ( v12 )
            {
              if ( !v13 )
                goto LABEL_28;
              v13 ^= v11;
            }
            if ( v13 && v13 != v7 )
            {
              v7 = v13;
              goto LABEL_30;
            }
LABEL_28:
            v7 = v11;
          }
        }
      }
    }
  }
  return result;
}
