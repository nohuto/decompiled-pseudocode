/*
 * XREFs of ??0KLoader@@QEAA@XZ @ 0x14014AC08
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     <none>
 */

KLoader *__fastcall KLoader::KLoader(KLoader *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  return this;
}
