/*
 * XREFs of ?SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z @ 0x18005DB30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x18005DC10 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::SetActiveProcess(CPrivilegedDesktopOperations *this, unsigned int a2)
{
  volatile signed __int32 *v2; // rbx
  signed __int32 v4; // eax
  const char *v5; // r9
  unsigned int LastError; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 6);
  v9 = v2;
  if ( v2 )
  {
    do
      v4 = *((_DWORD *)v2 + 9);
    while ( v4 != 0x7FFFFFFF && v4 != _InterlockedCompareExchange(v2 + 9, v4 + 1, v4) );
    v2 = v9;
  }
  AcquireSRWLockExclusive((PSRWLOCK)v2 + 6);
  EnableIAMAccess(*((_QWORD *)v2 + 5), 1LL);
  if ( (unsigned int)SetActiveProcessForMonitor(a2, 0LL) )
  {
    IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v9);
    return 0LL;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x91,
                  (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v5);
    EnableIAMAccess(*((_QWORD *)v2 + 5), 0LL);
    ReleaseSRWLockExclusive((PSRWLOCK)v2 + 6);
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v9);
    return LastError;
  }
}
