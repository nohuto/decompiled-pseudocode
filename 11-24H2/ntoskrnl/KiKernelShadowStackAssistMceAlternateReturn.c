/*
 * XREFs of KiKernelShadowStackAssistMceAlternateReturn @ 0x1405C43B0
 * Callers:
 *     KiMcheckAbort @ 0x1406BB9C0 (KiMcheckAbort.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x1403A9EE0 (VslKernelShadowStackAssist.c)
 */

__int64 __fastcall KiKernelShadowStackAssistMceAlternateReturn(__int64 a1)
{
  __int64 *v1; // rdx
  int v2; // r10d
  __int64 v3; // r9

  if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
  {
    v2 = 5;
    v3 = 0LL;
    v1 = (__int64 *)KeGetCurrentPrcb()->IstShadowStacksTable[2];
  }
  else
  {
    v1 = *(__int64 **)(a1 + 216);
    v2 = 4;
    v3 = *v1;
  }
  return VslKernelShadowStackAssist(v2, (__int64)v1, 0LL, v3, 0LL, 4);
}
