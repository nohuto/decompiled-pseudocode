/*
 * XREFs of KseRegisterShim @ 0x140732BB0
 * Callers:
 *     KseInitialize @ 0x140C1A2FC (KseInitialize.c)
 *     KseVersionLieInitialize @ 0x140C1B39C (KseVersionLieInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x140732BD0 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
