/*
 * XREFs of ?CreateInstance@CMouseAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1401900C8
 * Callers:
 *     CMouseAcceleration_CreateInstance @ 0x1402206D0 (CMouseAcceleration_CreateInstance.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CMouseAcceleration@@IEAA@I@Z @ 0x140220480 (--0CMouseAcceleration@@IEAA@I@Z.c)
 */

__int64 __fastcall CMouseAcceleration::CreateInstance(struct CDeviceAcceleration **a1, unsigned int a2)
{
  CMouseAcceleration *v4; // rax
  struct CDeviceAcceleration *v5; // rax
  bool v7; // bl
  bool v8; // di
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx

  *a1 = 0LL;
  v4 = (CMouseAcceleration *)Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x63634164u);
  if ( v4 && (v5 = CMouseAcceleration::CMouseAcceleration(v4, a2)) != 0LL )
  {
    *a1 = v5;
    return 0LL;
  }
  else
  {
    v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        14,
        10,
        (__int64)&WPP_689b4b3ed46f34993055388a948daf5b_Traceguids);
    }
    return 3221225495LL;
  }
}
