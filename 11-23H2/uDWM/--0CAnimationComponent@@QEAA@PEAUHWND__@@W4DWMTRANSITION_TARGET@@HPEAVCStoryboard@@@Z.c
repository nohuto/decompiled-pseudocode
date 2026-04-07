/*
 * XREFs of ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800164E0
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180015CF0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DD1E8 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 *     ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EA49C (-CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TA.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EA690 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EAD60 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800EB3E8 (-CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAV.c)
 *     ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x1800EBED0 (-_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSI.c)
 * Callees:
 *     McTemplateU0pdd_EtwEventWriteTransfer @ 0x1800159B4 (McTemplateU0pdd_EtwEventWriteTransfer.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180037F44 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 */

__int64 __fastcall CAnimationComponent::CAnimationComponent(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 Theme; // rax
  int v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = a5;
  *(_DWORD *)(a1 + 8) = 1;
  *(_WORD *)(a1 + 66) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)a1 = &CAnimationComponent::`vftable';
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 28) = a4;
  *(_DWORD *)(a1 + 60) = 0x80000000;
  *(_WORD *)(a1 + 72) = 256;
  *(_BYTE *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = v5;
  if ( a2 && (unsigned int)GetWindowBand(a2, &v11) )
    *(_BYTE *)(a1 + 136) = v11 == 1;
  *(_DWORD *)(a1 + 56) = 0;
  if ( a4 >= 0 )
  {
    v10 = 0;
    Theme = CDesktopManager::GetTheme(3LL);
    if ( (int)GetThemeAnimationProperty(Theme, *(unsigned int *)(v5 + 72), (unsigned int)a4, 5LL, &v10, 4, &a5) >= 0 )
      *(_DWORD *)(a1 + 56) = v10;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0pdd_EtwEventWriteTransfer(
      *(_DWORD *)(a1 + 24) & 0xFFF,
      (int)&UdwmAnimationComponent_Created,
      *(_QWORD *)(a1 + 16),
      *(_DWORD *)(*(_QWORD *)(a1 + 144) + 72LL),
      *(_BYTE *)(a1 + 24));
  return a1;
}
