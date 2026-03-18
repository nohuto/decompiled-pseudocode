/*
 * XREFs of ?GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x1801AB960
 * Callers:
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000A138 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     <none>
 */

struct CBackdropVisualImage *__fastcall CTreeData::GetBackdropVisualImage(
        CTreeData *this,
        const struct CVisualTreePath *a2)
{
  __int64 i; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx

  for ( i = *((_QWORD *)this + 18); ; i += 8LL )
  {
    if ( i == *((_QWORD *)this + 19) )
      return 0LL;
    v5 = *(_QWORD **)a2;
    v6 = *(_QWORD *)(*(_QWORD *)i + 2072LL);
    if ( *(_QWORD *)(*(_QWORD *)i + 2080LL) - v6 == *((_QWORD *)a2 + 1) - *(_QWORD *)a2 )
      break;
LABEL_11:
    ;
  }
  v7 = v6 - (_QWORD)v5;
  while ( (_QWORD *)((char *)v5 + v7) != *(_QWORD **)(*(_QWORD *)i + 2080LL) )
  {
    if ( *(_QWORD *)((char *)v5 + v7) != *v5 || *(_QWORD *)((char *)v5 + v7 + 8) != v5[1] )
      goto LABEL_11;
    v5 += 2;
  }
  *(_QWORD *)(*(_QWORD *)i + 2232LL) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 888LL);
  return *(struct CBackdropVisualImage **)i;
}
