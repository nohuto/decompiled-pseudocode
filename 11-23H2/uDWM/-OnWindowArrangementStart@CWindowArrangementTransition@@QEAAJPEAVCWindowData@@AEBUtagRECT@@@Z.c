/*
 * XREFs of ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEAVCWindowData@@AEBUtagRECT@@@Z @ 0x180105E64
 * Callers:
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18010B534 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z @ 0x1800A2498 (-AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x1800A261C (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementStart(
        CWindowArrangementTransition *this,
        struct CWindowData *a2,
        const struct tagRECT *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r8
  __m256i v13; // [rsp+30h] [rbp-A8h] BYREF
  __m256i v14; // [rsp+60h] [rbp-78h] BYREF
  __int64 v15; // [rsp+80h] [rbp-58h]
  struct tagRECT v16; // [rsp+90h] [rbp-48h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0;
  *((_BYTE *)this + 16) = 0;
  v7 = *(_QWORD *)(v3 + 544);
  if ( v7 )
  {
    v13.m256i_i32[0] = 5;
    v16 = *a3;
    memset(&v13.m256i_u64[1], 0, 24);
    v8 = CAcrylicSheet::AdjustTargetRect(this, &v16);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x2Cu);
      return v4;
    }
    v14 = v13;
    v15 = *((_QWORD *)&_xmm + 1);
    v10 = CAcrylicSheet::AnimateRect(v7, &v16, v9, 0, (__int64)&v14);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x2Du);
      return v4;
    }
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmGlassSheetAnimation_Start,
      (__int64)a3,
      1LL,
      (__int64)&v16);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmRippleAnimation_Start,
        v11,
        1LL,
        (__int64)&v16);
  }
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 5);
  *((_BYTE *)this + 16) = 1;
  return v4;
}
