/*
 * XREFs of RtlpProtectHeap @ 0x18009C350
 * Callers:
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 * Callees:
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180162690 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpProtectHeap(__int64 a1, unsigned int a2)
{
  _QWORD **v3; // r12
  _BYTE *v4; // rbx
  int v5; // ebp
  _QWORD *i; // r14
  _QWORD *v8; // rsi
  char *j; // rdi
  int v10; // r15d
  int v11; // r15d
  __int128 v12; // [rsp+30h] [rbp-68h] BYREF
  __int128 v13; // [rsp+40h] [rbp-58h]
  __int128 v14; // [rsp+50h] [rbp-48h]
  __int64 v15; // [rsp+A0h] [rbp+8h] BYREF
  int v16; // [rsp+A8h] [rbp+10h] BYREF
  char *v17; // [rsp+B0h] [rbp+18h] BYREF

  v17 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v3 = (_QWORD **)(a1 + 288);
  v4 = (_BYTE *)(a1 + 563);
  v12 = 0LL;
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
        v10 = ZwQueryVirtualMemory(-1LL, j, 0LL, &v12, 48LL, 0LL);
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
          v15 = *((_QWORD *)&v13 + 1);
          v17 = j;
          v11 = ZwProtectVirtualMemory(-1LL, &v17, &v15, a2, &v16);
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
