/*
 * XREFs of ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F90CC
 * Callers:
 *     ValidateDDEConvPair @ 0x1C01FA7A0 (ValidateDDEConvPair.c)
 *     _ImpersonateDdeClientWindow @ 0x1C01FA7E8 (_ImpersonateDdeClientWindow.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01FA884 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01FAA84 (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C01FAD14 (xxxDDETrackSendHook.c)
 * Callees:
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 */

struct tagDDECONV *__fastcall FindDdeConv(struct tagWND *a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  struct tagDDECONV *result; // rax

  for ( result = (struct tagDDECONV *)GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL, a4);
        result && *((struct tagWND **)result + 6) != a2;
        result = (struct tagDDECONV *)*((_QWORD *)result + 3) )
  {
    ;
  }
  return result;
}
