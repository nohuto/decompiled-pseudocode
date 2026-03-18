/*
 * XREFs of MiCompareHotPatchNodes @ 0x1407E25E4
 * Callers:
 *     MiGetAllRegisteredPatches @ 0x1407E296C (MiGetAllRegisteredPatches.c)
 *     MiInsertHotPatchRecord @ 0x1407E34B8 (MiInsertHotPatchRecord.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x1407E3654 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1407E3770 (MiInsertSecureImageActivePatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x1407E6418 (MmRemoveSecureImageActivePatch.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A1DD10 (MiFindProcessImageHotPatchRecord.c)
 *     MiFindHotPatchRecord @ 0x140A5618C (MiFindHotPatchRecord.c)
 *     MmRegisterHotPatches @ 0x140C4599C (MmRegisterHotPatches.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCompareHotPatchNodes(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edx

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 >= *(_DWORD *)(a2 + 24) )
  {
    if ( v2 > *(_DWORD *)(a2 + 24) )
      return 1LL;
    v3 = *(_DWORD *)(a1 + 28);
    v4 = *(_DWORD *)(a2 + 28);
    if ( v3 >= v4 )
      return v3 > v4;
  }
  return 0xFFFFFFFFLL;
}
