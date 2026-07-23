/*
 * XREFs of MiIsVadEligibleForCommitRelease @ 0x1404F78D8
 * Callers:
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiProcessCommitIntact @ 0x1403FC8C0 (MiProcessCommitIntact.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14066B9B8 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x1403455B0 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x1403C7440 (MiVadMapsLargeImage.c)
 */

_BOOL8 __fastcall MiIsVadEligibleForCommitRelease(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r8

  return (unsigned int)MiVadSupportsPrivateCommit(a1)
      && !(unsigned int)MiVadMapsLargeImage(v1)
      && (*(unsigned int *)(v2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 32)) < 0x7FFFFFFFDLL
      && *(unsigned int *)(v2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 32)
      && (*(_DWORD *)(v2 + 48) & 8) == 0;
}
