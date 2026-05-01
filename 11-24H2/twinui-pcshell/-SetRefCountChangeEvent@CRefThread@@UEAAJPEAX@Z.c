/*
 * XREFs of ?SetRefCountChangeEvent@CRefThread@@UEAAJPEAX@Z @ 0x1803EC830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefThread::SetRefCountChangeEvent(CRefThread *this, void *a2)
{
  *((_QWORD *)this + 3) = a2;
  return 0LL;
}
