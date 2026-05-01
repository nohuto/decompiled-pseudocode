/*
 * XREFs of ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180056824
 * Callers:
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18001BBD0 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800566A4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampActIssueClientReconnectCallbacks@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800819C4 (-HampActIssueClientReconnectCallbacks@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@K@Z @ 0x18005719C (-HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD.c)
 */

void __fastcall HampActIssueStopRequestCallback(struct _HAM_ACTIVITY *a1, char a2)
{
  int v3; // edx
  int v4; // eax
  struct _HAM_CLIENT_CONTEXT *v5; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  int v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+44h] [rbp-24h]
  __int64 v11; // [rsp+48h] [rbp-20h]
  __int128 v12; // [rsp+50h] [rbp-18h]

  if ( *((_QWORD *)a1 + 8) )
  {
    v6[0] = *((_QWORD *)a1 + 5);
    v11 = 0LL;
    v6[1] = 0LL;
    v3 = *((_DWORD *)a1 + 138) >> 10;
    v7 = (*((_DWORD *)a1 + 138) >> 8) & 3;
    v10 = *((_DWORD *)a1 + 139);
    v4 = *((unsigned __int16 *)a1 + 280);
    v5 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 8);
    v8 = v3 & 0xF;
    v9 = v4;
    v6[2] = 1LL;
    v12 = 0LL;
    HampSystemIssueActivityCallback(v5, (struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)v6, a2 & 1);
  }
}
