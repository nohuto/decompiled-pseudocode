/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800134C0
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800156B0 (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18000B180 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18000FD64 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180035BC0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18005430C (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180054D60 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x180055F4C (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x18010D324 (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        const struct tagRECT *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  float ScalingFactorForCVI; // xmm0_4
  struct tagRECT v13; // xmm0
  CBaseObject *v14; // rcx
  int v15; // eax
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-28h]
  CBaseObject *v19; // [rsp+30h] [rbp-18h] BYREF

  v19 = 0LL;
  v8 = CVisual::Initialize(this);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129F58, 1u, v8, 0x57u, 0LL);
    return v9;
  }
  v10 = CWindowSnapshot::Create(a2, &v19);
  v9 = v10;
  if ( v10 < 0 )
  {
    v18 = 90;
  }
  else
  {
    v11 = *((_QWORD *)a2 + 94);
    if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot((const struct CWindowData *)v11)
      && (int)CWindowSnapshot::GetCVI(
                *(CWindowSnapshot **)(v11 + 480),
                a4,
                (struct CCachedVisualImageProxy **)this + 37,
                (float *)this + 90) >= 0 )
    {
      v10 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
      v9 = v10;
      if ( v10 < 0 )
      {
        v18 = 95;
        goto LABEL_19;
      }
LABEL_9:
      v13 = *a4;
      v14 = v19;
      *((_QWORD *)this + 36) = v19;
      *(struct tagRECT *)((char *)this + 344) = v13;
      *(struct tagRECT *)((char *)this + 328) = v13;
      if ( v14 )
        _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
      v15 = *((_DWORD *)this + 22);
      if ( (v15 & 0x1000) == 0 )
      {
        *((_DWORD *)this + 22) = v15 | 0x1000;
        CVisual::PropagateDirtyChildren(this);
      }
      goto LABEL_13;
    }
    if ( !a3 )
    {
      v9 = -2147023434;
      v17 = -2147023434;
      v18 = 100;
      goto LABEL_21;
    }
    *((_QWORD *)this + 40) = a3;
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    if ( (*(_DWORD *)(v11 + 680) & 0xFFF) == 0x17 )
      ScalingFactorForCVI = FLOAT_1_0;
    else
      ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, a4);
    *((float *)this + 90) = ScalingFactorForCVI;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 64LL))(*((_QWORD *)this + 40));
    v9 = v10;
    if ( v10 < 0 )
    {
      v18 = 116;
      goto LABEL_19;
    }
    v10 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a4);
    v9 = v10;
    if ( v10 >= 0 )
      goto LABEL_9;
    v18 = 119;
  }
LABEL_19:
  v17 = v10;
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129F58, 1u, v17, v18, 0LL);
LABEL_13:
  if ( v19 )
    CBaseObject::Release(v19);
  return v9;
}
