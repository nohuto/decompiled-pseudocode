/*
 * XREFs of EtwpUnsubscribeContainerStateWnf @ 0x1406412C0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x140A63170 (ExUnsubscribeWnfStateChange.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void EtwpUnsubscribeContainerStateWnf()
{
  __int64 v0; // rbx

  v0 = EtwpHostSiloState;
  ExUnsubscribeWnfStateChange(*(_QWORD *)(EtwpHostSiloState + 4152));
  ExFreePoolWithTag(*(PVOID *)(v0 + 4168), 0);
  *(_QWORD *)(v0 + 4168) = 0LL;
}
