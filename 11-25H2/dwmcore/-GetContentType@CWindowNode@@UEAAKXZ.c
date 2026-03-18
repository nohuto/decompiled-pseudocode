/*
 * XREFs of ?GetContentType@CWindowNode@@UEAAKXZ @ 0x1802812C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContentType@CVisual@@UEAAKXZ @ 0x180281140 (-GetContentType@CVisual@@UEAAKXZ.c)
 */

__int64 __fastcall CWindowNode::GetContentType(CWindowNode *this)
{
  char v1; // bl

  v1 = *((_BYTE *)this + 888);
  return (32 * (v1 & 8 | ((v1 & 0x10) << 8))) | (unsigned int)CVisual::GetContentType(this);
}
