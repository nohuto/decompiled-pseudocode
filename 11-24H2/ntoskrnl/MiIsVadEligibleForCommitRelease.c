/*
 * XREFs of MiIsVadEligibleForCommitRelease @ 0x1404F9FF8
 * Callers:
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 *     MiProcessCommitIntact @ 0x140402340 (MiProcessCommitIntact.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14042D608 (MiReleaseOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14066A7E8 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x1402FBA00 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x140404B60 (MiVadMapsLargeImage.c)
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
