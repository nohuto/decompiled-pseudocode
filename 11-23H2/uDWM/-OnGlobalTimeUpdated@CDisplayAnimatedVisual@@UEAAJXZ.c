/*
 * XREFs of ?OnGlobalTimeUpdated@CDisplayAnimatedVisual@@UEAAJXZ @ 0x18006CB50
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180011060 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A13B4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B7EA4 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::OnGlobalTimeUpdated(CDisplayAnimatedVisual *this)
{
  CDesktopManager *v2; // rdx
  int v3; // eax
  int v4; // eax
  int v6; // [rsp+20h] [rbp-48h]
  _BYTE v7[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = CDesktopManager::s_pDesktopManagerInstance;
  if ( !*((_BYTE *)this + 432) )
  {
    *((_QWORD *)this + 53) = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33);
    *((_BYTE *)this + 432) = 1;
  }
  if ( *((double *)v2 + 33) - *((double *)this + 53) >= 4.0 )
  {
    if ( (unsigned int)dword_180147058 > 5 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
      tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_180147058, byte_180125F7C, 0LL, 0LL, 2, (__int64)v7);
    v4 = CDisplayAnimatedVisual::Stop(this, 0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x326,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v4,
        v6);
  }
  else if ( *((_BYTE *)this + 434) )
  {
    v3 = (*(__int64 (__fastcall **)(CDisplayAnimatedVisual *))(*(_QWORD *)this + 240LL))(this);
    if ( v3 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x31D,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)v3,
        v6);
  }
  return 0LL;
}
