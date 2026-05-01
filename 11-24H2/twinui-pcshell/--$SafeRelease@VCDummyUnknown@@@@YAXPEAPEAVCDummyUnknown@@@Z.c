/*
 * XREFs of ??$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z @ 0x18055BE74
 * Callers:
 *     BindCtx_CreateWithObjectParam @ 0x18055DC08 (BindCtx_CreateWithObjectParam.c)
 *     BindCtx_CreateWithObjectParam_0 @ 0x180687EB0 (BindCtx_CreateWithObjectParam_0.c)
 *     BindCtx_RegisterObjectParam @ 0x1806C8D0C (BindCtx_RegisterObjectParam.c)
 * Callees:
 *     ?Release@CDummyUnknown@@UEAAKXZ @ 0x180562050 (-Release@CDummyUnknown@@UEAAKXZ.c)
 */

int __fastcall SafeRelease<CDummyUnknown>(CDummyUnknown **a1)
{
  CDummyUnknown *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = CDummyUnknown::Release(v1);
  return (int)v1;
}
