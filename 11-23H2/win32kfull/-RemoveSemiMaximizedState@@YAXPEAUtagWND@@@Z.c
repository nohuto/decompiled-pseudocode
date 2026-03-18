/*
 * XREFs of ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C0061934
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxAddFullScreen @ 0x1C0062640 (xxxAddFullScreen.c)
 * Callees:
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C0061984 (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RemoveSemiMaximizedState(struct tagWND *a1)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 && !HasMaximizedState(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 539LL);
  *((_DWORD *)a1 + 80) &= 0xF3FFFFFF;
  SetOrClrWF(0LL, a1, 55568LL, 1LL);
}
