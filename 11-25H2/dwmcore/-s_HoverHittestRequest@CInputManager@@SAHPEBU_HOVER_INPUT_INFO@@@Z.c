/*
 * XREFs of ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x1801AD504
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x1801AD450 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x180135730 (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?ReleaseShared@CTreeLock@@QEAAXXZ @ 0x180137AD4 (-ReleaseShared@CTreeLock@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8938 (--1-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x1801AD6C0 (-GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x1801AD80C (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CInputManager::s_HoverHittestRequest(const struct _HOVER_INPUT_INFO *a1)
{
  int v1; // ebx
  CGlobalComposition *v3; // rcx
  char *v4; // rsi
  __int64 v5; // rax
  __int64 (__fastcall *v6)(CGlobalComposition *__hidden, struct _LUID, struct CDesktopTree **); // r9
  int DesktopTree; // eax
  CResource *v8; // rcx
  int v9; // eax
  int v10; // eax
  struct CDesktopTree *v12; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+40h] [rbp-10h]
  CResource *v14; // [rsp+78h] [rbp+28h] BYREF
  struct _LUID v15; // [rsp+80h] [rbp+30h]

  v1 = 0;
  if ( CInputManager::s_pInputManager )
  {
    v3 = (CGlobalComposition *)*((_QWORD *)CInputManager::s_pInputManager + 2);
    v4 = (char *)CInputManager::s_pInputManager + 80;
    v14 = 0LL;
    v15.HighPart = -2;
    v5 = *(_QWORD *)v3;
    v12 = 0LL;
    v13 = 1;
    v6 = *(__int64 (__fastcall **)(CGlobalComposition *__hidden, struct _LUID, struct CDesktopTree **))(v5 + 64);
    v15.LowPart = *((_DWORD *)a1 + 4);
    if ( v6 == CGlobalComposition::GetDesktopTree )
      DesktopTree = CGlobalComposition::GetDesktopTree(v3, v15, &v12);
    else
      DesktopTree = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v6)(v3, v15, &v12);
    v1 = DesktopTree;
    if ( v13 )
    {
      v8 = v14;
      v14 = v12;
      if ( v8 )
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v8);
    }
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180337838, 2u, v1, 0x185u, 0LL);
    }
    else
    {
      v9 = CDesktopTree::CleanTreeAndLockForRead(v14);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180337838, 2u, v9, 0x188u, 0LL);
        wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(&v14);
        return v1 >= 0;
      }
      v10 = CHitTestContext::HitTestTreeWalk(v4, v14);
      v1 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180337838, 2u, v10, 0x192u, 0LL);
      CTreeLock::ReleaseShared((RTL_SRWLOCK *)(*((_QWORD *)v14 + 3) + 5704LL));
    }
    if ( v14 )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v14);
  }
  return v1 >= 0;
}
