/*
 * XREFs of ?FreePreviouslyReturnedHidData@@YAXPEAUtagTHREADINFO@@@Z @ 0x140084894
 * Callers:
 *     ?FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400845B0 (-FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     FreeHidData @ 0x140082EF0 (FreeHidData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14027251C (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall FreePreviouslyReturnedHidData(struct tagTHREADINFO *a1)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)a1 + 143);
  if ( v1 )
  {
    *((_QWORD *)a1 + 143) = 0LL;
    if ( !(unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline()
      || a1 == *(struct tagTHREADINFO **)(v1 + 16) )
    {
      FreeHidData(v1);
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2927LL);
    }
  }
}
