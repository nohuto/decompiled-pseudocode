/*
 * XREFs of KeUpdateThreadCpuSets @ 0x14048B8EC
 * Callers:
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14048B954 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeUpdateThreadCpuSets(__int64 a1)
{
  int v1; // edi
  unsigned __int8 CurrentIrql; // bl
  struct _SINGLE_LIST_ENTRY v4; // [rsp+38h] [rbp+10h] BYREF

  v4.Next = 0LL;
  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiUpdateThreadCpuSetAffinitiesFromDpcLevel(v1, &v4);
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v4, CurrentIrql);
}
