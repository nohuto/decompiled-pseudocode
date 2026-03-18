/*
 * XREFs of ?GetDisplayPixelFormatInfo@CConversionSwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802CB5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::GetDisplayPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 412);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 420);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
