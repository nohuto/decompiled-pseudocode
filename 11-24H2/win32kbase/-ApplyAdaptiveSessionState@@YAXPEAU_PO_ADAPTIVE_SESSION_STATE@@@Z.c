/*
 * XREFs of ?ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z @ 0x14010ABF0
 * Callers:
 *     PowerConnectionEvent @ 0x14014C44C (PowerConnectionEvent.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1401AE6B0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall ApplyAdaptiveSessionState(struct _PO_ADAPTIVE_SESSION_STATE *a1)
{
  _DWORD *UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void (*v8)(void); // rax

  UserSessionState = (_DWORD *)W32GetUserSessionState(a1);
  UserSessionState[670] = 1000 * *(_DWORD *)a1;
  UserSessionState[672] = 1000 * *((_DWORD *)a1 + 1);
  v3 = (unsigned int)(1000 * *((_DWORD *)a1 + 2));
  UserSessionState[671] = v3;
  v4 = *((unsigned __int8 *)a1 + 12);
  UserSessionState[686] = v4;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 48) + 2520LL);
  if ( v5 && v5() >= 0 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 2528LL);
    if ( v8 )
      v8();
  }
}
