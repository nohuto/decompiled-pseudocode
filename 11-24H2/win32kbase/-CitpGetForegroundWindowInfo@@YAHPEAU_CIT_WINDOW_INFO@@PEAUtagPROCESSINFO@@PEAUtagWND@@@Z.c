/*
 * XREFs of ?CitpGetForegroundWindowInfo@@YAHPEAU_CIT_WINDOW_INFO@@PEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B420C
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B26AC (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CitpGetForegroundWindowInfo(
        struct _CIT_WINDOW_INFO *a1,
        struct tagPROCESSINFO *a2,
        struct tagWND *a3)
{
  int (*v6)(void); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  void (__fastcall *v13)(struct tagWND *, struct _CIT_WINDOW_INFO *); // rax

  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2024LL);
  if ( !v6 )
    return 0LL;
  if ( v6() < 0 )
    return 0LL;
  if ( !a3 )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v8) + 18960) )
      return 0LL;
    v10 = *(_QWORD *)(W32GetUserSessionState(v9) + 18960);
    if ( *(struct tagPROCESSINFO **)(v10 + 464) != a2 )
      return 0LL;
    v11 = *(_QWORD *)(W32GetUserSessionState(v10) + 18960);
    if ( !*(_QWORD *)(v11 + 472) )
      return 0LL;
    v12 = *(_QWORD *)(W32GetUserSessionState(v11) + 18960);
    if ( !*(_QWORD *)(*(_QWORD *)(v12 + 472) + 128LL) )
      return 0LL;
    v8 = *(_QWORD *)(W32GetUserSessionState(v12) + 18960);
    a3 = *(struct tagWND **)(*(_QWORD *)(v8 + 472) + 128LL);
    if ( !a3 )
      return 0LL;
  }
  v13 = *(void (__fastcall **)(struct tagWND *, struct _CIT_WINDOW_INFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                          v8,
                                                                                          v7)
                                                                                      + 48)
                                                                          + 2032LL);
  if ( v13 )
    v13(a3, a1);
  return 1LL;
}
