/*
 * XREFs of MiFinalizeKernelScpForSystemImage @ 0x140A88484
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiMapKernelScp @ 0x1404F25A8 (MiMapKernelScp.c)
 *     MiLogRetpolineImageLoadEvents @ 0x140A82C1C (MiLogRetpolineImageLoadEvents.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140A884D4 (MiMarkKernelImageRetpolineBits.c)
 */

__int64 __fastcall MiFinalizeKernelScpForSystemImage(__int64 a1)
{
  int v2; // edi

  MiMapKernelScp(*(_QWORD *)(a1 + 48), (unsigned __int64)*(unsigned int *)(a1 + 64) >> 12);
  v2 = MiMarkKernelImageRetpolineBits(a1, 1LL);
  if ( v2 >= 0 )
    MiLogRetpolineImageLoadEvents(a1);
  return (unsigned int)v2;
}
