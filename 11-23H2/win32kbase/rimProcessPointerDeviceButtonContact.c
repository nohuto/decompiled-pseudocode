/*
 * XREFs of rimProcessPointerDeviceButtonContact @ 0x1C01AB8BC
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01A7EB8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01A8308 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMGetPointerInputType @ 0x1C00E0FE4 (RIMGetPointerInputType.c)
 *     rimExtractButtonPageButtonUsages @ 0x1C00E2E6E (rimExtractButtonPageButtonUsages.c)
 *     RIMCmGetButtonContact @ 0x1C00E354C (RIMCmGetButtonContact.c)
 *     RIMCmIsContactSuppressed @ 0x1C00E3566 (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C00E35B8 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMAddToActiveDevices @ 0x1C0186398 (RIMAddToActiveDevices.c)
 *     RIMCmActivateButtonContact @ 0x1C01AFB0C (RIMCmActivateButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C01B0924 (RIMCmIsContactDeliveringPointerData.c)
 */

_UNKNOWN **__fastcall rimProcessPointerDeviceButtonContact(__int64 a1, LARGE_INTEGER *a2, __int64 a3, int a4, DWORD a5)
{
  __int64 QuadPart; // rdi
  __int64 v10; // r15
  LARGE_INTEGER *ButtonContact; // rbx
  int v12; // edx
  int v13; // r8d
  LARGE_INTEGER PerformanceCounter; // r13
  int v15; // edx
  __int64 v16; // r8
  LONG v17; // ebp
  __int64 v18; // r9
  LARGE_INTEGER v19; // rax
  _UNKNOWN **result; // rax
  LONG v21[4]; // [rsp+40h] [rbp-38h] BYREF

  QuadPart = a2[59].QuadPart;
  v10 = *(_QWORD *)(a2[57].QuadPart + 16);
  ButtonContact = (LARGE_INTEGER *)RIMCmGetButtonContact(QuadPart);
  v21[0] = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      (_DWORD)gRimLog,
      4,
      1,
      32,
      (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
  }
  if ( *(_DWORD *)(QuadPart + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 656);
  if ( !ButtonContact )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 657);
  if ( (int)rimExtractButtonPageButtonUsages(QuadPart, v10, a3, a4, v21) >= 0 )
  {
    v17 = v21[0];
    if ( (v21[0] & 4) != 0 )
    {
      if ( !__CFSHR__(ButtonContact[4].LowPart, 2) )
      {
        RIMCmActivateButtonContact(QuadPart);
        if ( *(_DWORD *)(QuadPart + 1008) == 1 )
          RIMAddToActiveDevices(a1, QuadPart, v16, v18);
      }
    }
    else if ( __CFSHR__(ButtonContact[4].LowPart, 2) )
    {
      ButtonContact[295].HighPart |= 4u;
    }
    if ( (ButtonContact[4].LowPart & 2) != 0
      && (!(unsigned int)RIMCmIsContactSuppressed((__int64)ButtonContact)
       || (unsigned int)RIMCmIsContactDeliveringPointerData(ButtonContact)
       || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly((__int64)ButtonContact)) )
    {
      ButtonContact[302].LowPart = a5;
      ButtonContact[6] = PerformanceCounter;
      ButtonContact[304].LowPart = RIMGetPointerInputType(QuadPart);
      ButtonContact[305].HighPart = v17;
      ButtonContact[312].LowPart = *(_DWORD *)(QuadPart + 836);
      ButtonContact[314] = *(LARGE_INTEGER *)(QuadPart + 864);
      if ( (a2[23].LowPart & 0x2000) != 0 )
        v19 = a2[3];
      else
        v19 = a2[2];
      ButtonContact[295].HighPart |= 1u;
      ButtonContact[306] = v19;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v15) = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v15,
                          v16,
                          (_DWORD)gRimLog,
                          4,
                          1,
                          33,
                          (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
  }
  return result;
}
