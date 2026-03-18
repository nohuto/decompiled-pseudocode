/*
 * XREFs of KeSetDisableBoostThread @ 0x140451E34
 * Callers:
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiSetDisableBoostThread @ 0x140451ED4 (KiSetDisableBoostThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetDisableBoostThread(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rdx
  unsigned int v6; // edi
  _QWORD *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  v6 = KiSetDisableBoostThread(v3, a2, &v8);
  if ( v8 )
  {
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v8, CurrentIrql);
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
