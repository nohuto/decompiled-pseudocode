/*
 * XREFs of PopEsUpdateState @ 0x1404ECC9C
 * Callers:
 *     PopEsWorker @ 0x140AC95F0 (PopEsWorker.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDiagTraceEsState @ 0x1405D4CC8 (PopDiagTraceEsState.c)
 *     PopEsPublishStateV2 @ 0x14075D588 (PopEsPublishStateV2.c)
 *     PopEsSnapTelemetry @ 0x14075D6C8 (PopEsSnapTelemetry.c)
 *     PopCurrentPowerState @ 0x140A2C1F8 (PopCurrentPowerState.c)
 *     PopEsEvaluateNextStateV2 @ 0x140AC9360 (PopEsEvaluateNextStateV2.c)
 */

__int64 __fastcall PopEsUpdateState(char a1)
{
  char v2; // di
  char v3; // r15
  int v4; // ebx
  int v5; // r14d
  int v6; // eax
  int v7; // r13d
  int v8; // esi
  __int64 result; // rax
  bool v10; // bp
  KIRQL v11; // al
  __int64 v12; // rcx
  _BYTE v13[32]; // [rsp+20h] [rbp-48h] BYREF
  int v14; // [rsp+70h] [rbp+8h] BYREF

  v14 = 0;
  v2 = 0;
  memset(v13, 0, sizeof(v13));
  v3 = 1;
  PopCurrentPowerState(v13);
  v4 = PopEsReason;
  v5 = dword_140E6777C;
  v6 = PopEsEvaluateNextStateV2(v13, &v14);
  v7 = v14;
  v8 = v6;
  result = 1LL;
  v10 = v14 != v4;
  if ( v8 != v5 )
  {
    if ( (v2 = 1, result = 128LL, v8 == 128) && !v5 || !v8 && v5 == 128 )
      v3 = 0;
  }
  if ( a1 || v2 || v14 != v4 )
  {
    PopEsSnapTelemetry(v13);
    v11 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
    PopEsReason = v7;
    dword_140E6777C = v8;
    if ( PopCsResiliencyStats[0] && (v2 || v10) )
      ++dword_140F0BF28;
    KeReleaseSpinLock(&PopCsResiliencyStatsLock, v11);
    if ( v2 )
    {
      LOBYTE(v12) = v3;
      PopEsPublishStateV2(v12);
    }
    return PopDiagTraceEsState(&PopEsState);
  }
  return result;
}
