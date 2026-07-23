/*
 * XREFs of MmPrepareImagePagesForHotPatch @ 0x1407F68F8
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiImageVadHotPatchEligible @ 0x1407F3718 (MiImageVadHotPatchEligible.c)
 *     MiReleaseHotPatchResources @ 0x140AAF528 (MiReleaseHotPatchResources.c)
 *     MiInitializeImageHotPatchContext @ 0x140ABBDDC (MiInitializeImageHotPatchContext.c)
 */

__int64 __fastcall MmPrepareImagePagesForHotPatch(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v11[7]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v12; // [rsp+58h] [rbp-21h]
  unsigned int v13; // [rsp+F0h] [rbp+77h] BYREF

  v13 = 0;
  memset_0(v11, 0, 0xA0uLL);
  *a3 = 0LL;
  MiInitializeImageHotPatchContext(v11, 0LL, 0LL);
  v7 = MiObtainReferencedVadEx(a1, 0LL, (int *)&v13, v6);
  v8 = v7;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 48) & 0x70) == 0x20 )
    {
      if ( !MiImageVadHotPatchEligible(v7) )
      {
        v13 = -1073741637;
LABEL_9:
        MiUnlockAndDereferenceVad((PVOID)v8);
        goto LABEL_10;
      }
      if ( (((*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) << 12) | 0xFFF) >= a1 + (a2 << 12) - 1 )
      {
        MiInitializeImageHotPatchContext(v11, 34404LL, v8);
        v13 = MiPrepareImagePagesForHotPatch(v11, a1, a2);
        if ( (v13 & 0x80000000) == 0 )
        {
          v9 = v12;
          v12 = 0LL;
          v13 = 0;
          *a3 = v9;
        }
        goto LABEL_9;
      }
    }
    v13 = -1073741800;
    goto LABEL_9;
  }
LABEL_10:
  MiReleaseHotPatchResources(v11);
  return v13;
}
