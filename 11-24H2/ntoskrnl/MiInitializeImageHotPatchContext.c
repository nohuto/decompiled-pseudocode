/*
 * XREFs of MiInitializeImageHotPatchContext @ 0x140ABBDDC
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     MiPrepareToHotPatchVad @ 0x1407F6280 (MiPrepareToHotPatchVad.c)
 *     MmPrepareImagePagesForHotPatch @ 0x1407F68F8 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall MiInitializeImageHotPatchContext(_QWORD *a1, __int16 a2, __int64 a3)
{
  void *result; // rax
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  int v9; // ecx

  result = memset_0(a1, 0, 0xA0uLL);
  *((_WORD *)a1 + 68) = a2;
  if ( a3 )
  {
    *a1 = a3;
    v7 = (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12;
    a1[1] = v7;
    v8 = ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF;
    a1[2] = v8 + 1;
    a1[3] = (unsigned int)dword_140E2D8E8
          + (unsigned int)(*(_DWORD *)(***(_QWORD ***)(a3 + 72) + 8LL) << 12)
          + ((*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12);
    v9 = *(_DWORD *)(***(_QWORD ***)(a3 + 72) + 8LL);
    result = a1 + 15;
    a1[13] = v7;
    a1[14] = v8;
    *((_DWORD *)a1 + 8) = v9 << 12;
    a1[16] = a1 + 15;
    a1[15] = a1 + 15;
  }
  return result;
}
