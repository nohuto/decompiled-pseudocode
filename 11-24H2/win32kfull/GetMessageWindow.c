/*
 * XREFs of GetMessageWindow @ 0x14008A42C
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     NtUserSetParent @ 0x140088820 (NtUserSetParent.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z @ 0x14008A3DC (-IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x14008AE58 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     _GetAncestor @ 0x14012BA1C (_GetAncestor.c)
 *     NtUserGetAncestor @ 0x1401574E0 (NtUserGetAncestor.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x14018A33C (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 *     HasMessageRootWindow @ 0x1402AB144 (HasMessageRootWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMessageWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 112);
  return result;
}
