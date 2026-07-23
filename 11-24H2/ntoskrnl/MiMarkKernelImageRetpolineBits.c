/*
 * XREFs of MiMarkKernelImageRetpolineBits @ 0x140A849C4
 * Callers:
 *     MiFinalizeKernelScpForSystemImage @ 0x140A84974 (MiFinalizeKernelScpForSystemImage.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiIsRetpolineEnabled @ 0x14043F7B4 (MiIsRetpolineEnabled.c)
 *     MiMarkRetpolineBits @ 0x140A84A10 (MiMarkRetpolineBits.c)
 *     MiIsImageFullyRetpolined @ 0x140A94C70 (MiIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiMarkKernelImageRetpolineBits(__int64 a1, unsigned int a2)
{
  int v4; // edx

  if ( MiIsRetpolineEnabled() && (!v4 || (unsigned int)MiIsImageFullyRetpolined()) )
    return MiMarkRetpolineBits(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a2);
  else
    return 0LL;
}
