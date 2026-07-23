/*
 * XREFs of PopDirectedDripsQueryEnabledMitigations @ 0x14074AB3C
 * Callers:
 *     PopDirectedDripsEngage @ 0x14048797C (PopDirectedDripsEngage.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140C30294 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     PopDirectedDripsQueryRegistryValues @ 0x14074ABF8 (PopDirectedDripsQueryRegistryValues.c)
 *     EmClientQueryRuleState @ 0x140B6A420 (EmClientQueryRuleState.c)
 */

__int64 __fastcall PopDirectedDripsQueryEnabledMitigations(__int64 a1)
{
  char v2; // si
  bool v3; // di
  __int64 result; // rax
  unsigned int v5; // ebx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v2 = 0;
  v3 = 0;
  result = PopDirectedDripsQueryRegistryValues(a1, &v6);
  v5 = v6;
  if ( (v6 & 1) != 0 )
  {
    v2 = 1;
    v5 = v6 & 0xFFFFFFFE;
  }
  if ( (v5 & 2) != 0 )
  {
    v3 = 1;
    v5 &= ~2u;
  }
  if ( (v5 & 8) == 0 )
  {
    v3 = 0;
    if ( PopDirectedDripsOverride )
    {
      v6 = 1;
      result = EmClientQueryRuleState(&GUID_EM_RULE_DIRECTED_DRIPS_PLATFORM_DISABLE_PS4_MATCH, &v6);
      if ( (int)result < 0 || v6 != 2 )
      {
        result = (unsigned int)(PopDirectedDripsOverride - 1);
        if ( (unsigned int)result <= 0xFFFFFFFD )
          v3 = 1;
      }
    }
  }
  if ( v2 )
    v5 |= 1u;
  if ( v3 )
    v5 |= 2u;
  *(_DWORD *)(a1 + 48) = v5;
  return result;
}
