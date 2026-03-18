/*
 * XREFs of ?IsVailContainer@@YA_NXZ @ 0x18018FD20
 * Callers:
 *     IsSuperWetInkCompatibleVailContainer @ 0x18018F158 (IsSuperWetInkCompatibleVailContainer.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18018F7D0 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ?QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x18018FE84 (-QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME.c)
 *     ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x180280DA0 (-CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x1802B937C (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18022EA90 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool IsVailContainer(void)
{
  bool v0; // bl
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( HIBYTE(word_1803FEA80) )
    return word_1803FEA80;
  v2 = 0;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", L"IsVailContainer", &v2) )
  {
    HIBYTE(word_1803FEA80) = 1;
    v0 = v2 != 0;
    LOBYTE(word_1803FEA80) = v2 != 0;
  }
  else
  {
    word_1803FEA80 = 256;
  }
  return v0;
}
