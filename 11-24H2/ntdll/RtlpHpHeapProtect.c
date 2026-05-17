/*
 * XREFs of RtlpHpHeapProtect @ 0x180157DB4
 * Callers:
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 * Callees:
 *     RtlpHpLargeAllocationProtect @ 0x180157F78 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x180158420 (RtlpHpSegProtect.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180162690 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpHpHeapProtect(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int16 v4; // ax
  int v5; // ebp
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  bool v9; // zf
  char v10; // r8
  unsigned __int64 v11; // rcx
  char v12; // r8
  unsigned __int64 v13; // rdx
  __int16 v14; // cx
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+40h] [rbp-38h]
  __int128 v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+88h] [rbp+10h] BYREF
  __int64 v19; // [rsp+90h] [rbp+18h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v18 = 0;
  v2 = a2;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( (a2 & 0x22) != 0 )
  {
    v4 = *(_WORD *)(a1 + 30);
    v5 = 1;
    if ( (v4 & 2) == 0 )
      *(_WORD *)(a1 + 30) = v4 | 2;
  }
  else
  {
    v5 = 0;
  }
  result = ZwQueryVirtualMemory(-1LL, a1, 0LL, &v15, 48LL, 0LL);
  if ( (int)result >= 0 )
  {
    v19 = *((_QWORD *)&v16 + 1);
    v20 = a1;
    result = ZwProtectVirtualMemory(-1LL, &v20, &v19, (unsigned int)v2, &v18);
    if ( (int)result >= 0 )
    {
      result = RtlpHpSegProtect(a1 + 320, (unsigned int)v2);
      if ( (int)result >= 0 )
      {
        result = RtlpHpSegProtect(a1 + 512, (unsigned int)v2);
        if ( (int)result >= 0 )
        {
          v7 = *(_QWORD *)(a1 + 72);
          if ( !v7 )
          {
            result = 0LL;
LABEL_32:
            if ( !v5 )
            {
              v14 = *(_WORD *)(a1 + 30);
              if ( (v14 & 2) != 0 )
                *(_WORD *)(a1 + 30) = v14 & 0xFFFD;
            }
            return result;
          }
          while ( 1 )
          {
LABEL_30:
            result = RtlpHpLargeAllocationProtect(v7, v2);
            if ( (int)result < 0 )
            {
LABEL_31:
              if ( (int)result < 0 )
                return result;
              goto LABEL_32;
            }
            v8 = *(_QWORD *)v7;
            if ( !*(_QWORD *)v7 )
              break;
            v9 = (*(_BYTE *)(a1 + 80) & 1) == 0;
LABEL_13:
            if ( v9 )
              v7 = v8;
            else
              v7 ^= v8;
          }
          v8 = *(_QWORD *)(v7 + 8);
          v10 = *(_BYTE *)(a1 + 80);
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
