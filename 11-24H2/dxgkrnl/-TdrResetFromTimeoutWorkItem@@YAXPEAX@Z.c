/*
 * XREFs of ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1401D05A0
 * Callers:
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1402C801C (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1401CF8E0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401CFA18 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D0450 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

void __fastcall TdrResetFromTimeoutWorkItem(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  struct _LUID *v4; // rdx

  v1 = a1[4];
  v3 = *(_QWORD *)(v1 + 32);
  TdrResetFromTimeout((DXGADAPTER **)v1);
  v4 = *(struct _LUID **)(v1 + 2904);
  if ( !v4 || KeGetCurrentThread() == (struct _KTHREAD *)v4 )
  {
    LOBYTE(v4) = 1;
    TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v1, v4, 1);
    WdLogSingleEntry4(3LL, v3, MEMORY[0xFFFFF78000000320], KeGetCurrentThread(), v1);
    WdLogGlobalForLineNumber = 2979;
  }
  else
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2959;
  }
  if ( *(struct _KTHREAD **)(v1 + 2904) != KeGetCurrentThread() )
  {
    TdrDereferenceRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v1, 0);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
  }
}
