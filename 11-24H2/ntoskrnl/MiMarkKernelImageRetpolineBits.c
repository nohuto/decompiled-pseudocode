/*
 * XREFs of MiMarkKernelImageRetpolineBits @ 0x140A884D4
 * Callers:
 *     MiFinalizeKernelScpForSystemImage @ 0x140A88484 (MiFinalizeKernelScpForSystemImage.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x140446FE0 (MiIsRetpolineEnabled.c)
 *     MiMarkRetpolineBits @ 0x140A88520 (MiMarkRetpolineBits.c)
 *     MiIsImageFullyRetpolined @ 0x140A984B4 (MiIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiMarkKernelImageRetpolineBits(__int64 a1, unsigned int a2)
{
  int v4; // edx

  if ( MiIsRetpolineEnabled() && (!v4 || (unsigned int)MiIsImageFullyRetpolined()) )
    return MiMarkRetpolineBits(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a2);
  else
    return 0LL;
}
