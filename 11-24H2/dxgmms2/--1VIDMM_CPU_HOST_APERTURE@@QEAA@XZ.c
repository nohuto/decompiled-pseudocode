/*
 * XREFs of ??1VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1400A44BC
 * Callers:
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1400A5608 (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::~VIDMM_CPU_HOST_APERTURE(VIDMM_CPU_HOST_APERTURE *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 5);
  if ( v1 )
    operator delete(v1);
}
