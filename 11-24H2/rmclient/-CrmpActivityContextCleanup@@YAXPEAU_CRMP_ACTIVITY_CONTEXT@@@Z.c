/*
 * XREFs of ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180009250
 * Callers:
 *     CrmActivityAllocateInternal @ 0x180008E00 (CrmActivityAllocateInternal.c)
 *     CrmActivityAllocate @ 0x180008F10 (CrmActivityAllocate.c)
 *     CrmActivityFree @ 0x180009210 (CrmActivityFree.c)
 * Callees:
 *     ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180009310 (-CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

void __fastcall CrmpActivityContextCleanup(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax

  CrmpActivityWindowClosedReasonUnsubscribe(a1);
  v2 = *((_QWORD *)a1 + 6);
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = (void *)*((_QWORD *)a1 + 8);
  if ( v3 )
    CloseHandle(v3);
  v4 = *((_QWORD *)a1 + 1);
  if ( v4 != -1 )
  {
    v5 = *((_QWORD *)a1 + 2);
    if ( *(_QWORD *)(v5 + 16) )
      CrmpInProcActivityFree();
    else
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EC20, 4u, 0LL, v4, *(_QWORD *)(v5 + 8));
  }
}
