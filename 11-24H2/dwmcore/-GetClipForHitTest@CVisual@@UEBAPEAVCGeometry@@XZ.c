/*
 * XREFs of ?GetClipForHitTest@CVisual@@UEBAPEAVCGeometry@@XZ @ 0x1801BA650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CGeometry *__fastcall CVisual::GetClipForHitTest(CVisual *this)
{
  if ( *((char *)this + 105) < 0 )
    return 0LL;
  else
    return (struct CGeometry *)*((_QWORD *)this + 31);
}
