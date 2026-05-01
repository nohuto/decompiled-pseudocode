/*
 * XREFs of ?HampActDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180041530
 * Callers:
 *     <none>
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CemRcObjectCleanup @ 0x180041594 (CemRcObjectCleanup.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampActDestroy(struct _CEM_RC_OBJECT *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx

  v2 = (__int64 *)*((_QWORD *)a1 + 11);
  if ( v2 )
  {
    v3 = *v2;
    v2[1] = 0LL;
    (*(void (**)(void))(v3 + 16))();
  }
  v4 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  if ( v4 )
    RmHamHostDereference(v4);
  CemRcObjectCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
