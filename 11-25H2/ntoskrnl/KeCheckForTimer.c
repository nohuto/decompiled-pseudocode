/*
 * XREFs of KeCheckForTimer @ 0x1404CEE18
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExpFreePoolChecks @ 0x1402DE730 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

ULONG __fastcall KeCheckForTimer(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG result; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v5; // r14
  unsigned int i; // ebp
  __int64 *v7; // rcx
  unsigned int v8; // r13d
  volatile signed __int32 *v9; // rbx
  _QWORD **v10; // r15
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v12; // rdx
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // r8
  ULONG_PTR v15; // r8
  int v16; // [rsp+80h] [rbp+18h] BYREF
  ULONG v17; // [rsp+88h] [rbp+20h]

  result = KeTimerCheckFlags;
  if ( (KeTimerCheckFlags & 1) != 0 )
  {
    BugCheckParameter4 = BugCheckParameter3 + a2;
    result = KeQueryActiveProcessorCountEx(0xFFFFu);
    v5 = 0LL;
    v17 = result;
    while ( (unsigned int)v5 < result )
    {
      for ( i = 0; i < 2; ++i )
      {
        v7 = KiProcessorBlock;
        v8 = 0;
        v9 = (volatile signed __int32 *)(((unsigned __int64)i << 13) + KiProcessorBlock[v5] + 17152);
        v10 = (_QWORD **)(v9 + 2);
        do
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v7) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v7);
          }
          v16 = 0;
          while ( _interlockedbittestandset64(v9, 0LL) )
          {
            do
              KeYieldProcessorEx(&v16);
            while ( *(_QWORD *)v9 );
          }
          v12 = *v10;
          while ( v12 != v10 )
          {
            v13 = (ULONG_PTR)(v12 - 4);
            v12 = (_QWORD *)*v12;
            if ( v13 > BugCheckParameter3 - 64 && v13 < BugCheckParameter4 )
              KeBugCheckEx(0xC7u, 0LL, v13, BugCheckParameter3, BugCheckParameter4);
            v7 = (__int64 *)KiWaitNever;
            v14 = KiWaitAlways ^ _byteswap_uint64(v13 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v13 + 48), KiWaitNever));
            if ( v14 )
            {
              if ( v14 > BugCheckParameter3 - 64 && v14 < BugCheckParameter4 )
                KeBugCheckEx(0xC7u, 1uLL, v14, BugCheckParameter3, BugCheckParameter4);
              v15 = *(_QWORD *)(v14 + 24);
              if ( v15 >= BugCheckParameter3 && v15 < BugCheckParameter4 )
                KeBugCheckEx(0xC7u, 2uLL, v15, BugCheckParameter3, BugCheckParameter4);
            }
          }
          _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v12) = CurrentIrql;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
          }
          __writecr8(CurrentIrql);
          v10 += 4;
          ++v8;
          v9 += 8;
        }
        while ( v8 < 0x100 );
      }
      result = v17;
      v5 = (unsigned int)(v5 + 1);
    }
  }
  return result;
}
