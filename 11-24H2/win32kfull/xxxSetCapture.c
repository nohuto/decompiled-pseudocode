/*
 * XREFs of xxxSetCapture @ 0x140089F18
 * Callers:
 *     NtUserSetCapture @ 0x140089770 (NtUserSetCapture.c)
 *     xxxIsDragging @ 0x140109A1C (xxxIsDragging.c)
 *     xxxDCETrackCaptionButton @ 0x140109CAC (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x14010B9EC (xxxTrackCaptionButton.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     xxxDragObject @ 0x1402DF924 (xxxDragObject.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x140089FBC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxSetCapture(struct tagWND *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx

  v3 = PtiCurrent((__int64)a1, a2);
  v6 = *((_QWORD *)PtiCurrent(v5, v4) + 59);
  if ( (*(_DWORD *)(v6 + 436) & 0x100000) != 0 || a1 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) != v6 )
    return 0LL;
  v7 = *(_QWORD *)(v6 + 112);
  v8 = v7 ? *(_QWORD *)v7 : 0LL;
  xxxCapture(v3, a1, 2u);
  if ( !v8 )
    return 0LL;
  LOBYTE(v9) = 1;
  return v7 & -(__int64)(HMValidateHandleNoSecure(v8, v9) != 0);
}
