/*
 * XREFs of KeUpdateThreadCpuSets @ 0x140491BAC
 * Callers:
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x140491C14 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeUpdateThreadCpuSets(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  KiUpdateThreadCpuSetAffinitiesFromDpcLevel(v1, &v4);
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v4, CurrentIrql);
}
