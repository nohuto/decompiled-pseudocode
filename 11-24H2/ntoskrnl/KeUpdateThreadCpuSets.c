/*
 * XREFs of KeUpdateThreadCpuSets @ 0x1403C6338
 * Callers:
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C63A0 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
