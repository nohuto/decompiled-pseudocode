/*
 * XREFs of NtUserDiscardPointerFrameMessages @ 0x1400A9E20
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1400A96AC (xxxDiscardPointerFrameMessagesInternal.c)
 */

__int64 __fastcall NtUserDiscardPointerFrameMessages(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  int v5; // ebx
  struct tagTHREADINFO *v6; // rcx
  int v7; // ecx
  _DWORD *v9; // rax

  EnterCrit(0LL, 0LL);
  if ( !a1 || HIWORD(a1) )
  {
    v7 = 87;
    goto LABEL_7;
  }
  v4 = PtiCurrent(v3, v2);
  v5 = 1;
  v6 = v4;
  if ( (unsigned __int16)a1 != 1 )
  {
    if ( (*((_QWORD *)v4 + 170) & 0x1000000100LL) == 0 && *(struct tagTHREADINFO **)(*((_QWORD *)v4 + 59) + 72LL) == v4 )
    {
      v5 = xxxDiscardPointerFrameMessagesInternal((unsigned __int16)a1, 0x1000000100LL);
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  v9 = (_DWORD *)*((_QWORD *)v4 + 189);
  if ( !v9 || (*v9 & 1) == 0 )
  {
LABEL_6:
    v7 = 5;
LABEL_7:
    v5 = 0;
    UserSetLastError(v7);
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
