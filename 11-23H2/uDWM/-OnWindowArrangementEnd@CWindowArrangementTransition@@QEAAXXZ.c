/*
 * XREFs of ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAXXZ @ 0x180105E00
 * Callers:
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x180065DC4 (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

void __fastcall CWindowArrangementTransition::OnWindowArrangementEnd(
        CWindowArrangementTransition *this,
        __int64 a2,
        __int64 a3)
{
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 16) )
  {
    *((_QWORD *)this + 1) = 0LL;
    *((_BYTE *)this + 16) = 0;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmGlassSheetFadeOut_Start,
        a3,
        1LL,
        (__int64)v3);
  }
}
