/*
 * XREFs of NtUserfnGETWINDOWDATA @ 0x140247F30
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z @ 0x1401EB794 (-GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnGETWINDOWDATA(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, ULONG64 a5, int a6)
{
  unsigned int v8; // r12d
  __int64 WindowData; // rbx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // r13
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  char v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _BYTE *v20; // rdx
  __int64 v21; // rcx
  __int64 UserSessionState; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax

  v8 = a2;
  WindowData = 0LL;
  v12 = PtiCurrent((__int64)a1, a2);
  if ( a6 == 689 && a4 < 3 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    v15 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v15 = v14 & CurrentProcessWin32Process;
    }
    v16 = (*(_DWORD *)(v15 + 12) & 0x80) != 0;
    v17 = PsGetCurrentProcessWin32Process(v14);
    v18 = v17;
    if ( v17 )
      v18 = -(__int64)(*(_QWORD *)v17 != 0LL) & v17;
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
    if ( v19 == v18 )
    {
      v20 = (_BYTE *)a5;
      if ( a5 >= MmUserProbeAddress )
        v20 = (_BYTE *)MmUserProbeAddress;
      *v20 = 1;
    }
    else
    {
      v21 = *(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 42LL);
      if ( (v21 & 0xFFFF2FFF) != 0 )
      {
        UserSessionState = W32GetUserSessionState(v21, v18);
        WindowData = (*(__int64 (__fastcall **)(struct tagWND *, _QWORD, __int64, __int64, ULONG64))(UserSessionState + 71360))(
                       a1,
                       v8,
                       a3,
                       a4,
                       a5);
        if ( a4 == 2 )
        {
          v24 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL);
          if ( (*(_DWORD *)(v24 + 12) & 0x80u) != 0 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 1) == 0 || a3 )
              v25 = a3 + 4;
            else
              v25 = 17LL;
            v26 = W32GetUserSessionState(v24, v23);
            return ((*(__int64 (__fastcall **)(struct tagWND *, _QWORD, __int64, __int64, ULONG64))(v26 + 71360))(
                      a1,
                      v8,
                      v25,
                      2LL,
                      a5) << 32) | WindowData;
          }
        }
      }
      else if ( UIPrivilegeIsolation::CheckAccess(
                  (UIPrivilegeIsolation *)(*((_QWORD *)v12 + 58) + 872LL),
                  (const struct tagUIPI_INFO *)(v19 + 872),
                  (const struct tagUIPI_INFO *)v19) )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 464LL));
        WindowData = GetWindowData(a1, a4, a3, v16);
        KeDetachProcess();
      }
    }
  }
  return WindowData;
}
