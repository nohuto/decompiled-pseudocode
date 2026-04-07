/*
 * XREFs of ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800E7970
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18006DE68 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x1800E7788 (--1CTouchDragVisual@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180021E9C (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

void __fastcall CTouchDragVisual::Stop(CTouchDragVisual *this)
{
  __int64 v2; // r8
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  CTouchVisual::UnRegisterGlobalTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( !*((_BYTE *)this + 449) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmTouchDragVisual_End,
        v2,
        1LL,
        (__int64)v3);
    *((_BYTE *)this + 449) = 1;
  }
}
