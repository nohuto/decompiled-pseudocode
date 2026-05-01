/*
 * XREFs of ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180009310
 * Callers:
 *     ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180009250 (-CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 *     ?CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z @ 0x180011270 (-CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z.c)
 *     CrmActivityWindowClosedReasonUnsubscribe @ 0x180012B50 (CrmActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     <none>
 */

void __fastcall CrmpActivityWindowClosedReasonUnsubscribe(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  v2 = *((_QWORD *)a1 + 12);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)a1 + 12) = 0LL;
  }
  if ( *((_DWORD *)a1 + 22) || *((_DWORD *)a1 + 23) )
  {
    v3 = *((_QWORD *)a1 + 2);
    if ( *(_QWORD *)(v3 + 16) )
      CrmpInProcActivityWindowClosedReasonUnsubscribe(*((_QWORD *)a1 + 1));
    else
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EC20, 9u, 0LL, *((_QWORD *)a1 + 1), *(_QWORD *)(v3 + 8));
    *((_QWORD *)a1 + 11) = 0LL;
  }
}
