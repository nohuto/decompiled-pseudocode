/*
 * XREFs of MiImageVadHotPatchEligible @ 0x1407E325C
 * Callers:
 *     MiGetVadForHotPatchInProgress @ 0x1407E2CB4 (MiGetVadForHotPatchInProgress.c)
 *     MiHotPatchProcess @ 0x1407E2E80 (MiHotPatchProcess.c)
 *     MmCommitHotPatchTable @ 0x1407E6108 (MmCommitHotPatchTable.c)
 *     MmPrepareImagePagesForHotPatch @ 0x1407E62F4 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiReadVadFlags2 @ 0x140455FA8 (MiReadVadFlags2.c)
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
    if ( dword_140E3726C )
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
