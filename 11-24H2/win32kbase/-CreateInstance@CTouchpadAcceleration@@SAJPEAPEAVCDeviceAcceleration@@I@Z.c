/*
 * XREFs of ?CreateInstance@CTouchpadAcceleration@@SAJPEAPEAVCDeviceAcceleration@@I@Z @ 0x1401901B0
 * Callers:
 *     CTouchpadAcceleration_CreateInstance @ 0x140220740 (CTouchpadAcceleration_CreateInstance.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall CTouchpadAcceleration::CreateInstance(struct CDeviceAcceleration **a1, int a2)
{
  __int64 v4; // rax
  bool v6; // bl
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  *a1 = 0LL;
  v4 = Win32AllocPoolZInitImpl(256LL, 0x68uLL, 0x63634164u);
  if ( v4 )
  {
    *(_BYTE *)(v4 + 8) = 0;
    *(_OWORD *)(v4 + 16) = 0LL;
    *a1 = (struct CDeviceAcceleration *)v4;
    *(_OWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_OWORD *)(v4 + 56) = 0LL;
    *(_OWORD *)(v4 + 72) = 0LL;
    *(_QWORD *)(v4 + 88) = 0LL;
    *(_QWORD *)v4 = &CTouchpadAcceleration::`vftable';
    *(_DWORD *)(v4 + 96) = a2;
    return 0LL;
  }
  else
  {
    v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        14,
        11,
        (__int64)&WPP_689b4b3ed46f34993055388a948daf5b_Traceguids);
    }
    return 3221225495LL;
  }
}
