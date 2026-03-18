/*
 * XREFs of MmPrepareImagePagesForHotPatch @ 0x1407F6184
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067D29C (MiPrepareImagePagesForHotPatch.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiImageVadHotPatchEligible @ 0x1407F30E4 (MiImageVadHotPatchEligible.c)
 *     MiReleaseHotPatchResources @ 0x140AB45B8 (MiReleaseHotPatchResources.c)
 *     MiInitializeImageHotPatchContext @ 0x140AC0C7C (MiInitializeImageHotPatchContext.c)
 */

__int64 __fastcall MmPrepareImagePagesForHotPatch(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10[7]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v11; // [rsp+58h] [rbp-21h]
  unsigned int v12; // [rsp+F0h] [rbp+77h] BYREF

  v12 = 0;
  memset_0(v10, 0, 0xA0uLL);
  *a3 = 0LL;
  MiInitializeImageHotPatchContext(v10, 0LL, 0LL);
  v6 = MiObtainReferencedVadEx(a1, 0LL, (int *)&v12);
  v7 = v6;
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 48) & 0x70) == 0x20 )
    {
      if ( !MiImageVadHotPatchEligible(v6) )
      {
        v12 = -1073741637;
LABEL_9:
        MiUnlockAndDereferenceVad((PVOID)v7);
        goto LABEL_10;
      }
      if ( (((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12) | 0xFFF) >= a1 + (a2 << 12) - 1 )
      {
        MiInitializeImageHotPatchContext(v10, 34404LL, v7);
        v12 = MiPrepareImagePagesForHotPatch(v10, a1, a2);
        if ( (v12 & 0x80000000) == 0 )
        {
          v8 = v11;
          v11 = 0LL;
          v12 = 0;
          *a3 = v8;
        }
        goto LABEL_9;
      }
    }
    v12 = -1073741800;
    goto LABEL_9;
  }
LABEL_10:
  MiReleaseHotPatchResources(v10);
  return v12;
}
