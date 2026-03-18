/*
 * XREFs of KeSetDisableBoostThread @ 0x140268FD8
 * Callers:
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 * Callees:
 *     KiSetDisableBoostThread @ 0x140269078 (KiSetDisableBoostThread.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetDisableBoostThread(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  v6 = KiSetDisableBoostThread(v3, a2, &v9);
  if ( v9 )
  {
    LOBYTE(v7) = CurrentIrql;
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v9, v7);
  }
  else
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    }
    __writecr8(CurrentIrql);
  }
  return v6;
}
