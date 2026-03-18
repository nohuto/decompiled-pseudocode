/*
 * XREFs of PopNetEvaluationWorkerCallback @ 0x1404B4B70
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopNetUpdateCsConsumptionFlags @ 0x140A84DE4 (PopNetUpdateCsConsumptionFlags.c)
 *     PopNetPublishWnfStateUpdate @ 0x140A93334 (PopNetPublishWnfStateUpdate.c)
 *     PopNetEvaluateStateMask @ 0x140A9B9F8 (PopNetEvaluateStateMask.c)
 *     PopNetSetResiliencyPhaseBias @ 0x140AA0288 (PopNetSetResiliencyPhaseBias.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x140ABB7D0 (PopTraceStandbyConnectivityUpdate.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetEvaluationWorkerCallback(__int64 a1, __int64 a2)
{
  int v2; // r14d
  int v3; // r12d
  char v4; // r15
  char v5; // bp
  char v6; // r13
  __int64 v7; // rcx
  unsigned int v8; // esi
  unsigned int v9; // edi
  KIRQL v10; // al
  char v12; // [rsp+68h] [rbp+10h]
  unsigned int v13; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0;
  v13 = 0;
  PopAcquirePolicyLock(a1, a2);
  while ( 1 )
  {
    v2 = PopNetStandbyState;
    v3 = PopNetStandbyReason;
    v4 = 0;
    v12 = 0;
    v5 = 0;
    v6 = 0;
    PopNetEvaluateStateMask(&v13, &v14);
    v8 = v13;
    if ( v13 == v2 )
      goto LABEL_10;
    if ( v2 == 2 )
    {
      v5 = 1;
      v6 = 1;
    }
    else
    {
      if ( v13 != 2 )
        goto LABEL_10;
      v5 = 1;
    }
    if ( PopNetResiliencyEngaged && qword_140E67250 )
    {
      LOBYTE(v7) = 1;
      v12 = 1;
      PopNetSetResiliencyPhaseBias(v7);
    }
LABEL_10:
    v9 = v14;
    if ( v14 != v3 )
    {
      v4 = 1;
      v10 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
      PopNetStandbyReason = v9;
      if ( PopCsResiliencyStats[0] && !dword_140F0A710 )
        dword_140F0A710 = v9;
      KeReleaseSpinLock(&PopCsResiliencyStatsLock, v10);
    }
    if ( v8 != v2 )
    {
      v4 = 1;
      PopNetStandbyState = v8;
      PopNetUpdateCsConsumptionFlags();
    }
    if ( v5 )
    {
      LOBYTE(v7) = v6;
      PopNetPublishWnfStateUpdate(v7);
      if ( v12 )
        PopNetSetResiliencyPhaseBias(0LL);
    }
    if ( !v4 )
      break;
    if ( PopDiagHandleRegistered )
      PopTraceStandbyConnectivityUpdate(v8, v9);
    else
      PopNetDeferLogRequest = 1;
  }
  _InterlockedExchange(&dword_140F073C8, 0);
  return PopReleasePolicyLock();
}
