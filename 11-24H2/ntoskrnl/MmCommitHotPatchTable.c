/*
 * XREFs of MmCommitHotPatchTable @ 0x1407F6688
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiCommitHotPatchTable @ 0x14067E0B4 (MiCommitHotPatchTable.c)
 *     MiImageVadHotPatchEligible @ 0x1407F3718 (MiImageVadHotPatchEligible.c)
 */

__int64 __fastcall MmCommitHotPatchTable(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  v6 = MiObtainReferencedVadEx(a1, 0LL, (int *)&v10, a4);
  v7 = v6;
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 48) & 0x70) == 0x20 )
    {
      if ( !MiImageVadHotPatchEligible(v6) )
      {
        v10 = -1073741637;
LABEL_10:
        MiUnlockAndDereferenceVad((PVOID)v7);
        return v10;
      }
      v8 = (unsigned int)dword_140E2D8E8
         + (unsigned int)(*(_DWORD *)(***(_QWORD ***)(v7 + 72) + 8LL) << 12)
         + ((*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12);
      if ( v8 <= a1 && a1 + (a2 << 12) - v8 <= (unsigned int)dword_140E375EC )
      {
        v10 = MiCommitHotPatchTable(v7, a1, a2);
        if ( (v10 & 0x80000000) == 0 )
          v10 = 0;
        goto LABEL_10;
      }
    }
    v10 = -1073741800;
    goto LABEL_10;
  }
  return v10;
}
