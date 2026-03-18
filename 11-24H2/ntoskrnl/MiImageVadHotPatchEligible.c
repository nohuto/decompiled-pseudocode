/*
 * XREFs of MiImageVadHotPatchEligible @ 0x1407F30E4
 * Callers:
 *     MiGetVadForHotPatchInProgress @ 0x1407F2B54 (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x1407F2D08 (MiHotPatchProcess.c)
 *     MmCommitHotPatchTable @ 0x1407F5F98 (MmCommitHotPatchTable.c)
 *     MmPrepareImagePagesForHotPatch @ 0x1407F6184 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiReadVadFlags2 @ 0x14044BF3C (MiReadVadFlags2.c)
 */

_BOOL8 __fastcall MiImageVadHotPatchEligible(__int64 a1)
{
  char VadFlags2; // al
  __int64 v2; // rcx
  __int16 v3; // dx
  _BOOL8 result; // rax

  VadFlags2 = MiReadVadFlags2(a1);
  result = 0;
  if ( (VadFlags2 & 0x20) != 0 )
  {
    if ( dword_140E374AC )
    {
      if ( (VadFlags2 & 1) == 0 )
      {
        v3 = *(_WORD *)(*(_QWORD *)(***(_QWORD ***)(v2 + 72) + 56LL) + 48LL);
        if ( v3 == -31132 || v3 == 332 || v3 == -21916 )
          return 1;
      }
    }
  }
  return result;
}
