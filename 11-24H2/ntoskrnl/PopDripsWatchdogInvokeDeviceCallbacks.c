/*
 * XREFs of PopDripsWatchdogInvokeDeviceCallbacks @ 0x140A8B370
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x14075FAE0 (PopDripsWatchdogCallbackHandler.c)
 * Callees:
 *     PopFxInvokeDripsWatchdogCallback @ 0x14074E118 (PopFxInvokeDripsWatchdogCallback.c)
 */

_UNKNOWN **__fastcall PopDripsWatchdogInvokeDeviceCallbacks(__int64 a1, unsigned int a2)
{
  _UNKNOWN **result; // rax
  __int64 i; // rdi
  __int64 v6; // rdi
  __int64 k; // rbx
  __int64 v8; // rbp
  __int64 j; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 944); i = (unsigned int)(i + 1) )
  {
    result = *(_UNKNOWN ***)(a1 + 936);
    v8 = (__int64)result[i];
    for ( j = v8; j; j = *(_QWORD *)(j + 16) )
    {
      if ( *(_QWORD *)(j + 80) )
        result = (_UNKNOWN **)PopFxInvokeDripsWatchdogCallback(j, v8, a2);
    }
  }
  v6 = *(_QWORD *)(a1 + 48);
  for ( k = v6; k; k = *(_QWORD *)(k + 16) )
  {
    if ( *(_QWORD *)(k + 80) )
      result = (_UNKNOWN **)PopFxInvokeDripsWatchdogCallback(k, v6, a2);
  }
  return result;
}
