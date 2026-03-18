/*
 * XREFs of ?GetShadowBufferDirtyRect@@YAEPEAUtagRECT@@II@Z @ 0x14005B118
 * Callers:
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403F49F0 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall GetShadowBufferDirtyRect(struct tagRECT *a1, unsigned int a2, unsigned int a3)
{
  char v6; // di
  __int64 v7; // rbp
  KIRQL v9; // al
  LONG v10; // ecx
  KIRQL v11; // r8
  LONG v12; // edx
  LONG v13; // eax
  LONG v14; // ecx
  unsigned int right; // ecx
  unsigned int bottom; // eax

  v6 = 1;
  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal() + 203) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4758;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"DXGGLOBAL::GetGlobal()->GetVirtualFrameBufferAccessLock()->IsOwner()",
      4758LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 199);
  if ( !v7 )
    return 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 24));
  v10 = *(_DWORD *)(v7 + 4);
  v11 = v9;
  v12 = *(_DWORD *)(v7 + 12);
  v13 = *(_DWORD *)(v7 + 16);
  *(_DWORD *)(v7 + 4) = -1;
  *(_DWORD *)(v7 + 12) = -1;
  *(_DWORD *)(v7 + 16) = 0;
  a1->left = v10;
  v14 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)(v7 + 8) = 0;
  a1->right = v14;
  a1->top = v12;
  a1->bottom = v13;
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 24), v11);
  right = a1->right;
  if ( a1->left >= right )
    return 0;
  bottom = a1->bottom;
  if ( a1->top >= bottom || right > a2 || bottom > a3 )
    return 0;
  return v6;
}
