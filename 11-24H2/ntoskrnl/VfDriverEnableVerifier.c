/*
 * XREFs of VfDriverEnableVerifier @ 0x140B8C250
 * Callers:
 *     VfDriverEnableDisableVerifier @ 0x140B8C1C0 (VfDriverEnableDisableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x140B8C3B4 (VfDriverEnableVerifierForAll.c)
 *     VfAddVerifierEntry @ 0x140B9E32C (VfAddVerifierEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     MmIsVerifierApplicableToImage @ 0x14067687C (MmIsVerifierApplicableToImage.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     VfUtilIsProtectedDriver @ 0x140B854AC (VfUtilIsProtectedDriver.c)
 *     VfDriverLock @ 0x140B8C4B4 (VfDriverLock.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140B9C568 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversLookupName @ 0x140B9CE84 (VfSuspectDriversLookupName.c)
 */

__int64 __fastcall VfDriverEnableVerifier(__int64 a1, PVOID *a2, _DWORD *a3)
{
  int v6; // r15d
  unsigned int v7; // ebp
  int IsVerifierApplicableToImage; // edi
  int v9; // r14d
  __int64 *v10; // rax

  *a3 = 0;
  v6 = 0;
  v7 = 0;
  IsVerifierApplicableToImage = 0;
  v9 = 0;
  VfDriverLock();
  if ( !(unsigned int)VfSuspectDriversLookupName(a1 + 40) )
  {
    if ( a2 )
      goto LABEL_9;
    a2 = (PVOID *)PsLoadedModuleList;
    v9 = 1;
    while ( 1 )
    {
      if ( a2 == &PsLoadedModuleList )
      {
        a2 = 0LL;
        goto LABEL_17;
      }
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(a2 + 11), 1u) )
        break;
      a2 = (PVOID *)*a2;
      ++v7;
    }
    if ( a2 )
    {
LABEL_9:
      if ( (~VerifierModifyableOptions & MmVerifierData) != 0 )
      {
        IsVerifierApplicableToImage = -1073738740;
        goto LABEL_22;
      }
      if ( v9 && (v7 <= 1 || (unsigned int)VfUtilIsProtectedDriver()) )
      {
        IsVerifierApplicableToImage = -1073738739;
        goto LABEL_22;
      }
      IsVerifierApplicableToImage = MmIsVerifierApplicableToImage((__int64)a2);
      if ( IsVerifierApplicableToImage < 0 )
        goto LABEL_22;
      v6 = 1;
    }
LABEL_17:
    v10 = (__int64 *)qword_140F04728;
    if ( *(__int64 **)qword_140F04728 != &VfSuspectDriversList )
      __fastfail(3u);
    *(_QWORD *)a1 = &VfSuspectDriversList;
    *(_QWORD *)(a1 + 8) = v10;
    *v10 = a1;
    qword_140F04728 = a1;
    *a3 = 1;
    if ( v6 )
      VfSuspectApplyDifVolatileVerification(a2, a1);
    ++dword_140F04860;
  }
LABEL_22:
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)IsVerifierApplicableToImage;
}
