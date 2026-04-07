/*
 * XREFs of ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180019E50
 * Callers:
 *     ?SetOpacity@CImage@@UEAAXN@Z @ 0x1800C3840 (-SetOpacity@CImage@@UEAAXN@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800CDA00 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x1800E66E4 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 * Callees:
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x180019F78 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     ??$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x1800382A8 (--$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisual::SendSetOpacity(CVisualProxy **this, double a2)
{
  int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // edi
  volatile signed __int32 *v6; // rbx
  int v7; // eax
  int v8; // eax
  int v10; // eax
  CBaseObject *v11; // rcx
  struct CResourceProxy *v12; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 < 1.0 )
  {
    v12 = 0LL;
    v3 = CCompositor::CreateProxy<CEffectGroupProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6), &v12);
    v5 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x358u, 0LL);
      v11 = v12;
      if ( !v12 )
        return v5;
    }
    else
    {
      v6 = (volatile signed __int32 *)v12;
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)v12 + 2) + 16LL)
                                                                              + 736LL))(
             *(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL),
             *(unsigned int *)(*((_QWORD *)v12 + 2) + 24LL),
             v4,
             0LL,
             0);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x35Bu, 0LL);
      }
      else
      {
        v8 = CVisualProxy::SetEffect(this[2], (struct CResourceProxy *)v6);
        v5 = v8;
        if ( v8 >= 0 )
        {
          if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(struct CResourceProxy *, __int64))v12)(v12, 1LL);
          return v5;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x35Eu, 0LL);
      }
      v11 = (CBaseObject *)v6;
    }
    CBaseObject::Release(v11);
    return v5;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this[2] + 2) + 16LL) + 336LL))(
          *(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL),
          *(unsigned int *)(*((_QWORD *)this[2] + 2) + 24LL),
          0LL);
  v5 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x362u, 0LL);
  return v5;
}
