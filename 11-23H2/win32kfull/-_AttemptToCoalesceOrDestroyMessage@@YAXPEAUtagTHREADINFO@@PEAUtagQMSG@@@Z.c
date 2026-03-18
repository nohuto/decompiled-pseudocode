/*
 * XREFs of ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C01B587C
 * Callers:
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01B5B50 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0044C94 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00794C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     IsPointerInputMessage @ 0x1C0118DA8 (IsPointerInputMessage.c)
 *     DelQEntry @ 0x1C011923C (DelQEntry.c)
 *     DelegateReleasePointerMessage @ 0x1C0152958 (DelegateReleasePointerMessage.c)
 */

void __fastcall _AttemptToCoalesceOrDestroyMessage(struct tagTHREADINFO *a1, struct tagQMSG *a2)
{
  __int64 v4; // rdx
  char v5; // di
  __int64 v6; // r8
  char v7; // dl

  v5 = 1;
  if ( !IsPointerInputMessage(*((_DWORD *)a2 + 6)) || !(unsigned int)DelegateReleasePointerMessage((__int64)a1, v4) )
  {
    CleanEventMessage((void **)a2);
    DelQEntry(*((_QWORD *)a1 + 54) + 24LL, (__int64)a2, 1);
  }
  v6 = *((_QWORD *)a1 + 54);
  if ( *(struct tagQMSG **)(v6 + 88) == a2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
      || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v7 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v5 = 0;
    if ( v7 || v5 )
      WPP_RECORDER_AND_TRACE_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v5,
        (__int64)gFullLog,
        5u,
        0x12u,
        0xFu,
        (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
        v6,
        *(_QWORD *)(v6 + 88));
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 88LL) = 0LL;
  }
}
