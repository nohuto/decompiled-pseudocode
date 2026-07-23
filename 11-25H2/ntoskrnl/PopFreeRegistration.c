/*
 * XREFs of PopFreeRegistration @ 0x140745274
 * Callers:
 *     PopFreeSessionState @ 0x140A228FC (PopFreeSessionState.c)
 *     PopDispatchNotificationsToList @ 0x140A2A4B8 (PopDispatchNotificationsToList.c)
 * Callees:
 *     ZwDeleteWnfStateName @ 0x14069CD60 (ZwDeleteWnfStateName.c)
 *     PopUnreferencePowerSetting @ 0x140966164 (PopUnreferencePowerSetting.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeRegistration(WNF_STATE_NAME *P)
{
  WNF_STATE_NAME *v2; // rbx
  __int64 v3; // rsi

  v2 = P + 8;
  v3 = 3LL;
  do
  {
    if ( *v2 )
      PopUnreferencePowerSetting();
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( P[7].Data[0] || P[7].Data[1] )
    ZwDeleteWnfStateName(P + 7);
  ExFreePoolWithTag(P, 0x74655350u);
}
