/*
 * XREFs of ?HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180071154
 * Callers:
 *     ?HamSrvCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180071024 (-HamSrvCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C3E0 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C43C (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18006A69C (-HampClientGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     ?HampActIssueClientReconnectCallbacks@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180081E84 (-HampActIssueClientReconnectCallbacks@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

__int64 __fastcall HampClientCompleteConnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  unsigned int v2; // edi
  struct _HAM_ACTIVITY *FirstActivity; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax

  HampClientAcquireLockExclusive(a1);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    v2 = 0;
    FirstActivity = HampClientGetFirstActivity(a1);
    while ( FirstActivity )
    {
      HampActIssueClientReconnectCallbacks(FirstActivity);
      v4 = *((_QWORD *)FirstActivity + 6);
      v5 = *((_QWORD *)FirstActivity + 8);
      FirstActivity = 0LL;
      if ( v4 != v5 + 56 )
        FirstActivity = (struct _HAM_ACTIVITY *)(v4 - 48);
    }
    *((_DWORD *)a1 + 50) = 2;
  }
  else
  {
    v2 = -1073700861;
  }
  HampClientReleaseLockExclusive(a1);
  return v2;
}
