/*
 * XREFs of ?Zombied@QueryGlyphAttrsRequest@@UEBA_NXZ @ 0x1C01318C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall QueryGlyphAttrsRequest::Zombied(QueryGlyphAttrsRequest *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 12LL);
}
