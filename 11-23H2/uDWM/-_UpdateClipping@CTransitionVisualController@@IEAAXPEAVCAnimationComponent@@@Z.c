/*
 * XREFs of ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800098C0
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x180014A8C (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180014E94 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800099AC (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     McTemplateU0pddddq_EtwEventWriteTransfer @ 0x180009A4C (McTemplateU0pddddq_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800EB870 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

void __fastcall CTransitionVisualController::_UpdateClipping(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int v2; // ecx
  RECT rcMonitor; // xmm6
  int v5; // ecx
  __int64 v6; // rcx
  char v7; // al
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  struct tagRECT v11; // xmm0
  HMONITOR v12; // rax
  struct tagRECT v13; // [rsp+48h] [rbp-9h] BYREF
  struct tagRECT v14; // [rsp+58h] [rbp+7h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp+17h] BYREF

  v2 = *((_DWORD *)a2 + 17);
  rcMonitor = 0LL;
  v13 = 0LL;
  if ( !v2 )
  {
    v12 = MonitorFromWindow(*((HWND *)a2 + 2), 1u);
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( GetMonitorInfoW(v12, &mi) )
    {
      rcMonitor = mi.rcMonitor;
      goto LABEL_4;
    }
    v11 = *(struct tagRECT *)((char *)a2 + 88);
    goto LABEL_16;
  }
  v5 = v2 - 1;
  if ( v5 )
  {
    v10 = v5 - 1;
    if ( !v10 )
    {
      rcMonitor = *(RECT *)((char *)a2 + 104);
      goto LABEL_4;
    }
    if ( v10 != 1 )
      goto LABEL_5;
    v11 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 856LL);
LABEL_16:
    v14 = v11;
    CTransitionVisualController::GetMonitorRectFromRectImpl(&v14, &v13);
    rcMonitor = v13;
    goto LABEL_5;
  }
  rcMonitor = *(RECT *)((char *)a2 + 88);
LABEL_4:
  v13 = rcMonitor;
LABEL_5:
  v6 = *((_QWORD *)a2 + 5);
  if ( !*(_BYTE *)(v6 + 986) )
  {
    v7 = CTransitionVisualController::_SetAnimationClipRegion(
           (CTransitionVisualController *)-v6,
           (struct CVisual *)((v6 + 8) & -(__int64)(v6 != 0)),
           &v13);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pddddq_EtwEventWriteTransfer(
        v9,
        v8,
        *((_QWORD *)a2 + 2),
        _mm_cvtsi128_si32((__m128i)rcMonitor),
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 4)),
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 8)),
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 12)),
        v7);
  }
  *(RECT *)(*((_QWORD *)a2 + 5) + 840LL) = rcMonitor;
}
