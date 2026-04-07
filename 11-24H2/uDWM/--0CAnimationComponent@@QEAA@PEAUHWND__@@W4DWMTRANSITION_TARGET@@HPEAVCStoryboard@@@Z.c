/*
 * XREFs of ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x180042850
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180050A28 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180086768 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800D49BC (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800DCF2C (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800DD130 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x1800DDD88 (-_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSI.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 *     ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z @ 0x18007BA58 (-_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z.c)
 */

__int64 __fastcall CAnimationComponent::CAnimationComponent(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v14; // [rsp+70h] [rbp+18h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  CBaseObject::CBaseObject((CBaseObject *)a1);
  v8 = a5;
  *(_QWORD *)a1 = &CAnimationComponent::`vftable';
  *(_QWORD *)(a1 + 16) = v9;
  *(_DWORD *)(a1 + 24) = v10;
  *(_DWORD *)(a1 + 28) = a4;
  *(_DWORD *)(a1 + 60) = 0x80000000;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_WORD *)(a1 + 72) = 256;
  *(_BYTE *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = v8;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v14 = 0;
  if ( v9 && (unsigned int)GetWindowBand(v7, &v14) )
    *(_BYTE *)(a1 + 136) = v14 == 1;
  *(_DWORD *)(a1 + 56) = 0;
  if ( a4 >= 0 )
  {
    v11 = *(unsigned int *)(v8 + 72);
    v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 139);
    LODWORD(a5) = 0;
    v15 = 0;
    if ( (int)GetThemeAnimationProperty(v12, v11, (unsigned int)a4, 5LL, &v15, 4, &a5) >= 0 )
      *(_DWORD *)(a1 + 56) = v15;
  }
  CAnimationComponent::_LogEvent(a1, 0LL);
  return a1;
}
