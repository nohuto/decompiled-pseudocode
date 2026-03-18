/*
 * XREFs of ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0068408
 * Callers:
 *     xxxCloseClipboard @ 0x1C0011310 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00113BC (_OpenClipboard.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C0013110 (NtUserIsClipboardFormatAvailable.c)
 *     NtUserCountClipboardFormats @ 0x1C0016360 (NtUserCountClipboardFormats.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C00176F0 (NtUserGetOpenClipboardWindow.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C0017A00 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserGetClipboardOwner @ 0x1C00681E0 (NtUserGetClipboardOwner.c)
 *     NtUserRemoveClipboardFormatListener @ 0x1C0068230 (NtUserRemoveClipboardFormatListener.c)
 *     NtUserAddClipboardFormatListener @ 0x1C00682E0 (NtUserAddClipboardFormatListener.c)
 *     xxxEmptyClipboard @ 0x1C009AC2C (xxxEmptyClipboard.c)
 *     NtUserGetClipboardViewer @ 0x1C0153A50 (NtUserGetClipboardViewer.c)
 *     NtUserGetClipboardData @ 0x1C01CFAA0 (NtUserGetClipboardData.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01D38E0 (NtUserGetUpdatedClipboardFormats.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01FC3A8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     InternalGetClipboardMetadata @ 0x1C01FD08C (InternalGetClipboardMetadata.c)
 *     _EnumClipboardFormats @ 0x1C01FD1D8 (_EnumClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C01FD278 (_GetPriorityClipboardFormat.c)
 *     _SetClipboardData @ 0x1C01FD39C (_SetClipboardData.c)
 *     xxxChangeClipboardChain @ 0x1C01FD448 (xxxChangeClipboardChain.c)
 *     xxxSetClipboardViewer @ 0x1C01FD714 (xxxSetClipboardViewer.c)
 * Callees:
 *     ReferenceWindowStation @ 0x1C0068460 (ReferenceWindowStation.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

struct tagWINDOWSTATION *CheckClipboardAccess(void)
{
  struct tagTHREADINFO *v0; // rax
  NTSTATUS v1; // eax
  ULONG v3; // eax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v0 = PtiCurrentShared();
  v1 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v4, (*((_DWORD *)v0 + 122) >> 3) & 1);
  if ( v1 >= 0 )
    return (struct tagWINDOWSTATION *)v4;
  v3 = RtlNtStatusToDosError(v1);
  UserSetLastError(v3);
  return 0LL;
}
