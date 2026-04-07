/*
 * XREFs of ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800DD070
 * Callers:
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800DC678 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800DDA50 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DEB20 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DF690 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0400 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x1800DCDD8 (-_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TAR.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800EB870 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_CreateGuttersForApp(
        __int64 a1,
        __int64 a2,
        const struct tagRECT *a3,
        void *a4,
        unsigned int a5,
        CBaseObject *a6,
        CBaseObject *a7)
{
  CBaseObject *v7; // r12
  CBaseObject *v8; // r13
  int v13; // edi
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  CBaseObject *v17; // rcx
  struct tagRECT v18; // xmm0
  CBaseObject *v19; // rbx
  struct tagRECT v20; // xmm0
  struct tagRECT v22; // [rsp+40h] [rbp-10h] BYREF

  v7 = a6;
  v8 = a7;
  a6 = 0LL;
  a7 = 0LL;
  *(_QWORD *)v7 = 0LL;
  *(_QWORD *)v8 = 0LL;
  v13 = *(_DWORD *)(a2 + 680);
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, a5);
  v15 = CStoryboard::_CreateAndAddGutterAnimationComponentsForRect(
          a1,
          *(_QWORD *)(a2 + 40),
          a5,
          v14,
          (__int64)a3,
          a4,
          (CBaseObject *)((unsigned __int64)&a6 & -(__int64)((v13 & 0x10000) != 0)),
          (CBaseObject *)((unsigned __int64)&a7 & -(__int64)((v13 & 0x8000) != 0)));
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x7F3u);
LABEL_7:
    v19 = a7;
    v17 = a6;
    goto LABEL_8;
  }
  CTransitionVisualController::GetMonitorRectFromRectImpl(a3, &v22);
  v17 = a6;
  if ( a6 )
  {
    v18 = v22;
    *((_DWORD *)a6 + 17) = 2;
    *(struct tagRECT *)((char *)v17 + 104) = v18;
    *(_QWORD *)v7 = v17;
    _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
    v17 = a6;
  }
  v19 = a7;
  if ( a7 )
  {
    v20 = v22;
    *((_DWORD *)a7 + 17) = 2;
    *(struct tagRECT *)((char *)v19 + 104) = v20;
    *(_QWORD *)v8 = v19;
    _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
    goto LABEL_7;
  }
LABEL_8:
  if ( v17 )
    CBaseObject::Release(v17);
  if ( v19 )
    CBaseObject::Release(v19);
  return v16;
}
