/*
 * XREFs of PnpGetCurrentlyActiveWorkerThread @ 0x1405A2990
 * Callers:
 *     PnpBugcheckPowerTimeout @ 0x1405A2924 (PnpBugcheckPowerTimeout.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1403E5040 (RtlLookupElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PnpGetCurrentlyActiveWorkerThread(_QWORD *a1)
{
  __int64 *v1; // rsi
  __int64 v2; // rbp
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  KIRQL v8; // al
  KIRQL v9; // r12
  __int64 *v10; // rax
  TABLE_SEARCH_RESULT SearchResult; // [rsp+20h] [rbp-68h] BYREF
  PVOID NodeOrParent; // [rsp+28h] [rbp-60h] BYREF
  _QWORD Buffer[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-48h] BYREF

  v1 = v15;
  v15[0] = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
  v2 = 0LL;
  v15[1] = *(_QWORD *)&PnpDeviceEventThread;
  v4 = 0;
  v15[2] = *(_QWORD *)&PnpDeviceActionThread;
  while ( 1 )
  {
    v5 = *v1;
    if ( *v1 )
    {
      Buffer[1] = *v1;
      v6 = v5;
      if ( v2 )
        v6 = v2;
      v7 = 0LL;
      Buffer[0] = 0LL;
      v2 = v6;
      v8 = KeAcquireSpinLockRaiseToDpc(&PnpDeviceActivationTableSpinLock);
      NodeOrParent = 0LL;
      SearchResult = TableEmptyTree;
      v9 = v8;
      v10 = (__int64 *)RtlLookupElementGenericTableFullAvl(
                         &PnpDeviceActivationTable,
                         Buffer,
                         &NodeOrParent,
                         &SearchResult);
      if ( v10 )
        v7 = *v10;
      KeReleaseSpinLock(&PnpDeviceActivationTableSpinLock, v9);
      *a1 = v7;
      if ( v7 )
        break;
    }
    ++v4;
    ++v1;
    if ( v4 >= 3 )
      return v2;
  }
  return v5;
}
