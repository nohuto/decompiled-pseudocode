/*
 * XREFs of MiCompareHotPatchNodes @ 0x1407F2484
 * Callers:
 *     MiGetAllRegisteredPatches @ 0x1407F280C (MiGetAllRegisteredPatches.c)
 *     MiInsertHotPatchRecord @ 0x1407F3340 (MiInsertHotPatchRecord.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x1407F34DC (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1407F35F8 (MiInsertSecureImageActivePatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x1407F62A8 (MmRemoveSecureImageActivePatch.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A326F0 (MiFindProcessImageHotPatchRecord.c)
 *     MiFindHotPatchRecord @ 0x140A570A8 (MiFindHotPatchRecord.c)
 *     MmRegisterHotPatches @ 0x140C56C7C (MmRegisterHotPatches.c)
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
