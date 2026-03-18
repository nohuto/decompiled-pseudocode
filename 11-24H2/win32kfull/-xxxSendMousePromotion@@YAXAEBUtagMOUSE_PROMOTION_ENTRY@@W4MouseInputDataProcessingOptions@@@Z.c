/*
 * XREFs of ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z @ 0x1402AEC78
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1400A83D8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x140195A58 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_HHLssLLL @ 0x1402AF054 (WPP_RECORDER_AND_TRACE_SF_HHLssLLL.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSendMousePromotion(__int64 a1)
{
  __int64 v2; // r13
  int v3; // ebx
  __int64 v4; // rcx
  char v5; // si
  int IsEnabledDeviceUsageNoInline; // eax
  int v7; // edx
  bool v8; // di
  __int64 UserSessionState; // rax
  const char *v10; // rdx
  int v11; // r8d

  v2 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  KeQueryPerformanceCounter(0LL);
  v3 = ((_DWORD)v2 << 8) - (*(_DWORD *)(a1 + 24) << 8);
  InputTraceLogging::Mouse::InjectInput();
  v4 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v4 == 3 )
  {
    v4 = v3 | (unsigned int)*(unsigned __int16 *)(a1 + 40);
    if ( (*(_DWORD *)(a1 + 44) & 0x40) != 0 )
      LODWORD(v4) = v4 | 0x80;
  }
  W32GetUserSessionState(v4, 64LL);
  v5 = 1;
  IsEnabledDeviceUsageNoInline = Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline();
  v7 = *(_DWORD *)(a1 + 44);
  if ( !IsEnabledDeviceUsageNoInline && __CFSHR__(v7, 2) )
    UIPrivilegeIsolation::Enforced((UIPrivilegeIsolation *)(unsigned int)-__CFSHR__(v7, 2));
  v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v5 = 0;
  }
  if ( v8 || v5 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    v10 = "FALSE";
    LOBYTE(v11) = v5;
    LOBYTE(v10) = v8;
    WPP_RECORDER_AND_TRACE_SF_HHLssLLL(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      (_DWORD)v10,
      v11,
      *(_QWORD *)(UserSessionState + 69416));
  }
  return SynthesizeMouseInput(0LL);
}
