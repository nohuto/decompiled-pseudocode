/*
 * XREFs of MiIsVadEligibleForCommitRelease @ 0x1404F7888
 * Callers:
 *     MiUserFaultAllowed @ 0x14024ACD0 (MiUserFaultAllowed.c)
 *     MiProcessCommitIntact @ 0x1403FA380 (MiProcessCommitIntact.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1404D5BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14065ED04 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     MiVadSupportsPrivateCommit @ 0x140239D80 (MiVadSupportsPrivateCommit.c)
 *     MiVadMapsLargeImage @ 0x1403D9300 (MiVadMapsLargeImage.c)
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
