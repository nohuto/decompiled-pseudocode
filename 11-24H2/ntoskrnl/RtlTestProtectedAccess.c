/*
 * XREFs of RtlTestProtectedAccess @ 0x1409E37B0
 * Callers:
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1408EEA78 (EtwCheckSecurityLoggerAccess.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409E358C (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1409E35E8 (PspCheckForInvalidAccessByProtection.c)
 *     PspProcessOpen @ 0x1409E3620 (PspProcessOpen.c)
 *     PopBlackBoxUpdate @ 0x140A13418 (PopBlackBoxUpdate.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140A4E604 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x140A87F24 (PspValidateCreateProcessProtection.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestProtectedAccess(PS_PROTECTION Source, PS_PROTECTION Target)
{
  int v3; // eax

  if ( (Target.Level & 7) == 0 )
    return 1;
  if ( (unsigned __int8)(Source.Level & 7) < (unsigned __int8)(Target.Level & 7) )
    return 0;
  v3 = *((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)Source.Level >> 4));
  return _bittest(&v3, Target.Level >> 4);
}
