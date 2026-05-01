/*
 * XREFs of ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029F90
 * Callers:
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180010300 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029E18 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18002B8E4 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005FB08 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002A0E0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostComputeDigest@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002A290 (-RmpActivityHostComputeDigest@@YA-AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetImportance@@YA?AT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A520 (-HampHostGetImportance@@YA-AT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpActivityHostResourceSetsChanged(struct _RM_ACTIVITY_HOST *a1)
{
  __int16 v1; // bx
  __int16 v3; // ax
  __int64 v4; // rcx
  __int16 v5; // ax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax

  v1 = *((_WORD *)a1 + 592);
  v3 = RmpActivityHostComputeDigest();
  *((_WORD *)a1 + 592) = v3;
  v4 = *((_QWORD *)a1 + 7);
  v5 = v3 & 0x80;
  if ( (v1 & 0x80u) != 0 )
  {
    if ( !v5 )
      --*(_DWORD *)(v4 + 212);
  }
  else if ( v5 )
  {
    ++*(_DWORD *)(v4 + 212);
  }
  *((_DWORD *)a1 + 364) = HampHostGetImportance((char *)a1 + 64);
  QueryUnbiasedInterruptTime((PULONGLONG)a1 + 181);
  if ( RmpActivityHostIsRevocable(a1) )
    SetEvent(*(HANDLE *)(*((_QWORD *)a1 + 7) + 88LL));
  v6 = *((_QWORD *)a1 + 6);
  *((_QWORD *)a1 + 154) = 0LL;
  v7 = *(_QWORD *)(v6 + 3536);
  v8 = *(_DWORD *)(v7 + 160);
  if ( (v8 & 3) == 0 )
  {
    *(_DWORD *)(v7 + 160) = v8 | 1;
    TpPostWork(*(_QWORD *)(v7 + 144));
  }
}
