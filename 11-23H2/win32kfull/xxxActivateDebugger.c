/*
 * XREFs of xxxActivateDebugger @ 0x1C022CDA0
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0035DAC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C0035CE0 (LockProcessByClientId.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

_BOOL8 __fastcall xxxActivateDebugger(char a1)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  PETHREAD *v7; // rcx
  __int64 ProcessDebugPort; // rbx
  PVOID Object; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v11[10]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h]
  int v13; // [rsp+60h] [rbp-A0h]
  HANDLE ProcessId; // [rsp+70h] [rbp-90h]
  HANDLE ThreadId; // [rsp+78h] [rbp-88h]

  memset_0(v11, 0, 0x3B8uLL);
  Object = 0LL;
  if ( (a1 & 2) != 0 )
    return 0LL;
  v2 = a1 & 4;
  if ( v2 )
  {
    if ( !PsGetProcessDebugPort(gpepCSRSS) )
      return 0LL;
    ProcessId = PsGetProcessId(gpepCSRSS);
  }
  else
  {
    if ( !gpqForeground )
      return 0LL;
    v7 = *(PETHREAD **)(gpqForeground + 104LL);
    if ( !v7 )
      return 0LL;
    ProcessId = PsGetThreadProcessId(*v7);
    ThreadId = PsGetThreadId(**(PETHREAD **)(gpqForeground + 104LL));
    if ( (int)LockProcessByClientId(ProcessId, (PEPROCESS *)&Object) < 0 )
      return 0LL;
    ProcessDebugPort = PsGetProcessDebugPort(Object);
    ObfDereferenceObject(Object);
    if ( !ProcessDebugPort )
      return 0LL;
  }
  if ( CsrApiPort )
  {
    v11[1] = 0;
    v12 = 0LL;
    v11[0] = 5242920;
    v13 = 197635;
    UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
    LpcRequestPort(CsrApiPort, v11);
    EnterCrit(1LL, 0LL);
  }
  return v2 != 0;
}
