/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x1800546E0
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180053FDC (-Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180035BC0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18005430C (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180054D60 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2,
        struct CVisual *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct tagRECT v8; // xmm0
  CDesktopManager *v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax

  v6 = CVisual::Initialize(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x86u, 0LL);
  }
  else
  {
    *((_QWORD *)this + 36) = 0LL;
    v8 = *a2;
    v9 = CDesktopManager::s_pDesktopManagerInstance;
    *(struct tagRECT *)((char *)this + 344) = *a2;
    *(struct tagRECT *)((char *)this + 328) = v8;
    *((float *)this + 90) = CDesktopManager::GetScalingFactorForCVI(v9, a2);
    *((_QWORD *)this + 40) = a3;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 64LL))(*((_QWORD *)this + 40));
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x8Eu, 0LL);
    }
    else
    {
      v11 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a2);
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x91u, 0LL);
      }
      else
      {
        v12 = *((_DWORD *)this + 22);
        if ( (v12 & 0x1000) == 0 )
        {
          *((_DWORD *)this + 22) = v12 | 0x1000;
          CVisual::PropagateDirtyChildren(this);
        }
      }
    }
  }
  return v7;
}
