/*
 * XREFs of MiLogRetpolineImageLoadEvents @ 0x140A82C1C
 * Callers:
 *     MiFinalizeKernelScpForSystemImage @ 0x140A88484 (MiFinalizeKernelScpForSystemImage.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C5560C (MiApplyRetpolineToBootDriver.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1404C1FC4 (RtlIsImageFullyRetpolined.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x1407F0830 (MiConstructNonRetpolineImageLoadRecord.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140A82C88 (MiLogNonRetpolineImageLoadEvent.c)
 */

_QWORD *__fastcall MiLogRetpolineImageLoadEvents(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  result = (_QWORD *)RtlIsImageFullyRetpolined(*(_QWORD *)(a1 + 48));
  if ( !(_DWORD)result )
  {
    if ( *(_QWORD *)&qword_140E37518 )
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
        v3 = (_QWORD *)qword_140E2D770;
        if ( *(PVOID **)qword_140E2D770 != &qword_140E2D768 )
          __fastfail(3u);
        *result = &qword_140E2D768;
        result[1] = v3;
        *v3 = result;
        qword_140E2D770 = (__int64)result;
      }
    }
  }
  return result;
}
