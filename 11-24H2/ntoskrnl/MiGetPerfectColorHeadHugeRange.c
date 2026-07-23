/*
 * XREFs of MiGetPerfectColorHeadHugeRange @ 0x140671548
 * Callers:
 *     MiGetPerfectFreeOrZeroHugeRange @ 0x1406716BC (MiGetPerfectFreeOrZeroHugeRange.c)
 *     MiRemoveHugeRangeAnyColor @ 0x140672B48 (MiRemoveHugeRangeAnyColor.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x1403EFAE4 (MiLockHugePfnInternal.c)
 *     MiGetColorHeadHugeRangeBase @ 0x1404ACA2C (MiGetColorHeadHugeRangeBase.c)
 *     MiUnlockHugePfn @ 0x1404C8804 (MiUnlockHugePfn.c)
 *     MiUnlinkHugeRange @ 0x1404EEA38 (MiUnlinkHugeRange.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiLockColorHeadHugeAtDpc @ 0x1404F84F4 (MiLockColorHeadHugeAtDpc.c)
 */

__int64 *__fastcall MiGetPerfectColorHeadHugeRange(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // edi
  int v6; // r13d
  volatile signed __int32 *v7; // r14
  unsigned __int64 v8; // r15
  __int64 *v9; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int16 v14; // [rsp+50h] [rbp+8h]

  v3 = 0LL;
  v4 = *(_QWORD *)a1;
  v5 = *(_DWORD *)(a1 + 32);
  v14 = **(_WORD **)(v4 + 14984);
  v6 = (**(_DWORD **)(a1 + 16) != 0) + 1;
  v7 = (volatile signed __int32 *)(MiGetColorHeadHugeRangeBase(v4, a2, **(_DWORD **)(a1 + 16))
                                 + 8LL * (unsigned __int8)*(_DWORD *)(a1 + 28));
  while ( 1 )
  {
    v8 = (*(_QWORD *)v7 >> 15) & 0x3FFFFFLL;
    v3 = (*(_QWORD *)v7 >> 15) ^ ((*(_QWORD *)v7 >> 15) ^ v3) & 0xFFFFFFFFFFC00000uLL;
    if ( !v8 )
      break;
    if ( _bittest64((const signed __int64 *)stru_140E300F0.Buffer, v8) )
    {
      v9 = (__int64 *)(qword_140E30100 + 8 * v8);
      if ( (v5 & 1) != 0 )
      {
        CurrentIrql = 17;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      }
      MiLockHugePfnInternal((__int64)v9);
      v11 = *v9;
      if ( (((unsigned __int64)*v9 >> 4) & 0x7FF) == v14 )
      {
        v11 = *v9 & 7;
        if ( (_DWORD)v11 == v6 )
        {
          MiLockColorHeadHugeAtDpc(v7);
          if ( v8 == ((*(_QWORD *)v7 >> 15) & 0x3FFFFFLL) )
          {
            MiUnlinkHugeRange(*(_QWORD *)(*(_QWORD *)a1 + 14984LL), v3);
            _InterlockedAnd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFF7uLL);
            LOBYTE(v12) = CurrentIrql;
            MiUnlockHugePfn((__int64)v9, v12);
            return v9;
          }
          _InterlockedAnd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFF7uLL);
        }
      }
      LOBYTE(v11) = CurrentIrql;
      MiUnlockHugePfn((__int64)v9, v11);
    }
  }
  return 0LL;
}
