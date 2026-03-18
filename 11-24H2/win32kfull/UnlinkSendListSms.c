/*
 * XREFs of UnlinkSendListSms @ 0x14016F544
 * Callers:
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x14010766C (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x140167DA8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxReceiverDied @ 0x14016F37C (xxxReceiverDied.c)
 *     SuspendThreadQueue @ 0x1401A4D60 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x140085CA0 (_FreeTouchInputInfo.c)
 *     IsPointerInputClientMessage @ 0x140148320 (IsPointerInputClientMessage.c)
 *     _FreeGestureInfo @ 0x140266FF0 (_FreeGestureInfo.c)
 */

__int64 __fastcall UnlinkSendListSms(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rcx
  __int64 *v5; // rcx
  __int64 **v6; // rax
  __int64 v7; // rdx
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rbx
  __int64 UserSessionState; // rax

  v2 = *((_DWORD *)a1 + 26);
  if ( v2 >= 0x240 )
  {
    if ( v2 <= 0x240 )
      FreeTouchInputInfo(a1[12]);
  }
  else if ( v2 == 281 )
  {
    FreeGestureInfo(a1[12], 0LL);
  }
  if ( (*((_DWORD *)a1 + 21) & 0x200) == 0 )
  {
    v4 = *((unsigned int *)a1 + 26);
    if ( (unsigned int)(v4 - 577) <= 3 )
      goto LABEL_18;
    if ( IsPointerInputClientMessage(v4) )
    {
      if ( (_DWORD)v4 == 595 )
        goto LABEL_10;
      goto LABEL_18;
    }
    if ( (_DWORD)v4 == 528 && *((_WORD *)a1 + 44) == 582 )
    {
LABEL_18:
      v11 = a1[12];
      UserSessionState = W32GetUserSessionState(v4, a2);
      CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(UserSessionState + 3264), v11, 6LL, a1);
    }
  }
LABEL_10:
  v5 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v6 = (__int64 **)a1[1], *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (__int64)v6;
  HMAssignmentUnlock(a1 + 14);
  v8 = (void *)a1[15];
  if ( v8 && (*((_DWORD *)a1 + 21) & 0x40000) == 0 )
    Win32FreePool(v8);
  v9 = W32GetUserSessionState(v8, v7);
  return Win32FreeToPagedLookasideList(*(_QWORD *)(v9 + 69344), a1);
}
