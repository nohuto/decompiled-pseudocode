/*
 * XREFs of MiLogRetpolineImageLoadEvents @ 0x140A7D73C
 * Callers:
 *     MiFinalizeKernelScpForSystemImage @ 0x140A84974 (MiFinalizeKernelScpForSystemImage.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C5779C (MiApplyRetpolineToBootDriver.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1404BD5B4 (RtlIsImageFullyRetpolined.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x1407F0E00 (MiConstructNonRetpolineImageLoadRecord.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140A7D7A8 (MiLogNonRetpolineImageLoadEvent.c)
 */

_QWORD *__fastcall MiLogRetpolineImageLoadEvents(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  result = (_QWORD *)RtlIsImageFullyRetpolined(*(_QWORD *)(a1 + 48));
  if ( !(_DWORD)result )
  {
    if ( *(_QWORD *)&qword_140E37658 )
    {
      return (_QWORD *)MiLogNonRetpolineImageLoadEvent(
                         a1 + 88,
                         *(unsigned int *)(a1 + 120),
                         *(unsigned int *)(a1 + 156));
    }
    else
    {
      result = (_QWORD *)MiConstructNonRetpolineImageLoadRecord(a1);
      if ( result )
      {
        v3 = (_QWORD *)qword_140E2D8B0;
        if ( *(PVOID **)qword_140E2D8B0 != &qword_140E2D8A8 )
          __fastfail(3u);
        *result = &qword_140E2D8A8;
        result[1] = v3;
        *v3 = result;
        qword_140E2D8B0 = (__int64)result;
      }
    }
  }
  return result;
}
