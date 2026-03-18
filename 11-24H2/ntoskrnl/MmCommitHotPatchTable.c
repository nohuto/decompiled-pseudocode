/*
 * XREFs of MmCommitHotPatchTable @ 0x1407F5F98
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiCommitHotPatchTable @ 0x14067CF28 (MiCommitHotPatchTable.c)
 *     MiImageVadHotPatchEligible @ 0x1407F30E4 (MiImageVadHotPatchEligible.c)
 */

__int64 __fastcall MmCommitHotPatchTable(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  v4 = MiObtainReferencedVadEx(a1, 0LL, (int *)&v8);
  v5 = v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 48) & 0x70) == 0x20 )
    {
      if ( !MiImageVadHotPatchEligible(v4) )
      {
        v8 = -1073741637;
LABEL_10:
        MiUnlockAndDereferenceVad((PVOID)v5);
        return v8;
      }
      v6 = (unsigned int)dword_140E2D7A8
         + (unsigned int)(*(_DWORD *)(***(_QWORD ***)(v5 + 72) + 8LL) << 12)
         + ((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12);
      if ( v6 <= a1 && a1 + (a2 << 12) - v6 <= (unsigned int)dword_140E374AC )
      {
        v8 = MiCommitHotPatchTable(v5, a1, a2);
        if ( (v8 & 0x80000000) == 0 )
          v8 = 0;
        goto LABEL_10;
      }
    }
    v8 = -1073741800;
    goto LABEL_10;
  }
  return v8;
}
