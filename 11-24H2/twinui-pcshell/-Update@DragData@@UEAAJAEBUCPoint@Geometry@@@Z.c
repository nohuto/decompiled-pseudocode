/*
 * XREFs of ?Update@DragData@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1805340B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180231DA0 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall DragData::Update(struct tagPOINT *this, const struct tagPOINT *a2)
{
  int x; // eax
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  struct tagPOINT v6; // r9
  __int64 v7; // rcx
  const struct tagPOINT *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // r9

  if ( this[6].x != a2->x || this[6].y != a2->y )
  {
    this[6] = *a2;
    x = a2->y - this[4].y;
    if ( x <= this[7].x )
      x = this[7].x;
    this[7].x = x;
    if ( x > this[7].y )
    {
      v4 = 0LL;
      v5 = 0LL;
      while ( v4 < *(_QWORD *)&this[15] )
      {
        v6 = this[14];
        if ( *(_DWORD *)(v5 + *(_QWORD *)&v6) == 5 )
        {
          v7 = *(_QWORD *)&v6 + 24 * v4;
          if ( v7 )
            *(_BYTE *)(v7 + 20) = 1;
          break;
        }
        ++v4;
        v5 += 24LL;
      }
    }
    this[9].x = -1;
    if ( Geometry::CRect::Contains((Geometry::CRect *)&this[4], a2) )
    {
      v10 = *(_QWORD *)(v9 + 112);
      v11 = v10 + 24LL * *(_QWORD *)(v9 + 120);
      while ( v10 != v11 )
      {
        if ( Geometry::CRect::Contains((Geometry::CRect *)(v10 + 4), v8) && *(_BYTE *)(v13 + 20) )
        {
          *(_OWORD *)(v12 + 72) = *(_OWORD *)v13;
          *(_QWORD *)(v12 + 88) = *(_QWORD *)(v13 + 16);
          return 0LL;
        }
        v10 = v13 + 24;
      }
    }
  }
  return 0LL;
}
