/*
 * XREFs of ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401CB1C0
 * Callers:
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1401CB310 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     TdrBugcheckOnTimeout @ 0x14018490C (TdrBugcheckOnTimeout.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x14018A2C4 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401930D4 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1401CA140 (-Start@CVP_SYSTEM_THREAD@@QEAAJXZ.c)
 */

__int64 __fastcall TdrResetFromTimeout(DXGADAPTER **a1)
{
  int v2; // eax
  __int64 v3; // r9
  struct _KTHREAD *v4; // rcx
  __int64 Pool2; // rax
  struct _TDR_RECOVERY_CONTEXT *v6; // rax
  __int64 v7; // r8
  NTSTATUS v8; // eax

  v2 = DXGADAPTER::Reset(a1[4], a1);
  if ( v2 < 0 )
  {
    a1[13] = (DXGADAPTER *)-1LL;
    TdrBugcheckOnTimeout((struct _TDR_RECOVERY_CONTEXT *)a1, v2, 11);
  }
  v4 = a1[363];
  if ( (!v4 || KeGetCurrentThread() == v4) && *((_QWORD *)a1[4] + 390) )
  {
    Pool2 = ExAllocatePool2(256LL, 32LL, 1380209782LL, v3);
    if ( !Pool2 )
      TdrBugcheckOnTimeout((struct _TDR_RECOVERY_CONTEXT *)a1, -1073741801, 7);
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_DWORD *)(Pool2 + 16) = 0;
    *(_QWORD *)Pool2 = &CTDR_GDI_RESET_THREAD::`vftable';
    v6 = TdrReferenceRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)a1);
    *(_QWORD *)(v7 + 24) = v6;
    v8 = CVP_SYSTEM_THREAD::Start((void **)v7);
    if ( v8 < 0 )
      TdrBugcheckOnTimeout((struct _TDR_RECOVERY_CONTEXT *)a1, v8, 8);
  }
  return 0LL;
}
