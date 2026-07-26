/*
 * XREFs of ?ndisFilterCancelSendNetBufferListsInternal@@YAXPEAX@Z @ 0x14009A1B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisFilterCancelSendNetBufferListsInternal(_QWORD *Parameter)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(Parameter[1] + 560LL))(*(_QWORD *)(Parameter[1] + 568LL), Parameter[3]);
}
