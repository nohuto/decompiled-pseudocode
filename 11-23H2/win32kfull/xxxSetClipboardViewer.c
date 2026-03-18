/*
 * XREFs of xxxSetClipboardViewer @ 0x1C01FD714
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1C01DAA00 (NtUserSetClipboardViewer.c)
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0068408 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FC4FC (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1)
{
  struct tagWINDOWSTATION *v2; // rax
  struct tagWINDOWSTATION *v3; // rdi
  _QWORD *v5; // rsi
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v8 = 0LL;
  v7 = 0LL;
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
    goto LABEL_6;
  v2 = CheckClipboardAccess();
  v3 = v2;
  if ( !v2 )
    return 0LL;
  if ( a1 && *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 664LL) != v2 )
  {
LABEL_6:
    UserSetLastError(87);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v2, &v7, UserDereferenceObject);
  ObfReferenceObject(v3);
  v5 = (_QWORD *)*((_QWORD *)v3 + 13);
  if ( v5 )
    v5 = (_QWORD *)*v5;
  v6[0] = (char *)v3 + 104;
  v6[1] = a1;
  HMAssignmentLock(v6, 0LL);
  xxxDrawClipboard(v3);
  PopAndFreeW32ThreadLock((__int64)&v7);
  if ( !v5 )
    return 0LL;
  return HMValidateHandleNoSecure((int)v5, 1);
}
