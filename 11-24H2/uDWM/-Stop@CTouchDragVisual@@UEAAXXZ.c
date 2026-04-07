/*
 * XREFs of ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x18007E550
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18000FA10 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18007E4BC (--1CTouchDragVisual@@MEAA@XZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001B720 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x18009B330 (-StopTimer@CTouchDragVisual@@MEAAJXZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

void __fastcall CTouchDragVisual::Stop(CTouchDragVisual *this)
{
  int v2; // r8d
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  CTouchDragVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( !*((_BYTE *)this + 401) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmTouchDragVisual_End,
        v2,
        1,
        (__int64)v3);
    *((_BYTE *)this + 401) = 1;
  }
}
