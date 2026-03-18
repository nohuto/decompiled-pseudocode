/*
 * XREFs of xxxCreateSystemThreads @ 0x140091CD0
 * Callers:
 *     NtUserCreateSystemThreads @ 0x140135100 (NtUserCreateSystemThreads.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 *     IVWorkerThread @ 0x140217C48 (IVWorkerThread.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 xxxCreateSystemThreads()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 i; // rdx
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int (*v16)(void); // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void (__fastcall *v19)(__int64); // rax
  int (*v20)(void); // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // [rsp+30h] [rbp+8h] BYREF

  v0 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
  if ( PsGetCurrentProcess(v2, v1, v3, v4) == v0 )
  {
    v6 = W32GetUserSessionState(v5) + 71552;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x1E )
        return 1LL;
      v8 = *(_QWORD *)(v6 + 24 * i);
      if ( v8 )
        break;
    }
    v9 = *(_DWORD *)(v6 + 24 * i + 16);
    *(_DWORD *)(v6 + 24 * i + 16) = 0;
    *(_QWORD *)(v6 + 24 * i) = 0LL;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v23, 1);
    v12 = v9 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 2;
        if ( v14 )
        {
          if ( v14 == 4 )
            IVWorkerThread(v8);
        }
        else
        {
          xxxVideoPortCalloutThread(v8);
        }
        goto LABEL_10;
      }
      v16 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 48) + 2152LL);
      if ( v16 && v16() >= 0 )
      {
        v19 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48) + 2160LL);
        goto LABEL_20;
      }
    }
    else
    {
      v20 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11, v10) + 48) + 2104LL);
      if ( v20 && v20() >= 0 )
      {
        v19 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v21) + 48) + 2112LL);
LABEL_20:
        if ( v19 )
          v19(v8);
      }
    }
LABEL_10:
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v23);
  }
  return 1LL;
}
