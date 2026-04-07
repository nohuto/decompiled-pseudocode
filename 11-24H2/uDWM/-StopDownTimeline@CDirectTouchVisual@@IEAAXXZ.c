/*
 * XREFs of ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x1800121B8
 * Callers:
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x18000E380 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x1800120E0 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800123F8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x1800865C8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

void __fastcall CDirectTouchVisual::StopDownTimeline(CDirectTouchVisual *this, __int64 a2, int a3)
{
  CTimelineBase *v4; // rcx
  _BYTE v5[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 42) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (unsigned int)&UdwmDirectTouchDownAnimation_End,
        a3,
        1,
        (__int64)v5);
    v4 = (CTimelineBase *)*((_QWORD *)this + 42);
    if ( v4 )
    {
      CTimelineBase::Release(v4);
      *((_QWORD *)this + 42) = 0LL;
    }
  }
}
