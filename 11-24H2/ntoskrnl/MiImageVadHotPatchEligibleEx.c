/*
 * XREFs of MiImageVadHotPatchEligibleEx @ 0x14067E350
 * Callers:
 *     MiHotPatchProcess @ 0x1407F32D8 (MiHotPatchProcess.c)
 *     MiImageVadHotPatchEligible @ 0x1407F3718 (MiImageVadHotPatchEligible.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageVadHotPatchEligibleEx(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx
  __int16 v3; // ax

  v1 = *(_DWORD *)(a1 + 64);
  if ( (v1 & 0x20) != 0 )
  {
    v2 = 0;
    if ( dword_140E375EC )
    {
      if ( (v1 & 1) != 0 )
      {
        return 30;
      }
      else
      {
        v3 = *(_WORD *)(*(_QWORD *)(***(_QWORD ***)(a1 + 72) + 56LL) + 48LL);
        if ( v3 != -31132 && v3 != 332 && v3 != -21916 )
          return 40;
      }
    }
    else
    {
      return 20;
    }
  }
  else
  {
    return 10;
  }
  return v2;
}
