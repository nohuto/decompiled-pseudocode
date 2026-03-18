/*
 * XREFs of MiCleanVad @ 0x1408E5224
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiWaitForVadDeletion @ 0x1402FBA58 (MiWaitForVadDeletion.c)
 *     MiVadDeleted @ 0x140428540 (MiVadDeleted.c)
 *     MiUnmapVad @ 0x1408E5280 (MiUnmapVad.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 */

__int64 __fastcall MiCleanVad(PVOID P)
{
  unsigned int v2; // edi
  _DWORD *v3; // rcx

  v2 = 0;
  if ( (unsigned int)MiVadDeleted((__int64)P) )
  {
    MiWaitForVadDeletion((__int64)v3);
    MiUnlockAndDereferenceVad(P);
    return 1;
  }
  else if ( (v3[12] & 0x200000) != 0 )
  {
    MiDeleteVad(v3);
  }
  else
  {
    MiUnmapVad(v3);
  }
  return v2;
}
