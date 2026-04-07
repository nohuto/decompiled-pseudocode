/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180005B60
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000360C (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180002968 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x180002C4C (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18000471C (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180005458 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180007130 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800076C4 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x18002E5D0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x18008A83C (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        const struct tagRECT *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  struct CWindowData *WindowData; // rbx
  float ScalingFactorForCVI; // xmm0_4
  struct tagRECT v13; // xmm0
  CMILRefCountBase *v14; // rcx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  CMILRefCountBase *v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = 0LL;
  v8 = CContainerVisual::Initialize(this);
  v9 = v8;
  if ( v8 < 0 )
  {
    v15 = 86;
    goto LABEL_9;
  }
  v8 = CWindowSnapshot::Create(a2, &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    v15 = 89;
    goto LABEL_9;
  }
  WindowData = CTopLevelWindow::GetWindowData(a2);
  if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot(WindowData)
    && (int)CWindowSnapshot::GetCVI(
              *((CWindowSnapshot **)WindowData + 60),
              a4,
              (struct CCachedVisualImageProxy **)this + 31,
              (float *)this + 78) >= 0 )
  {
    v8 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
    v9 = v8;
    if ( v8 < 0 )
    {
      v15 = 94;
      goto LABEL_9;
    }
    goto LABEL_21;
  }
  if ( !a3 )
  {
    v9 = -2147023434;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801053C0, 1u, -2147023434, 0x63u, 0LL);
    goto LABEL_10;
  }
  *((_QWORD *)this + 34) = a3;
  CMILRefCountBase::AddRef(a3);
  if ( (*((_DWORD *)WindowData + 186) & 0xFFF) == 0x17 )
    ScalingFactorForCVI = FLOAT_1_0;
  else
    ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, a4);
  *((float *)this + 78) = ScalingFactorForCVI;
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 48LL))(*((_QWORD *)this + 34));
  v9 = v8;
  if ( v8 < 0 )
  {
    v15 = 115;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801053C0, 1u, v8, v15, 0LL);
    goto LABEL_10;
  }
  v8 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    v15 = 118;
    goto LABEL_9;
  }
LABEL_21:
  v13 = *a4;
  v14 = v16;
  *((_QWORD *)this + 30) = v16;
  *(struct tagRECT *)((char *)this + 296) = v13;
  *(struct tagRECT *)((char *)this + 280) = v13;
  if ( v14 )
    CMILRefCountBase::AddRef(v14);
  CVisual::SetDirtyFlags(this, 0x1000u);
LABEL_10:
  if ( v16 )
    CBaseObject::Release(v16);
  return v9;
}
