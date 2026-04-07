/*
 * XREFs of ?IsOKToCleanup@CIndirectTouchVisual@@UEAA_NXZ @ 0x1800C70C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CIndirectTouchVisual::IsOKToCleanup(CIndirectTouchVisual *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 40) )
    return *((_QWORD *)this + 41) == 0LL;
  return result;
}
