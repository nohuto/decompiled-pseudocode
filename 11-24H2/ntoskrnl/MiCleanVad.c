/*
 * XREFs of MiCleanVad @ 0x140895DDC
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiWaitForVadDeletion @ 0x140345500 (MiWaitForVadDeletion.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiUnmapVad @ 0x140895E38 (MiUnmapVad.c)
 */

__int64 __fastcall MiCleanVad(PVOID P)
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
    MiDeleteVad((unsigned __int8 *)v3, 0LL);
  }
  else
  {
    MiUnmapVad((PVOID)v3);
  }
  return v2;
}
