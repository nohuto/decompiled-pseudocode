/*
 * XREFs of KeCheckForTimer @ 0x1404C7E48
 * Callers:
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x14035B160 (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

ULONG __fastcall KeCheckForTimer(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG result; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  _QWORD *v5; // rdx
  __int64 v6; // r14
  unsigned int i; // ebp
  __int64 *v8; // rcx
  unsigned int v9; // r13d
  volatile signed __int32 *v10; // rbx
  _QWORD *v11; // r15
  unsigned __int8 CurrentIrql; // r12
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // r8
  ULONG_PTR v15; // r8
  unsigned int v16; // [rsp+80h] [rbp+18h] BYREF
  ULONG v17; // [rsp+88h] [rbp+20h]

  result = KeTimerCheckFlags;
  if ( (KeTimerCheckFlags & 1) != 0 )
  {
    BugCheckParameter4 = BugCheckParameter3 + a2;
    result = KeQueryActiveProcessorCountEx(0xFFFFu);
    v6 = 0LL;
    v17 = result;
    while ( (unsigned int)v6 < result )
    {
      for ( i = 0; i < 2; ++i )
      {
        v8 = KiProcessorBlock;
        v9 = 0;
        v10 = (volatile signed __int32 *)(((unsigned __int64)i << 13) + KiProcessorBlock[v6] + 17152);
        v11 = v10 + 2;
        do
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v5) = 2;
            LOBYTE(v8) = CurrentIrql;
            KiRaiseIrqlProcessIrqlFlags(v8, v5);
          }
          v16 = 0;
          while ( _interlockedbittestandset64(v10, 0LL) )
          {
            do
              KeYieldProcessorEx(&v16);
            while ( *(_QWORD *)v10 );
          }
          v5 = (_QWORD *)*v11;
          while ( v5 != v11 )
          {
            v13 = (ULONG_PTR)(v5 - 4);
            v5 = (_QWORD *)*v5;
            if ( v13 > BugCheckParameter3 - 64 && v13 < BugCheckParameter4 )
              KeBugCheckEx(0xC7u, 0LL, v13, BugCheckParameter3, BugCheckParameter4);
            v8 = (__int64 *)KiWaitNever;
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
          _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v5) = CurrentIrql;
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
          }
          __writecr8(CurrentIrql);
          v11 += 4;
          ++v9;
          v10 += 8;
        }
        while ( v9 < 0x100 );
      }
      result = v17;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  return result;
}
