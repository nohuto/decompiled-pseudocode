/*
 * XREFs of ?HasEnded@CAnimation@@MEAA_NXZ @ 0x1801D7CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAnimation::HasEnded(CAnimation *this)
{
  return *((_BYTE *)this + 293) || !*((_QWORD *)this + 16);
}
