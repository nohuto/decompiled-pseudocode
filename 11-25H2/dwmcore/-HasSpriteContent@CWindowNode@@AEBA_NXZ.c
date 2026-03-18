/*
 * XREFs of ?HasSpriteContent@CWindowNode@@AEBA_NXZ @ 0x1801D4F60
 * Callers:
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ @ 0x1801D4F20 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowNode::HasSpriteContent(CWindowNode *this)
{
  __int64 v1; // rax
  bool result; // al

  result = 0;
  if ( !*((_BYTE *)this + 745) )
  {
    v1 = *((_QWORD *)this + 103);
    if ( (v1 & 2) != 0 ? *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFFCuLL) : *((_QWORD *)this + 103) & 1LL )
      return 1;
  }
  return result;
}
