/*
 * XREFs of RtlTestProtectedAccess @ 0x1409BC0CC
 * Callers:
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1408BDEFC (EtwCheckSecurityLoggerAccess.c)
 *     PspProcessOpen @ 0x1409BBF00 (PspProcessOpen.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409BC040 (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1409BC09C (PspCheckForInvalidAccessByProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1409BC16C (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x1409BDFD8 (PspValidateCreateProcessProtection.c)
 *     PopBlackBoxUpdate @ 0x140A147DC (PopBlackBoxUpdate.c)
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
