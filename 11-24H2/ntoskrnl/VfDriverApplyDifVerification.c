/*
 * XREFs of VfDriverApplyDifVerification @ 0x140B8C038
 * Callers:
 *     VfDriverEnableDisableVerifier @ 0x140B8C1C0 (VfDriverEnableDisableVerifier.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     ExSetPoolFlags @ 0x140652F24 (ExSetPoolFlags.c)
 *     MmIsVerifierApplicableToImage @ 0x14067687C (MmIsVerifierApplicableToImage.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     VfUtilIsProtectedDriver @ 0x140B854AC (VfUtilIsProtectedDriver.c)
 *     VfDriverLock @ 0x140B8C4B4 (VfDriverLock.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140B9C568 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversLookupName @ 0x140B9CE84 (VfSuspectDriversLookupName.c)
 */

__int64 __fastcall VfDriverApplyDifVerification(__int64 a1, __int64 a2, _DWORD *a3)
{
  PVOID *v3; // rbx
  unsigned int v6; // esi
  int IsVerifierApplicableToImage; // edi
  __int64 *v8; // rax
  int v9; // eax

  v3 = 0LL;
  *a3 = 0;
  v6 = 0;
  IsVerifierApplicableToImage = 0;
  VfDriverLock();
  if ( (unsigned int)VfSuspectDriversLookupName(a1 + 40) )
    goto LABEL_25;
  if ( RtlEqualUnicodeString(&VfKernelImageName, (PCUNICODE_STRING)(a1 + 40), 1u) )
  {
    KernelVerifier = 1;
LABEL_4:
    v8 = (__int64 *)qword_140F04728;
    if ( *(__int64 **)qword_140F04728 != &VfSuspectDriversList )
      __fastfail(3u);
    *(_QWORD *)a1 = &VfSuspectDriversList;
    *(_QWORD *)(a1 + 8) = v8;
    *v8 = a1;
    qword_140F04728 = a1;
    if ( KernelVerifier
      || (IsVerifierApplicableToImage = VfSuspectApplyDifVolatileVerification(v3, a1), IsVerifierApplicableToImage >= 0) )
    {
      v9 = dword_140F04860 + 1;
      *a3 = 1;
      dword_140F04860 = v9;
      if ( KernelVerifier && ((VfRuleClasses & 8) != 0 || (VfRuleClasses & 1) != 0) )
        ExSetPoolFlags(8u);
    }
    goto LABEL_25;
  }
  v3 = (PVOID *)PsLoadedModuleList;
  while ( v3 != &PsLoadedModuleList )
  {
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(v3 + 11), 1u) )
      goto LABEL_11;
    v3 = (PVOID *)*v3;
    ++v6;
  }
  v3 = 0LL;
LABEL_11:
  if ( KernelVerifier )
    goto LABEL_4;
  if ( !v3 )
  {
    IsVerifierApplicableToImage = -1073738629;
    goto LABEL_25;
  }
  if ( v6 <= 1 || (unsigned int)VfUtilIsProtectedDriver() )
  {
    IsVerifierApplicableToImage = -1073738739;
    goto LABEL_25;
  }
  IsVerifierApplicableToImage = MmIsVerifierApplicableToImage((__int64)v3);
  if ( IsVerifierApplicableToImage >= 0 )
    goto LABEL_4;
LABEL_25:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)IsVerifierApplicableToImage;
}
