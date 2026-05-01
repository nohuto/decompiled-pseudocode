/*
 * XREFs of ?SetProcessLaunchForegroundPolicy@CPrivilegedForegroundOperations@@EEAAJKW4tagPROCESS_LAUNCH_FOREGROUND_POLICY@@@Z @ 0x1803FA850
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x18005DC10 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1801947DC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedForegroundOperations::SetProcessLaunchForegroundPolicy(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  const char *v5; // r9
  unsigned int LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*(_QWORD *)(a1 + 48), &v9);
  if ( (unsigned int)SetProcessLaunchForegroundPolicy(a2, a3) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x19C,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v5);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v9);
  return LastError;
}
