/*
 * XREFs of ?SHData_GetCustomDockTargetWindow@MOVESIZEDATA@@QEBAPEAUtagWND@@XZ @ 0x1C0239CBC
 * Callers:
 *     _anonymous_namespace_::ResolveWindowManagementTargetWindow @ 0x1C0032688 (_anonymous_namespace_--ResolveWindowManagementTargetWindow.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x1C01F17A8 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z @ 0x1C0239FF8 (-SHData_SetCustomDockTargetWindow@MOVESIZEDATA@@QEAA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0044C94 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall MOVESIZEDATA::SHData_GetCustomDockTargetWindow(MOVESIZEDATA *this)
{
  __int64 v2; // rcx
  __int64 v4; // rbx
  char v5; // dl

  v2 = *((_QWORD *)this + 41);
  if ( !v2 )
    return 0LL;
  v4 = HMValidateHandleNoSecure(v2, 1);
  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      1u,
      0xFu,
      (__int64)&WPP_0bf01d38e7493d5599743f09d218946b_Traceguids,
      *((_QWORD *)this + 41),
      v4);
  return (struct tagWND *)v4;
}
