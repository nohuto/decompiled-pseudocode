/*
 * XREFs of ??1PATH@@QEAA@XZ @ 0x1400C7920
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x1400C7B70 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     <none>
 */

void __fastcall PATH::~PATH(PATH *this)
{
  PATH_CORE::~PATH_CORE((PATH *)((char *)this + 24));
}
