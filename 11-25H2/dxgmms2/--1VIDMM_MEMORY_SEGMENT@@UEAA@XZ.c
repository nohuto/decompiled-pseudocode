/*
 * XREFs of ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1400A3D88
 * Callers:
 *     ??_EVIDMM_MEMORY_SEGMENT@@UEAAPEAXI@Z @ 0x14004F170 (--_EVIDMM_MEMORY_SEGMENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004BCA0 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x14009C104 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1400A2C3C (--1VIDMM_CPU_HOST_APERTURE@@QEAA@XZ.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::~VIDMM_MEMORY_SEGMENT(VIDMM_MEMORY_SEGMENT *this)
{
  VIDMM_CPU_HOST_APERTURE *v1; // rdi
  void *v3; // rdx

  v1 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 69);
  *(_QWORD *)this = &VIDMM_MEMORY_SEGMENT::`vftable';
  if ( v1 )
  {
    VIDMM_CPU_HOST_APERTURE::~VIDMM_CPU_HOST_APERTURE(v1);
    operator delete(v1);
  }
  v3 = (void *)*((_QWORD *)this + 65);
  if ( v3 )
    SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 224LL), v3);
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 204;
  }
  VIDMM_SEGMENT::~VIDMM_SEGMENT((void **)this);
}
