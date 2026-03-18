/*
 * XREFs of ?_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x1400A6340
 * Callers:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1400A6290 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 */

__int64 __fastcall _FindQMsgFromMsg(struct tagTHREADINFO *const a1, struct tagMSG *const a2, struct tagQMSG **a3)
{
  __int64 *i; // r9

  for ( i = *(__int64 **)(*((_QWORD *)a1 + 59) + 24LL); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
LABEL_15:
      UserSetLastError(87);
      return 0LL;
    }
    if ( *(_DWORD *)a2 == *((_DWORD *)i + 4)
      && *((_DWORD *)i + 6) == *((_DWORD *)a2 + 2)
      && i[4] == *((_QWORD *)a2 + 2)
      && i[8] == *((_QWORD *)a2 + 3)
      && *((_DWORD *)i + 12) == *((_DWORD *)a2 + 8)
      && *((_DWORD *)i + 13) == *((_DWORD *)a2 + 9)
      && *((_DWORD *)i + 14) == *((_DWORD *)a2 + 10) )
    {
      break;
    }
    if ( _bittest((const signed __int32 *)i + 25, 8u) )
      goto LABEL_15;
  }
  if ( !_bittest((const signed __int32 *)i + 25, 8u) )
    i = (__int64 *)*i;
  *a3 = (struct tagQMSG *)i;
  return 1LL;
}
