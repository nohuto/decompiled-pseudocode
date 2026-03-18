/*
 * XREFs of MiMarkKernelImageRetpolineBits @ 0x140A839D8
 * Callers:
 *     MiFinalizeKernelScpForSystemImage @ 0x140A83988 (MiFinalizeKernelScpForSystemImage.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x1404498D0 (MiIsRetpolineEnabled.c)
 *     MiMarkRetpolineBits @ 0x140A83A24 (MiMarkRetpolineBits.c)
 *     MiIsImageFullyRetpolined @ 0x140A942C4 (MiIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiMarkKernelImageRetpolineBits(__int64 a1, unsigned int a2)
{
  int v4; // edx

  if ( MiIsRetpolineEnabled() && (!v4 || (unsigned int)MiIsImageFullyRetpolined()) )
    return MiMarkRetpolineBits(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a2);
  else
    return 0LL;
}
