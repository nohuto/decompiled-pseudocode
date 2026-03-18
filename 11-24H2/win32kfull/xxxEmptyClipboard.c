/*
 * XREFs of xxxEmptyClipboard @ 0x1401E8D2C
 * Callers:
 *     ForceEmptyClipboard @ 0x1401E8C1C (ForceEmptyClipboard.c)
 *     NtUserEmptyClipboard @ 0x1401E8CF0 (NtUserEmptyClipboard.c)
 *     xxxSnapWindow @ 0x1402641A0 (xxxSnapWindow.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x140105EAC (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401E8E94 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?ManualLock@?$Win32RawLockedNtObject@UtagWINDOWSTATION@@@@QEAAXPEAUtagWINDOWSTATION@@@Z @ 0x14021D2FC (-ManualLock@-$Win32RawLockedNtObject@UtagWINDOWSTATION@@@@QEAAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1402B2BE8 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(__int64 BugCheckParameter3, __int64 a2)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rdi
  struct tagWINDOWSTATION *v6; // rax
  struct tagCLIP *v8; // rdi
  int v9; // esi
  __int64 v10; // rcx
  struct tagCLIP *v11; // rcx
  __int64 v12; // rdx
  _QWORD v13[4]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v13[2] = 0LL;
  v2 = BugCheckParameter3;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v15 = -1LL;
  v5 = PtiCurrent(BugCheckParameter3, a2);
  if ( !v2 )
  {
    v6 = CheckClipboardAccess(v4, v3);
    v2 = (ULONG_PTR)v6;
    if ( !v6 )
      return 0LL;
    if ( *((struct tagTHREADINFO **)v6 + 10) != v5 )
    {
      UserSetLastError(1418);
      return 0LL;
    }
  }
  if ( (*(_DWORD *)(v2 + 64) & 0x10) == 0 && v5 )
  {
    Win32RawLockedNtObject<tagWINDOWSTATION>::ManualLock((ULONG_PTR)BugCheckParameter2, v2);
    xxxSendClipboardMessage((struct tagWINDOWSTATION *)v2, 0x307u);
  }
  v8 = *(struct tagCLIP **)(v2 + 128);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v2 + 136);
    while ( v9 )
    {
      v10 = *(unsigned __int16 *)v8;
      --v9;
      if ( (unsigned __int16)v10 >= 0xC000u )
        UserDeleteAtom(v10);
      v11 = v8;
      v8 = (struct tagCLIP *)((char *)v8 + 32);
      UT_FreeCBFormat(v11);
    }
    Win32FreePool(*(void **)(v2 + 128));
    *(_QWORD *)(v2 + 128) = 0LL;
    *(_DWORD *)(v2 + 136) = 0;
  }
  *(_DWORD *)(v2 + 64) |= 0x40u;
  v13[0] = v2 + 112;
  v13[1] = *(_QWORD *)(v2 + 96);
  HMAssignmentLock(v13, 0LL);
  ++*(_DWORD *)(v2 + 140);
  ++*(_DWORD *)(v2 + 144);
  *(_DWORD *)(v2 + 64) &= ~0x80u;
  if ( v15 != -1 )
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v12);
  return 1LL;
}
