/*
 * XREFs of xxxDwmControl @ 0x14017A7C0
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x140092B70 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017A4CC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     PostWinlogonMessage @ 0x140167BB0 (PostWinlogonMessage.c)
 */

__int64 __fastcall xxxDwmControl(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  __int64 v3; // rcx
  bool v4; // zf
  __int64 v5; // rcx

  v1 = a1;
  v2 = -1073741823;
  if ( (_DWORD)a1 == 1034 )
  {
LABEL_9:
    v4 = *(_QWORD *)(W32GetUserSessionState(a1) + 70808) == 0LL;
LABEL_10:
    if ( v4 )
      return v2;
    goto LABEL_11;
  }
  if ( (_DWORD)a1 != 1035 && (_DWORD)a1 != 1036 )
  {
    if ( (_DWORD)a1 != 1037 )
    {
      if ( (_DWORD)a1 != 1038 )
        return v2;
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 70808) )
  {
    v4 = *(_DWORD *)(W32GetUserSessionState(v3) + 70816) == 0;
    goto LABEL_10;
  }
LABEL_11:
  v2 = PostWinlogonMessage(v1);
  if ( (v2 & 0x80000000) == 0 )
  {
    v5 = v1 - 1034;
    if ( (v5 & 0xFFFFFFFB) == 0 )
      *(_DWORD *)(W32GetUserSessionState(v5) + 70816) = 1;
  }
  return v2;
}
