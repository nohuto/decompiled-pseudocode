/*
 * XREFs of MiCleanVad @ 0x1408B4DF0
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiWaitForVadDeletion @ 0x1402A668C (MiWaitForVadDeletion.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x140432030 (MiVadDeleted.c)
 *     MiUnmapVad @ 0x1408B4E4C (MiUnmapVad.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 */

__int64 __fastcall MiCleanVad(char *P)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  v2 = 0;
  if ( (unsigned int)MiVadDeleted((__int64)P) )
  {
    MiWaitForVadDeletion(v3);
    MiUnlockAndDereferenceVad(P);
    return 1;
  }
  else if ( (*(_DWORD *)(v3 + 48) & 0x200000) != 0 )
  {
    MiDeleteVad(v3, 0LL, 0LL);
  }
  else
  {
    MiUnmapVad(v3, 0LL, 0LL);
  }
  return v2;
}
