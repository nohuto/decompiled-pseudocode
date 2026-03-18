/*
 * XREFs of xxxSetClipboardViewer @ 0x140103518
 * Callers:
 *     NtUserSetClipboardViewer @ 0x140224DA0 (NtUserSetClipboardViewer.c)
 * Callees:
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14003E060 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140104018 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x140105EAC (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1)
{
  struct tagWINDOWSTATION *v2; // rax
  struct tagWINDOWSTATION *v3; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
    goto LABEL_6;
  v2 = CheckClipboardAccess();
  v3 = v2;
  if ( !v2 )
    return 0LL;
  if ( a1 && *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) + 656LL) != v2 )
  {
LABEL_6:
    UserSetLastError(87);
    return 0LL;
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v8, v2);
  v5 = (_QWORD *)*((_QWORD *)v3 + 13);
  if ( v5 )
    v5 = (_QWORD *)*v5;
  v7[0] = (char *)v3 + 104;
  v7[1] = a1;
  HMAssignmentLock(v7, 0LL);
  xxxDrawClipboard(v3);
  if ( v9 != -1 )
  {
    PopAndFreeW32ThreadLock((__int64)v8, v6);
    v9 = -1LL;
  }
  if ( !v5 )
    return 0LL;
  LOBYTE(v6) = 1;
  return HMValidateHandleNoSecure((__int64)v5, v6);
}
