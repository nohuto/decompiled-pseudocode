/*
 * XREFs of PpmHeteroHgsEvaluateContainmentDecision @ 0x14044C47C
 * Callers:
 *     PpmHeteroHgsCheckContainmentDecision @ 0x14044C408 (PpmHeteroHgsCheckContainmentDecision.c)
 * Callees:
 *     PpmHeteroHgsEvaluateContainmentMinPolicyDecision @ 0x1404B9270 (PpmHeteroHgsEvaluateContainmentMinPolicyDecision.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x1405D67C4 (PpmEventHgsContainmentPolicyChange.c)
 */

__int64 PpmHeteroHgsEvaluateContainmentDecision()
{
  __int64 result; // rax
  int v1; // r9d
  char v2; // r10
  __int64 v3; // r11
  int v4; // edx
  unsigned int v5; // ecx

  result = PpmHeteroHgsEvaluateContainmentMinPolicyDecision();
  v4 = PpmHeteroHgsContainmentState;
  v5 = PpmHeteroHgsContainmentState & 0xFFFFFFF7;
  PpmHeteroHgsContainmentState &= ~8u;
  if ( PpmHeteroPolicy == 4
    && PpmHeteroContainmentPolicy == 1
    && PpmHeteroHgsParkingEnabled
    && !PpmPerfMaxOverrideEnabled
    && !PpmCheckLatencyBoostActive
    && !(_BYTE)result
    && !v2 )
  {
    v5 |= 8u;
    PpmHeteroHgsContainmentState = v5;
  }
  if ( (v5 & 8) == 0 )
    *(_DWORD *)(v3 + 4) = 2;
  if ( v4 != v5 )
  {
    LOBYTE(v1) = result;
    return PpmEventHgsContainmentPolicyChange(v5, v4, 0, v1, v2, 0);
  }
  return result;
}
