/*
 * XREFs of ??0PATH@@QEAA@XZ @ 0x1400C78EC
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x140055EF4 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     NtGdiFastPolyPolyline @ 0x1400C7B70 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     <none>
 */

PATH *__fastcall PATH::PATH(PATH *this)
{
  PATH_CORE::PATH_CORE((PATH *)((char *)this + 24));
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  return this;
}
