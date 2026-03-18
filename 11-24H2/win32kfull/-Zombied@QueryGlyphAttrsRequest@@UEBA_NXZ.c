/*
 * XREFs of ?Zombied@QueryGlyphAttrsRequest@@UEBA_NXZ @ 0x1401E9500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall QueryGlyphAttrsRequest::Zombied(QueryGlyphAttrsRequest *this)
{
  return *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 24LL);
}
