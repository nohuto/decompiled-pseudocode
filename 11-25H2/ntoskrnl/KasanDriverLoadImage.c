/*
 * XREFs of KasanDriverLoadImage @ 0x1404B82C0
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 * Callees:
 *     KasanDriverLoadImageInternal @ 0x1404B82E0 (KasanDriverLoadImageInternal.c)
 */

__int64 __fastcall KasanDriverLoadImage(__int64 a1)
{
  return KasanDriverLoadImageInternal(a1, 0LL);
}
