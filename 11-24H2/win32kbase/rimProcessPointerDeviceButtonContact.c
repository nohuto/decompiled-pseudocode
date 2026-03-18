/*
 * XREFs of rimProcessPointerDeviceButtonContact @ 0x1400571D4
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x140057884 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6DC8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCmIsContactSuppressed @ 0x1400D975C (RIMCmIsContactSuppressed.c)
 *     RIMGetPointerInputType @ 0x1400D98AC (RIMGetPointerInputType.c)
 *     RIMCmGetButtonContact @ 0x140104458 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1401057F8 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMAddToActiveDevices @ 0x14017C830 (RIMAddToActiveDevices.c)
 *     rimExtractButtonPageButtonUsages @ 0x1401810DC (rimExtractButtonPageButtonUsages.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x14018250C (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmActivateButtonContact @ 0x1401F1704 (RIMCmActivateButtonContact.c)
 */

_UNKNOWN **__fastcall rimProcessPointerDeviceButtonContact(
        struct RawInputManagerObject *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 v6; // rdi
  __int64 v9; // r13
  __int64 ButtonContact; // rbx
  LARGE_INTEGER v11; // rcx
  bool v12; // si
  bool v13; // bp
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  int v17; // esi
  __int64 v18; // rax
  char v19; // bl
  _UNKNOWN **result; // rax
  bool v21; // di
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  int v25; // [rsp+40h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 456);
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 440) + 16LL);
  v25 = 0;
  ButtonContact = RIMCmGetButtonContact(v6);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    v11.QuadPart = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (v11.LowPart & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v12 = 1;
  }
  v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = ((__int64 (__fastcall *)(_QWORD))W32GetUserSessionState)((LARGE_INTEGER)v11.QuadPart);
    LOBYTE(v15) = v13;
    LOBYTE(v16) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v15,
      *(_QWORD *)(v14 + 19392),
      4,
      1,
      32,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  if ( *(_DWORD *)(v6 + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 658LL);
  if ( !ButtonContact )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 659LL);
  if ( (int)rimExtractButtonPageButtonUsages(v6, v9, a3, a4, &v25) >= 0 )
  {
    v17 = v25;
    if ( (v25 & 4) != 0 )
    {
      if ( !__CFSHR__(*(_DWORD *)(ButtonContact + 32), 2) )
      {
        RIMCmActivateButtonContact(v6);
        if ( *(_DWORD *)(v6 + 1016) == 1 )
          RIMAddToActiveDevices(a1);
      }
    }
    else if ( __CFSHR__(*(_DWORD *)(ButtonContact + 32), 2) )
    {
      *(_DWORD *)(ButtonContact + 2364) |= 4u;
    }
    if ( (*(_DWORD *)(ButtonContact + 32) & 2) != 0
      && (!(unsigned int)RIMCmIsContactSuppressed(ButtonContact)
       || (unsigned int)RIMCmIsContactDeliveringPointerData(ButtonContact)
       || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(ButtonContact)) )
    {
      *(LARGE_INTEGER *)(ButtonContact + 48) = PerformanceCounter;
      *(_DWORD *)(ButtonContact + 2416) = a5;
      *(_DWORD *)(ButtonContact + 2432) = RIMGetPointerInputType(v6);
      *(_DWORD *)(ButtonContact + 2444) = v17;
      *(_DWORD *)(ButtonContact + 2496) = *(_DWORD *)(v6 + 844);
      *(_QWORD *)(ButtonContact + 2512) = *(_QWORD *)(v6 + 872);
      if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
        v18 = *(_QWORD *)(a2 + 24);
      else
        v18 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(ButtonContact + 2364) |= 1u;
      *(_QWORD *)(ButtonContact + 2448) = v18;
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v19 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v23) = v21;
    LOBYTE(v24) = v19;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v24,
                          v23,
                          *(_QWORD *)(UserSessionState + 19392),
                          4,
                          1,
                          33,
                          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
  }
  return result;
}
