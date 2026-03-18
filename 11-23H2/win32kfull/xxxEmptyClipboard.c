/*
 * XREFs of xxxEmptyClipboard @ 0x1C009AC2C
 * Callers:
 *     FreeWindowStation @ 0x1C009AA80 (FreeWindowStation.c)
 *     NtUserEmptyClipboard @ 0x1C01CEA10 (NtUserEmptyClipboard.c)
 *     xxxSnapWindow @ 0x1C0227938 (xxxSnapWindow.c)
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0068408 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01FBE64 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01FCE00 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(void **Object)
{
  __int64 ThreadWin32Thread; // rsi
  int v3; // r14d
  struct tagCLIP *v4; // rdi
  struct tagWINDOWSTATION *v6; // rax
  int v7; // ebp
  __int64 v8; // rcx
  struct tagCLIP *v9; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( Object )
    goto LABEL_2;
  v6 = CheckClipboardAccess();
  Object = (void **)v6;
  if ( !v6 )
    return 0LL;
  if ( *((_QWORD *)v6 + 10) != ThreadWin32Thread )
  {
    UserSetLastError(1418LL);
    return 0LL;
  }
LABEL_2:
  if ( ((_DWORD)Object[8] & 0x10) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v3 = 0;
    if ( ThreadWin32Thread )
    {
      PushW32ThreadLock(Object, &v11, UserDereferenceObject);
      ObfReferenceObject(Object);
      xxxSendClipboardMessage((struct tagWINDOWSTATION *)Object, 0x307u);
    }
  }
  v4 = (struct tagCLIP *)Object[16];
  if ( v4 )
  {
    v7 = *((_DWORD *)Object + 34);
    while ( v7 )
    {
      v8 = *(unsigned __int16 *)v4;
      --v7;
      if ( (unsigned __int16)v8 >= 0xC000u )
        UserDeleteAtom(v8);
      v9 = v4;
      v4 = (struct tagCLIP *)((char *)v4 + 32);
      UT_FreeCBFormat(v9);
    }
    Win32FreePool(Object[16]);
    Object[16] = 0LL;
    *((_DWORD *)Object + 34) = 0;
  }
  *((_DWORD *)Object + 16) |= 0x40u;
  v10[0] = Object + 14;
  v10[1] = Object[12];
  HMAssignmentLock(v10, 0LL);
  ++*((_DWORD *)Object + 35);
  ++*((_DWORD *)Object + 36);
  *((_DWORD *)Object + 16) &= ~0x80u;
  if ( !v3 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock(&v11);
  }
  return 1LL;
}
