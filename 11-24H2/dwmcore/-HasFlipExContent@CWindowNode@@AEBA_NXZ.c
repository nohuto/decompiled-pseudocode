/*
 * XREFs of ?HasFlipExContent@CWindowNode@@AEBA_NXZ @ 0x1801C27B4
 * Callers:
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ @ 0x1801C2740 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowNode::HasFlipExContent(CWindowNode *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 105);
  if ( (v1 & 2) != 0 )
    v2 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v2 = *((_QWORD *)this + 105) & 1LL;
  return v2 != 0;
}
