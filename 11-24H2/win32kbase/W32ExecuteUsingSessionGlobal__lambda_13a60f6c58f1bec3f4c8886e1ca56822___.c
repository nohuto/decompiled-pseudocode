/*
 * XREFs of W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822___ @ 0x1401A5EEC
 * Callers:
 *     ?SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z @ 0x1401A6120 (-SendCapabilityUsageReport@@YAXPEBUtagPROCESSINFO@@W4Win32ProcessCapabilities@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z @ 0x1401A80B4 (-SendMessageToEndpoint@CoreMessagingKPort@@QEBAJW4COREMESSAGINGK_ENDPOINT_ID@@PEBXI@Z.c)
 */

__int64 __fastcall W32ExecuteUsingSessionGlobal__lambda_13a60f6c58f1bec3f4c8886e1ca56822_(unsigned int a1, _QWORD *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 ReferencedSessionProcessWithTag; // rax
  void *v7; // rdi
  __int64 v8; // rdx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 == (unsigned int)W32GetCurrentWin32kSessionId() )
  {
    UserSessionState = W32GetUserSessionState(v4);
    return CoreMessagingKPort::SendMessageToEndpoint(*(_QWORD *)(UserSessionState + 72440), v11, *a2);
  }
  else
  {
    v12 = 0LL;
    v5 = -1073741811;
    ReferencedSessionProcessWithTag = W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, &v12);
    v7 = (void *)ReferencedSessionProcessWithTag;
    if ( ReferencedSessionProcessWithTag )
    {
      v5 = PsAcquireProcessExitSynchronization(ReferencedSessionProcessWithTag);
      if ( v5 >= 0 )
      {
        v5 = CoreMessagingKPort::SendMessageToEndpoint(*(_QWORD *)(v12 + 72440), v8, *a2);
        PsReleaseProcessExitSynchronization(v7);
      }
      ObfDereferenceObjectWithTag(v7, 0x47727355u);
    }
    return (unsigned int)v5;
  }
}
