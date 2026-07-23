/*
 * XREFs of SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x140607B30
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     Feature_ProtectHostAuditGlobals__private_IsEnabledDeviceUsageNoInline @ 0x1406079F8 (Feature_ProtectHostAuditGlobals__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall SepRmProcessCreationCommandLineAuditSettingsWrkr(__int64 a1, __int64 a2)
{
  char result; // al

  *(_DWORD *)(a2 + 40) = 0;
  if ( !(unsigned int)Feature_ProtectHostAuditGlobals__private_IsEnabledDeviceUsageNoInline()
    || (result = PsIsCurrentThreadInServerSilo()) == 0 )
  {
    result = *(_BYTE *)(a1 + 44);
    SepRmAuditProcessCommandLine = result;
    SepRmAuditingEnabled = 1;
  }
  return result;
}
