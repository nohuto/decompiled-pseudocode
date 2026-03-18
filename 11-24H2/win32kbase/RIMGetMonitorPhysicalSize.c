/*
 * XREFs of RIMGetMonitorPhysicalSize @ 0x1401E1980
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x1400C7140 (rimInUserCritCreatePointerDeviceInfo.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1400C7774 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DrvGetMonitorPhysicalDimensions @ 0x1401CAF00 (DrvGetMonitorPhysicalDimensions.c)
 */

__int64 __fastcall RIMGetMonitorPhysicalSize(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // di
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  signed int v12; // eax
  signed int v13; // ecx
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0;
  v16 = 0;
  v2 = a2;
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    v2 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 57008) + 104LL);
  if ( (int)DrvGetMonitorPhysicalDimensions(*(_QWORD *)(v2 + 80), &v15, &v16, 0LL, 0LL) < 0
    && ((v5 = *(_QWORD *)(W32GetUserSessionState(v4) + 57008), v2 == *(_QWORD *)(v5 + 104))
     || (v6 = W32GetUserSessionState(v5),
         (int)DrvGetMonitorPhysicalDimensions(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 57008) + 104LL) + 80LL),
                &v15,
                &v16,
                0LL,
                0LL) < 0)) )
  {
    *(_DWORD *)(a1 + 8) = 20320;
    *(_DWORD *)(a1 + 12) = 15240;
    v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
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
        *(_QWORD *)(UserSessionState + 19392),
        3,
        1,
        16,
        (__int64)&WPP_2aa4d20025f835b2fe1cb6898cbf8660_Traceguids);
    }
  }
  else
  {
    v12 = 1000 * v15;
    v13 = 1000 * v16;
    *(_DWORD *)(a1 + 8) = 1000 * v15;
    *(_DWORD *)(a1 + 12) = v13;
    if ( v12 <= 0 || v13 <= 0 )
    {
      *(_DWORD *)(a1 + 8) = 20320;
      *(_DWORD *)(a1 + 12) = 15240;
    }
  }
  return a1;
}
