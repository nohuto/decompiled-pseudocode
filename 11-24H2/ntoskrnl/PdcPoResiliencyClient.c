/*
 * XREFs of PdcPoResiliencyClient @ 0x140A1BB30
 * Callers:
 *     <none>
 * Callees:
 *     PopPdcIdleResiliencyCallback @ 0x140A1BB98 (PopPdcIdleResiliencyCallback.c)
 *     PopCheckResiliencyScenarios @ 0x140A1BD98 (PopCheckResiliencyScenarios.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoResiliencyClient(int a1, __int64 a2, unsigned int a3)
{
  char v3; // di
  int v4; // ecx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+20h] [rbp-8h]

  v3 = a2;
  v4 = a1 - 1;
  if ( !v4 )
    PopPdcIdleResiliencyCallback(a3);
  v6 = (unsigned int)(v4 - 1);
  if ( !(_DWORD)v6 )
  {
    PopAcquirePolicyLock(v6, a2);
    if ( PopDeepIoCoalescingEnabled )
      goto LABEL_6;
LABEL_9:
    PopPdcIoCoalescing = v3;
    PopCheckResiliencyScenarios();
    goto LABEL_6;
  }
  if ( (_DWORD)v6 != 1 )
    return 0LL;
  PopAcquirePolicyLock(v6, a2);
  if ( PopDeepIoCoalescingEnabled )
    goto LABEL_9;
LABEL_6:
  PopReleasePolicyLock(v8, v7, v9, v10, v11);
  return 0LL;
}
