/*
 * XREFs of ?GetPrevious3DFocusTarget@MPCInputRouter@@UEAAQEAUIMPCFocusTarget@@XZ @ 0x180078570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCFocusTarget *__fastcall MPCInputRouter::GetPrevious3DFocusTarget(MPCInputRouter *this)
{
  return (struct IMPCFocusTarget *)*((_QWORD *)this + 4);
}
