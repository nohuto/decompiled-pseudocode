/*
 * XREFs of ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1400A452C
 * Callers:
 *     ??_GVIDMM_SYSMEM_SEGMENT@@UEAAPEAXI@Z @ 0x14004EA80 (--_GVIDMM_SYSMEM_SEGMENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x14009D9B0 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::~VIDMM_SYSMEM_SEGMENT(void **this)
{
  *this = &VIDMM_SYSMEM_SEGMENT::`vftable';
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 88;
  }
  VIDMM_SEGMENT::~VIDMM_SEGMENT(this);
}
