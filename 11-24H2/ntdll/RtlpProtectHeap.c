/*
 * XREFs of RtlpProtectHeap @ 0x180028980
 * Callers:
 *     RtlProtectHeap @ 0x180028BA0 (RtlProtectHeap.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180160A50 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpProtectHeap(__int64 a1, ULONG a2)
{
  _QWORD **v3; // r12
  _BYTE *v4; // rbx
  int v5; // ebp
  _QWORD *i; // r14
  _QWORD *v8; // rsi
  char *j; // rdi
  NTSTATUS v10; // r15d
  NTSTATUS v11; // r15d
  __int128 MemoryInformation; // [rsp+30h] [rbp-68h] BYREF
  __int128 v13; // [rsp+40h] [rbp-58h]
  __int128 v14; // [rsp+50h] [rbp-48h]
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+8h] BYREF
  ULONG OldProtect; // [rsp+A8h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp+18h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  OldProtect = 0;
  v3 = (_QWORD **)(a1 + 288);
  v4 = (_BYTE *)(a1 + 563);
  MemoryInformation = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (a2 & 0x22) != 0 )
  {
    v5 = 1;
    if ( (*v4 & 1) == 0 )
      *v4 |= 1u;
  }
  else
  {
    v5 = 0;
  }
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
  {
    v8 = i - 3;
    if ( i != (_QWORD *)24 )
    {
      for ( j = (char *)v8[6]; (unsigned __int64)j < v8[9]; j += *((_QWORD *)&v13 + 1) )
      {
        v10 = ZwQueryVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                j,
                MemoryBasicInformation,
                &MemoryInformation,
                0x30uLL,
                0LL);
        if ( v10 < 0 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("VirtualQuery Failed 0x%p %x\n", j, v10);
          return (unsigned int)v10;
        }
        if ( (_DWORD)v14 == 4096 )
        {
          RegionSize = *((_QWORD *)&v13 + 1);
          BaseAddress = j;
          v11 = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, a2, &OldProtect);
          if ( v11 < 0 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("VirtualProtect Failed 0x%p %x\n", j, v11);
            return (unsigned int)v11;
          }
        }
      }
    }
  }
  if ( !v5 && (*v4 & 1) != 0 )
    *v4 &= ~1u;
  return 0LL;
}
