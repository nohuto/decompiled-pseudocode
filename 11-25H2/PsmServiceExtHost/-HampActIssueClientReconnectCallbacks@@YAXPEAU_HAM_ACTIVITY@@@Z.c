/*
 * XREFs of ?HampActIssueClientReconnectCallbacks@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800819C4
 * Callers:
 *     ?HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180071304 (-HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180056824 (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActIssueInvalidatedCallback@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@K@Z @ 0x18005712C (-HampActIssueInvalidatedCallback@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@K@Z.c)
 */

void __fastcall HampActIssueClientReconnectCallbacks(struct _HAM_ACTIVITY *a1)
{
  int v2; // ecx

  v2 = *((unsigned __int8 *)a1 + 562) - 1;
  if ( v2 )
  {
    if ( v2 != 2 )
      return;
    if ( (*((_DWORD *)a1 + 138) & 0x3C00) != 0 )
      HampActIssueStopRequestCallback(a1, 1);
  }
  if ( (*((_BYTE *)a1 + 552) & 8) != 0 )
    HampActIssueInvalidatedCallback((__int64)a1, *((unsigned __int16 *)a1 + 280), 1);
}
