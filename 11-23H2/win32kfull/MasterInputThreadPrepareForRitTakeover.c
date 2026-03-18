/*
 * XREFs of MasterInputThreadPrepareForRitTakeover @ 0x1C001C414
 * Callers:
 *     EditionDeactivateMitInput @ 0x1C001C580 (EditionDeactivateMitInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C002F37C (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     Feature_Backport_MitRitReliability__private_IsEnabledDeviceUsage @ 0x1C01398B4 (Feature_Backport_MitRitReliability__private_IsEnabledDeviceUsage.c)
 *     EndPointerDeviceContacts @ 0x1C013B014 (EndPointerDeviceContacts.c)
 *     ??C?$SGDINPUTPROCESSORgpTouchProcessor@PEAVCTouchProcessor@@@@QEBAPEAVCTouchProcessor@@XZ @ 0x1C01AA31C (--C-$SGDINPUTPROCESSORgpTouchProcessor@PEAVCTouchProcessor@@@@QEBAPEAVCTouchProcessor@@XZ.c)
 */

void __noreturn MasterInputThreadPrepareForRitTakeover()
{
  bool v0; // bl
  bool v1; // di
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // rcx
  char v5; // al
  int v6; // edx

  v0 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v1 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( PtiCurrentShared() == (struct tagTHREADINFO *)gptiRit )
    {
      v4 = "Rit";
    }
    else
    {
      v5 = IsInputThread(gptiRit, v2, v3);
      v4 = "Mit";
      if ( !v5 )
        v4 = (const char *)&unk_1C031EE90;
    }
    v6 = 10;
    LOBYTE(v3) = v1;
    LOBYTE(v6) = v0;
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v3,
      (_DWORD)gFullLog,
      4,
      20,
      10,
      (__int64)&WPP_c5f407e479063c43686cda4769a6a350_Traceguids,
      (__int64)v4);
  }
  EndPointerDeviceContacts();
}
