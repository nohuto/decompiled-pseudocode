/*
 * XREFs of ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180031468
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x180031108 (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z.c)
 * Callees:
 *     ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x180049258 (-DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

char __fastcall CWindowNode::ProcessReadyGdiSpriteBitmaps(CWindowNode *this)
{
  __int64 v1; // rdx
  unsigned int v3; // edi
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8

  v1 = *((_QWORD *)this + 104);
  v3 = 8;
  if ( *((_BYTE *)this + 753) )
  {
    if ( (v1 & 2) != 0 )
      v4 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v4 = v1 & 1;
    v5 = v4 - 1;
  }
  else
  {
    if ( (v1 & 2) != 0 )
      v5 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v5 = v1 & 1;
    v7 = 8 * v5 + 16;
    do
    {
      v8 = v5;
      v7 -= 8LL;
      --v5;
      if ( !v8 )
        break;
      if ( (v1 & 2) != 0 )
      {
        v9 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
        v10 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      else
      {
        v10 = v1 & 1;
        v9 = v1 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( v5 >= v10 )
      {
        v9 = 0LL;
      }
      else if ( v10 != 1 )
      {
        _mm_lfence();
        v1 = *((_QWORD *)this + 104);
        v9 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFFCuLL) + v7);
      }
    }
    while ( !*(_BYTE *)(v9 + 148) );
  }
  if ( v5 == -1LL || !v5 && (*((_BYTE *)this + 896) & 8) != 0 )
    return 0;
  *((_BYTE *)this + 896) |= 8u;
  CWindowNode::DiscardOldestGdiSpriteBitmaps(this, v5);
  if ( !*((_BYTE *)this + 753) )
  {
    if ( *((_BYTE *)this + 752) )
    {
      *((_BYTE *)this + 896) &= ~1u;
      v3 = 5;
    }
    else
    {
      v3 = 4;
    }
  }
  CVisual::PropagateFlags(this, v3);
  return 1;
}
