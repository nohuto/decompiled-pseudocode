/*
 * XREFs of ?Get3DFocusTarget@MPCInputRouter@@UEAAQEAUIMPCFocusTarget@@XZ @ 0x18009C230
 * Callers:
 *     ?GetInputSite@MPCFocusTarget@@WFA@EAAPEAVInputSite@@XZ @ 0x1800FDAE0 (-GetInputSite@MPCFocusTarget@@WFA@EAAPEAVInputSite@@XZ.c)
 * Callees:
 *     <none>
 */

struct IMPCFocusTarget *__fastcall MPCInputRouter::Get3DFocusTarget(MPCInputRouter *this)
{
  return (struct IMPCFocusTarget *)*((_QWORD *)this + 3);
}
