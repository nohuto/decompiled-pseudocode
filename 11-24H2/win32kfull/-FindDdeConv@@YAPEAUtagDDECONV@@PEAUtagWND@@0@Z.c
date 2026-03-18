/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1401D3948
 * Callers:
 *     ValidateDDEConvPair @ 0x1401D3900 (ValidateDDEConvPair.c)
 *     xxxDDETrackGetMessageHook @ 0x14024E7A4 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x14024E980 (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x14024EC24 (xxxDDETrackSendHook.c)
 *     _ImpersonateDdeClientWindow @ 0x1402B1048 (_ImpersonateDdeClientWindow.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 */

struct tagDDECONV *__fastcall FindDdeConv(struct tagWND *a1, struct tagWND *a2)
{
  __int64 UserSessionState; // rax
  struct tagDDECONV *result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  for ( result = (struct tagDDECONV *)GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41400), 1u);
        result && *((struct tagWND **)result + 6) != a2;
        result = (struct tagDDECONV *)*((_QWORD *)result + 3) )
  {
    ;
  }
  return result;
}
