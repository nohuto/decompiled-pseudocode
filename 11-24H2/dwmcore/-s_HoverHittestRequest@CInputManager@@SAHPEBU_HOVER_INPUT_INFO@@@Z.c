/*
 * XREFs of ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18018F244
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18018F190 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x180090B70 (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180092EB4 (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x18018F400 (-GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x18018F54C (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E2D80 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CInputManager::s_HoverHittestRequest(const struct _HOVER_INPUT_INFO *a1)
{
  int v1; // ebx
  CGlobalComposition *v3; // rcx
  char *v4; // rsi
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CGlobalComposition *__hidden, struct _LUID, struct CDesktopTree **); // r9
  int DesktopTree; // eax
  __int64 v8; // r8
  CCachedVisualImage *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  struct CDesktopTree *v15; // [rsp+38h] [rbp-18h] BYREF
  char v16; // [rsp+40h] [rbp-10h]
  CCachedVisualImage *v17; // [rsp+78h] [rbp+28h] BYREF
  struct _LUID v18; // [rsp+80h] [rbp+30h]

  v1 = 0;
  if ( CInputManager::s_pInputManager )
  {
    v3 = (CGlobalComposition *)*((_QWORD *)CInputManager::s_pInputManager + 2);
    v4 = (char *)CInputManager::s_pInputManager + 80;
    v17 = 0LL;
    v18.HighPart = -2;
    v5 = *(_QWORD *)v3;
    v15 = 0LL;
    v16 = 1;
    v6 = *(__int64 (__fastcall **)(CGlobalComposition *__hidden, struct _LUID, struct CDesktopTree **))(v5 + 64);
    v18.LowPart = *((_DWORD *)a1 + 4);
    if ( v6 == CGlobalComposition::GetDesktopTree )
      DesktopTree = CGlobalComposition::GetDesktopTree(v3, v18, &v15);
    else
      DesktopTree = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v6)(v3, v18, &v15);
    v1 = DesktopTree;
    if ( v16 )
    {
      v9 = v17;
      v17 = v15;
      if ( v9 )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v9, (__int64)&v17, v8);
    }
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032BB90, 2u, v1, 0x185u, 0LL);
    }
    else
    {
      v10 = CDesktopTree::CleanTreeAndLockForRead(v17);
      v1 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032BB90, 2u, v10, 0x188u, 0LL);
        wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(&v17);
        return v1 >= 0;
      }
      v11 = CHitTestContext::HitTestTreeWalk(v4, v17);
      v1 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032BB90, 2u, v11, 0x192u, 0LL);
      CTreeLock::ReleaseShared((RTL_SRWLOCK *)(*((_QWORD *)v17 + 3) + 5704LL));
    }
    if ( v17 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v17, v12, v13);
  }
  return v1 >= 0;
}
