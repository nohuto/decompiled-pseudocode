/*
 * XREFs of MiGetVadForHotPatchInProgress @ 0x1407E2CB4
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407E1A7C (MiApplyImageHotPatchRequest.c)
 *     MiCreatePatchSectionRequest @ 0x140AA63E8 (MiCreatePatchSectionRequest.c)
 * Callees:
 *     MiSetVadFlags @ 0x1402A3618 (MiSetVadFlags.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x140432030 (MiVadDeleted.c)
 *     MiImageVadHotPatchEligible @ 0x1407E325C (MiImageVadHotPatchEligible.c)
 */

__int64 __fastcall MiGetVadForHotPatchInProgress(unsigned __int64 a1, int a2, __int64 *a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // esi
  bool v12; // zf
  unsigned int v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  *a3 = 0LL;
  v14 = 0;
  *a4 = 0;
  v9 = MiObtainReferencedVadEx(a1, 0, (int *)&v14);
  v10 = v9;
  if ( !v9 )
    return v14;
  if ( (*(_DWORD *)(v9 + 48) & 0x70) != 0x20 || (unsigned int)MiVadDeleted(v9) )
    goto LABEL_3;
  if ( !(unsigned int)MiImageVadHotPatchEligible() )
  {
    v4 = -1073741637;
    goto LABEL_16;
  }
  if ( a1 == (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12 )
  {
    v11 = (*(_DWORD *)(v10 + 48) >> 23) & 3;
    if ( v11 == 1 )
    {
      v4 = -1073740682;
    }
    else
    {
      if ( !v11 || (a2 ? (v12 = v11 == 3) : (v12 = v11 == 2), v12) )
      {
        MiSetVadFlags(v10, 4LL, 1);
        *a4 = v11;
        *a3 = v10;
        return v4;
      }
      v4 = -1073700861;
    }
  }
  else
  {
LABEL_3:
    v4 = -1073741800;
  }
LABEL_16:
  MiUnlockAndDereferenceVad((char *)v10);
  return v4;
}
