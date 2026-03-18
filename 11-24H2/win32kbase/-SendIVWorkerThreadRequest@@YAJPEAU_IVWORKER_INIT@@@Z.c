/*
 * XREFs of ?SendIVWorkerThreadRequest@@YAJPEAU_IVWORKER_INIT@@@Z @ 0x1402168C4
 * Callers:
 *     IVStartupWorkerThread @ 0x1400D04C8 (IVStartupWorkerThread.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     InitCreateSystemThreadsMsg @ 0x1401281B0 (InitCreateSystemThreadsMsg.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall SendIVWorkerThreadRequest(struct _IVWORKER_INIT *a1)
{
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  int v5; // edi
  _BYTE v6[8]; // [rsp+30h] [rbp-3E8h] BYREF
  union _LARGE_INTEGER v7; // [rsp+38h] [rbp-3E0h] BYREF
  _DWORD v8[240]; // [rsp+40h] [rbp-3D8h] BYREF

  memset(v8, 0, 0x3B8uLL);
  if ( (unsigned int)InitCreateSystemThreadsMsg(v8, 8u, (__int64)a1) )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v6, 1);
    v7.QuadPart = 952LL;
    UserSessionState = W32GetUserSessionState(v3);
    v5 = LpcSendWaitReceivePort(*(_QWORD *)(UserSessionState + 71544), 0x20000LL, v8, v8, &v7, 0LL);
    if ( v5 >= 0 )
      KeWaitForSingleObject(*(PVOID *)a1, WrUserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v6);
    return (unsigned int)v5;
  }
  else
  {
    GreDeleteFastMutex(*(char **)a1);
    *(_QWORD *)a1 = 0LL;
    GreDeleteFastMutex(*((char **)a1 + 1));
    *((_QWORD *)a1 + 1) = 0LL;
    return 3221225495LL;
  }
}
