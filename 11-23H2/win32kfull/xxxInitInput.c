/*
 * XREFs of xxxInitInput @ 0x1C008E29C
 * Callers:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C008DFB0 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall xxxInitInput(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h]
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v11[960]; // [rsp+50h] [rbp-B0h] BYREF

  memset_0(v11, 0, 0x3B8uLL);
  v2 = 0;
  v8 = a1;
  Object = (PVOID)CreateKernelEvent(1LL, 0LL);
  if ( !Object )
    return 0LL;
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v11, 2LL, &v8) )
  {
    Win32FreePool(Object);
    return 0LL;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  v10 = 952LL;
  if ( (int)LpcSendWaitReceivePort(CsrApiPort, 0x20000LL, v11, v11, &v10, 0LL) >= 0 )
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
  Win32FreePool(Object);
  Object = 0LL;
  EnterCrit(1LL, 0LL);
  LOBYTE(v2) = gptiRit != 0LL;
  return v2;
}
