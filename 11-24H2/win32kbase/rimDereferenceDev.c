/*
 * XREFs of rimDereferenceDev @ 0x140133C98
 * Callers:
 *     rimFreeSpecificDevFinal @ 0x14017A888 (rimFreeSpecificDevFinal.c)
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 *     ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x14020D6F4 (-RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3C28 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

LONG_PTR __fastcall rimDereferenceDev(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  int v7; // eax
  void *v8; // r14
  void *v9; // r15
  char v10; // si
  char v11; // bp
  __int64 UserSessionState; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(a1 + 168) & 0x40000000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 83LL);
  }
  v6 = *(_QWORD *)(a1 + 32);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 89LL);
  v7 = *(_DWORD *)(a1 + 168);
  v8 = *(void **)(a1 + 16);
  v9 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( (v7 & 0x20) == 0 && (v7 & 0x2000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 172) & 8) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 102LL);
    if ( *(_QWORD *)(a1 + 176) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 103LL);
  }
  if ( *(_QWORD *)(v6 + 32) == PsGetCurrentProcess(v3, v2, v4, v5) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v11,
        *(_QWORD *)(UserSessionState + 19392),
        4u,
        1u,
        0xAu,
        (__int64)&WPP_0b7b67ba98653d08fb379134e851684c_Traceguids,
        v8,
        a1);
    }
    ObCloseHandle(v8, 1);
  }
  ZwClose(v9);
  v14 = W32GetUserSessionState(v13);
  RIMLockExclusive(v14 + 56);
  *(_BYTE *)(v6 + 11) = 1;
  v16 = W32GetUserSessionState(v15);
  RIMUnlockExclusive(v16 + 56);
  return ObfDereferenceObject((PVOID)v6);
}
