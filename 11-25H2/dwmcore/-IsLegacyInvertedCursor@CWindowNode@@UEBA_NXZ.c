/*
 * XREFs of ?IsLegacyInvertedCursor@CWindowNode@@UEBA_NXZ @ 0x18024C460
 * Callers:
 *     <none>
 * Callees:
 *     ?HasNonEmptyContent@CWindowNode@@UEBA_NXZ @ 0x180130500 (-HasNonEmptyContent@CWindowNode@@UEBA_NXZ.c)
 */

bool __fastcall CWindowNode::IsLegacyInvertedCursor(CWindowNode *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 746) && CWindowNode::HasNonEmptyContent(this) && (*((_DWORD *)this + 24) & 0x8000000) != 0 )
    return *((_DWORD *)this + 51) == 2;
  return v1;
}
