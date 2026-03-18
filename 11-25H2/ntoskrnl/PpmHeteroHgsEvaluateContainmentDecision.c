/*
 * XREFs of PpmHeteroHgsEvaluateContainmentDecision @ 0x1404AF170
 * Callers:
 *     PpmHeteroHgsCheckContainmentDecision @ 0x1404AF124 (PpmHeteroHgsCheckContainmentDecision.c)
 * Callees:
 *     PpmHeteroHgsEvaluateContainmentMinPolicyDecision @ 0x1404AF28C (PpmHeteroHgsEvaluateContainmentMinPolicyDecision.c)
 *     Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline @ 0x1404F2210 (Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x1405D48B8 (PpmEventHgsContainmentPolicyChange.c)
 *     PpmEventHgsContainmentPolicyChangeV1 @ 0x1405D4A3C (PpmEventHgsContainmentPolicyChangeV1.c)
 */

__int64 __fastcall PpmHeteroHgsEvaluateContainmentDecision(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v4; // di
  char v5; // al
  int v6; // ebp
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  __int64 result; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d

  v2 = *(_QWORD *)(a1 + 192);
  v4 = 0;
  if ( (unsigned int)Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline(a1, a2) )
    v4 = *(_BYTE *)(v2 + 827);
  v5 = PpmHeteroHgsEvaluateContainmentMinPolicyDecision(a1);
  v6 = PpmHeteroHgsContainmentState;
  v7 = v5;
  PpmHeteroHgsContainmentState &= ~8u;
  if ( (unsigned int)Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline(
                       (unsigned int)PpmHeteroHgsContainmentState,
                       v8) )
  {
    if ( PpmHeteroPolicy != 4
      || PpmHeteroContainmentPolicy != 1
      || !PpmHeteroHgsParkingEnabled
      || PpmPerfMaxOverrideEnabled
      || PpmCheckLatencyBoostActive
      || v7 )
    {
      goto LABEL_19;
    }
    v11 = v4 == 0;
  }
  else
  {
    if ( PpmPerfMaxOverrideEnabled
      || PpmHeteroPolicy != 4
      || PpmHeteroContainmentPolicy != 1
      || !PpmHeteroHgsParkingEnabled
      || PpmCheckLatencyBoostActive )
    {
      goto LABEL_19;
    }
    v11 = v7 == 0;
  }
  if ( v11 )
    PpmHeteroHgsContainmentState |= 8u;
LABEL_19:
  result = (unsigned int)PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 8) == 0 )
    *(_DWORD *)(v2 + 4) = 2;
  if ( v6 != (_DWORD)result )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline(
                                     v10,
                                     v9);
    LOBYTE(v17) = v7;
    if ( IsEnabledDeviceUsageNoInline )
      return PpmEventHgsContainmentPolicyChangeV1(v15, v14, v16, v17, v4, 0);
    else
      return PpmEventHgsContainmentPolicyChange(v15, v14, v16, v17, 0);
  }
  return result;
}
