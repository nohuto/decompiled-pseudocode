/*
 * XREFs of InitializeGreCSRSS @ 0x14015573C
 * Callers:
 *     Win32kBaseUserInitialize @ 0x140167110 (Win32kBaseUserInitialize.c)
 * Callees:
 *     DrvNotifySessionStateChange @ 0x14008A3A0 (DrvNotifySessionStateChange.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 InitializeGreCSRSS()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx
  unsigned int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int (*v6)(void); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int (*v9)(void); // rax

  v2 = 0;
  if ( (int)DrvNotifySessionStateChange(0) >= 0 )
  {
    v3 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v1, v0) + 48) + 4176LL);
    if ( v3 )
    {
      if ( !v3() )
      {
        v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 24) + 2648LL);
        if ( !v6 || v6() < 0 )
          return 1LL;
        v9 = *(unsigned int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v7) + 24) + 2656LL);
        if ( v9 )
        {
          LOBYTE(v2) = v9() != 0;
          return v2;
        }
      }
    }
  }
  return 0LL;
}
