/*
 * XREFs of ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D0450
 * Callers:
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1401D05A0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     TdrBugcheckOnTimeout @ 0x140186C5C (TdrBugcheckOnTimeout.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x14018C514 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140195458 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1401CF3D0 (-Start@CVP_SYSTEM_THREAD@@QEAAJXZ.c)
 */

__int64 __fastcall TdrResetFromTimeout(DXGADAPTER **a1)
{
  int v2; // eax
  struct _KTHREAD *v3; // rcx
  __int64 Pool2; // rax
  struct _TDR_RECOVERY_CONTEXT *v5; // rax
  __int64 v6; // r8
  NTSTATUS v7; // eax

  v2 = DXGADAPTER::Reset(a1[4], a1);
  if ( v2 < 0 )
  {
    a1[13] = (DXGADAPTER *)-1LL;
    TdrBugcheckOnTimeout((struct _TDR_RECOVERY_CONTEXT *)a1, v2, 11);
  }
  v3 = a1[363];
  if ( (!v3 || KeGetCurrentThread() == v3) && *((_QWORD *)a1[4] + 390) )
  {
    Pool2 = ExAllocatePool2(256LL, 32LL, 1380209782LL);
    if ( !Pool2 )
      TdrBugcheckOnTimeout((struct _TDR_RECOVERY_CONTEXT *)a1, -1073741801, 7);
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_QWORD *)Pool2 = &CTDR_GDI_RESET_THREAD::`vftable';
    v5 = TdrReferenceRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)a1);
    *(_QWORD *)(v6 + 24) = v5;
    v7 = CVP_SYSTEM_THREAD::Start((void **)v6);
    if ( v7 < 0 )
      TdrBugcheckOnTimeout((struct _TDR_RECOVERY_CONTEXT *)a1, v7, 8);
  }
  return 0LL;
}
