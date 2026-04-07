/*
 * XREFs of ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z @ 0x180068998
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180068858 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180034C10 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z @ 0x180068B1C (-AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x180068CA0 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementContinue(
        CWindowArrangementTransition *this,
        const struct tagRECT *a2)
{
  unsigned int v2; // ebx
  int v3; // r8d
  __int64 v4; // rdi
  struct tagRECT *v5; // r8
  CAcrylicSheet *v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  int v9; // eax
  __m256i v11; // [rsp+38h] [rbp-49h] BYREF
  __m256i v12; // [rsp+68h] [rbp-19h] BYREF
  __int64 v13; // [rsp+88h] [rbp+7h]
  struct tagRECT v14; // [rsp+98h] [rbp+17h] BYREF

  v2 = 0;
  v3 = (int)a2;
  if ( *((_BYTE *)this + 16) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 536LL);
    if ( v4 )
    {
      CDesktopManager::IsWindowAnimationEnabled();
      v11.m256i_i64[0] = 5LL;
      v14 = *v5;
      memset(&v11.m256i_u64[1], 0, 24);
      v7 = CAcrylicSheet::AdjustTargetRect(v6, &v14);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x53u, 0LL);
        return v2;
      }
      v12 = v11;
      v13 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)_xmm, (__m128d)_xmm);
      v9 = CAcrylicSheet::AnimateRect(
             v4,
             &v14,
             v8,
             0LL,
             &v12,
             LODWORD(FLOAT_0_1),
             5LL,
             v11.m256i_i64[1],
             v11.m256i_i64[2],
             _xmm,
             *((_QWORD *)&_xmm + 1));
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x54u, 0LL);
        return v2;
      }
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmGlassSheetAnimation_Update,
        v3,
        1,
        (__int64)&v14);
  }
  return v2;
}
