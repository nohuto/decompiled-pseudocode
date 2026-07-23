/*
 * XREFs of MiDetermineNewPfnHeatState @ 0x140446D1C
 * Callers:
 *     MiInitializeNewPfns @ 0x14066CDA4 (MiInitializeNewPfns.c)
 *     MiEnableNewPfns @ 0x14066DC8C (MiEnableNewPfns.c)
 *     MxInsertFreePages @ 0x140C54EE0 (MxInsertFreePages.c)
 *     MxInsertEnclaveBootPages @ 0x140C5A354 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDetermineNewPfnHeatState(int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( !a1
    && ((HvlEnlightenments & 0x8400000) != 0
     && (a2 <= 1 || (HvlEnlightenments & 0x8000000) == 0)
     && (!a3 || (*(_DWORD *)(a3 + 15184) & 2) == 0)
     || (HvlEnlightenments & 0x200000) != 0 && (!a3 || (*(_DWORD *)(a3 + 15184) & 2) == 0)) )
  {
    return 1;
  }
  return v3;
}
