/*
 * XREFs of CleanupResources @ 0x1401B7088
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     LockQCursor @ 0x140104264 (LockQCursor.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401483DC (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     CleanupPowerRequestList @ 0x140151360 (CleanupPowerRequestList.c)
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 *     ApiSetEditionUnloadCursorsAndIcons @ 0x140193570 (ApiSetEditionUnloadCursorsAndIcons.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CleanupResources(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 i; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int (*v10)(void); // rax
  __int64 v11; // rdx
  void (*v12)(void); // rax

  *(_DWORD *)(W32GetUserSessionState(a1) + 36456) = 1;
  HYDRA_HINT(0x20000LL);
  CleanupPowerRequestList(v1);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  if ( CurrentProcessWin32Process )
  {
    v5 = -*(_QWORD *)CurrentProcessWin32Process;
    v4 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v4;
  }
  for ( i = *(_QWORD *)(CurrentProcessWin32Process + 328); i; i = *(_QWORD *)(i + 704) )
  {
    v5 = *(_QWORD *)(i + 472);
    if ( v5 )
      LockQCursor(v5, 0LL);
  }
  ApiSetEditionUnloadCursorsAndIcons(v5, v4);
  v9 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v7) + 48);
  v10 = *(int (**)(void))(v9 + 3632);
  if ( v10 )
  {
    if ( v10() >= 0 )
    {
      v9 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v11) + 48);
      v12 = *(void (**)(void))(v9 + 3640);
      if ( v12 )
        v12();
    }
  }
  CleanupGDI(v9);
}
