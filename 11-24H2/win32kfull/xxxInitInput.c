/*
 * XREFs of xxxInitInput @ 0x14020BF30
 * Callers:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x14023F770 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxInitInput(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE v9[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h]
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[960]; // [rsp+50h] [rbp-B0h] BYREF

  memset_0(v13, 0, 0x3B8uLL);
  v10 = a1;
  v2 = 0;
  Object = (PVOID)CreateKernelEvent(1LL, 0LL);
  if ( !Object )
    return 0LL;
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v13, 2LL, &v10) )
  {
    Win32FreePool(Object);
    return 0LL;
  }
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v9, 1);
  v12 = 952LL;
  UserSessionState = W32GetUserSessionState(v4, v3);
  if ( (int)LpcSendWaitReceivePort(*(_QWORD *)(UserSessionState + 71544), 0x20000LL, v13, v13, &v12, 0LL) >= 0 )
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
  Win32FreePool(Object);
  Object = 0LL;
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v9);
  LOBYTE(v2) = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18704) != 0LL;
  return v2;
}
