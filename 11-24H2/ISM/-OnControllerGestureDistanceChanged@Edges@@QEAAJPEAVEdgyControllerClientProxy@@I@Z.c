/*
 * XREFs of ?OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z @ 0x1801AA1CC
 * Callers:
 *     ?OnGestureDistanceChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x180156CD0 (-OnGestureDistanceChanged@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A83EC (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801A98F8 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 */

__int64 __fastcall Edges::OnControllerGestureDistanceChanged(
        Edges *this,
        struct EdgyControllerClientProxy *a2,
        unsigned int a3)
{
  char *v3; // rdx
  unsigned int v5; // ebx

  v3 = (char *)a2 + 88;
  v5 = -2147024809;
  if ( *((_QWORD *)v3 + 3) > 7uLL )
    v3 = *(char **)v3;
  if ( (int)Edges::FindEdge(this, (const unsigned __int16 *)v3) >= 0 )
  {
    Edge::s_gestureDistance = a3;
    return 0;
  }
  return v5;
}
