/*
 * XREFs of KasanDriverLoadImage @ 0x1404B7B50
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 * Callees:
 *     KasanDriverLoadImageInternal @ 0x1404B7B70 (KasanDriverLoadImageInternal.c)
 */

__int64 __fastcall KasanDriverLoadImage(__int64 a1)
{
  return KasanDriverLoadImageInternal(a1, 0LL);
}
