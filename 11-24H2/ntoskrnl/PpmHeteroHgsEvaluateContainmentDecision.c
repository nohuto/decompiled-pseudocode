/*
 * XREFs of PpmHeteroHgsEvaluateContainmentDecision @ 0x1404579CC
 * Callers:
 *     PpmHeteroHgsCheckContainmentDecision @ 0x140457958 (PpmHeteroHgsCheckContainmentDecision.c)
 * Callees:
 *     PpmHeteroHgsEvaluateContainmentMinPolicyDecision @ 0x140457AE8 (PpmHeteroHgsEvaluateContainmentMinPolicyDecision.c)
 *     Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline @ 0x140457B34 (Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventHgsContainmentPolicyChange @ 0x1405D9324 (PpmEventHgsContainmentPolicyChange.c)
 *     PpmEventHgsContainmentPolicyChangeV1 @ 0x1405D94A8 (PpmEventHgsContainmentPolicyChangeV1.c)
 */

__int64 __fastcall PpmHeteroHgsEvaluateContainmentDecision(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // di
  char v4; // al
  int v5; // ebp
  char v6; // bl
  bool v7; // zf
  __int64 result; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d

  v1 = *(_QWORD *)(a1 + 1272);
  v3 = 0;
  if ( (unsigned int)Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline() )
    v3 = *(_BYTE *)(v1 + 827);
  v4 = PpmHeteroHgsEvaluateContainmentMinPolicyDecision(a1);
  v5 = PpmHeteroHgsContainmentState;
  v6 = v4;
  PpmHeteroHgsContainmentState &= ~8u;
  if ( (unsigned int)Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( PpmHeteroPolicy != 4
      || PpmHeteroContainmentPolicy != 1
      || !PpmHeteroHgsParkingEnabled
      || PpmPerfMaxOverrideEnabled
      || PpmCheckLatencyBoostActive
      || v6 )
    {
      goto LABEL_19;
    }
    v7 = v3 == 0;
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
    v7 = v6 == 0;
  }
  if ( v7 )
    PpmHeteroHgsContainmentState |= 8u;
LABEL_19:
  result = (unsigned int)PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 8) == 0 )
    *(_DWORD *)(v1 + 4) = 2;
  if ( v5 != (_DWORD)result )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_WpsContainmentFixNoneZone__private_IsEnabledDeviceUsageNoInline();
    LOBYTE(v13) = v6;
    if ( IsEnabledDeviceUsageNoInline )
      return PpmEventHgsContainmentPolicyChangeV1(v11, v10, v12, v13, v3, 0);
    else
      return PpmEventHgsContainmentPolicyChange(v11, v10, v12, v13, 0);
  }
  return result;
}
