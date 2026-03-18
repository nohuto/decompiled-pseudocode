/*
 * XREFs of PopFreeRegistration @ 0x140751344
 * Callers:
 *     PopFreeSessionState @ 0x1409BA710 (PopFreeSessionState.c)
 *     PopDispatchNotificationsToList @ 0x1409BE678 (PopDispatchNotificationsToList.c)
 * Callees:
 *     ZwDeleteWnfStateName @ 0x1406A8030 (ZwDeleteWnfStateName.c)
 *     PopUnreferencePowerSetting @ 0x1409BDE74 (PopUnreferencePowerSetting.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeRegistration(_DWORD *P, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rsi

  v3 = P + 16;
  v4 = 3LL;
  do
  {
    if ( *v3 )
      PopUnreferencePowerSetting();
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( P[14] || P[15] )
    ZwDeleteWnfStateName((__int64)(P + 14), a2);
  ExFreePoolWithTag(P, 0x74655350u);
}
