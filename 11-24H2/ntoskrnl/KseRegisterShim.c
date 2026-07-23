/*
 * XREFs of KseRegisterShim @ 0x14073CB00
 * Callers:
 *     KseInitialize @ 0x140C2D51C (KseInitialize.c)
 *     KseVersionLieInitialize @ 0x140C2E5BC (KseVersionLieInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x14073CB20 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
