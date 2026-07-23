/*
 * XREFs of KasanDriverLoadImage @ 0x1404B24A0
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 * Callees:
 *     KasanDriverLoadImageInternal @ 0x1404B24C0 (KasanDriverLoadImageInternal.c)
 */

__int64 __fastcall KasanDriverLoadImage(__int64 a1)
{
  return KasanDriverLoadImageInternal(a1, 0LL);
}
