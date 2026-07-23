/*
 * XREFs of PopDripsWatchdogInvokeDeviceCallbacks @ 0x140A8785C
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x14075EAE0 (PopDripsWatchdogCallbackHandler.c)
 * Callees:
 *     PopFxInvokeDripsWatchdogCallback @ 0x14074C448 (PopFxInvokeDripsWatchdogCallback.c)
 */

_UNKNOWN **__fastcall PopDripsWatchdogInvokeDeviceCallbacks(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 i; // rdi
  __int64 v4; // rdi
  __int64 k; // rbx
  __int64 v6; // rbp
  __int64 j; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 944); i = (unsigned int)(i + 1) )
  {
    result = *(_UNKNOWN ***)(a1 + 936);
    v6 = (__int64)result[i];
    for ( j = v6; j; j = *(_QWORD *)(j + 16) )
    {
      if ( *(_QWORD *)(j + 80) )
        result = (_UNKNOWN **)PopFxInvokeDripsWatchdogCallback(j, v6);
    }
  }
  v4 = *(_QWORD *)(a1 + 48);
  for ( k = v4; k; k = *(_QWORD *)(k + 16) )
  {
    if ( *(_QWORD *)(k + 80) )
      result = (_UNKNOWN **)PopFxInvokeDripsWatchdogCallback(k, v4);
  }
  return result;
}
