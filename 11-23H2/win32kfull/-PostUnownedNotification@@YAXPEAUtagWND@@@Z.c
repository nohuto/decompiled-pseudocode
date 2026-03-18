/*
 * XREFs of ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C009FFE4
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 * Callees:
 *     PostIAMShellHookMessage @ 0x1C00B2D78 (PostIAMShellHookMessage.c)
 */

void __fastcall PostUnownedNotification(struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    if ( gpqForeground && *(struct tagWND **)(gpqForeground + 128LL) == a1 )
    {
      v1 = *(_QWORD *)a1;
      v2 = 26LL;
    }
    else
    {
      v1 = *(_QWORD *)a1;
      v2 = 29LL;
    }
    PostIAMShellHookMessage(v2, v1);
  }
}
