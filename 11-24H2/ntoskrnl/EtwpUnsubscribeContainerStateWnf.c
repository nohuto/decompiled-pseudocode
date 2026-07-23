/*
 * XREFs of EtwpUnsubscribeContainerStateWnf @ 0x14064B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x140A5D360 (ExUnsubscribeWnfStateChange.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void EtwpUnsubscribeContainerStateWnf()
{
  __int64 v0; // rbx

  v0 = EtwpHostSiloState;
  ExUnsubscribeWnfStateChange(*(_QWORD *)(EtwpHostSiloState + 4424));
  ExFreePoolWithTag(*(PVOID *)(v0 + 4440), 0);
  *(_QWORD *)(v0 + 4440) = 0LL;
}
