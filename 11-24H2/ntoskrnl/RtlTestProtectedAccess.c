/*
 * XREFs of RtlTestProtectedAccess @ 0x1409E87F0
 * Callers:
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     EtwCheckSecurityLoggerAccess @ 0x14094A508 (EtwCheckSecurityLoggerAccess.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1409E85CC (PsTestProtectedProcessIncompatibility.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1409E8628 (PspCheckForInvalidAccessByProtection.c)
 *     PspProcessOpen @ 0x1409E8660 (PspProcessOpen.c)
 *     PopBlackBoxUpdate @ 0x140A1ABD8 (PopBlackBoxUpdate.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140A56770 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x140A8BA34 (PspValidateCreateProcessProtection.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  int v3; // eax

  if ( (a2 & 7) == 0 )
    return 1;
  if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
    return 0;
  v3 = *((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)a1 >> 4));
  return _bittest(&v3, a2 >> 4);
}
