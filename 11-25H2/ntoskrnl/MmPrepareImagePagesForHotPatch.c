/*
 * XREFs of MmPrepareImagePagesForHotPatch @ 0x1407E62F4
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140671A88 (MiPrepareImagePagesForHotPatch.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiImageVadHotPatchEligible @ 0x1407E325C (MiImageVadHotPatchEligible.c)
 *     MiReleaseHotPatchResources @ 0x140AAF5C8 (MiReleaseHotPatchResources.c)
 *     MiInitializeImageHotPatchContext @ 0x140ABC8AC (MiInitializeImageHotPatchContext.c)
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
  v6 = MiObtainReferencedVadEx(a1, 0, (int *)&v12);
  v7 = v6;
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 48) & 0x70) == 0x20 )
    {
      if ( !MiImageVadHotPatchEligible(v6) )
      {
        v12 = -1073741637;
LABEL_9:
        MiUnlockAndDereferenceVad((char *)v7);
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
