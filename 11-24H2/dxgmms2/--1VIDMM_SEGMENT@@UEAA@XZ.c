/*
 * XREFs of ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x14009D9B0
 * Callers:
 *     ??_EVIDMM_SEGMENT@@UEAAPEAXI@Z @ 0x14004D8D0 (--_EVIDMM_SEGMENT@@UEAAPEAXI@Z.c)
 *     ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1400A452C (--1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1400A4650 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 *     ??1VIDMM_MEMORY_SEGMENT@@UEAA@XZ @ 0x1400A5608 (--1VIDMM_MEMORY_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x14004C210 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ @ 0x14009E4E8 (-FreeForwardProgressMdl@VIDMM_SEGMENT@@IEAAXXZ.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400BFF94 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::~VIDMM_SEGMENT(void **this)
{
  struct _MDL *v2; // rcx
  VIDMM_LINEAR_POOL *v3; // rcx

  *this = &VIDMM_SEGMENT::`vftable';
  VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this);
  if ( this[24] != this + 24 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 12LL, this, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  operator delete(this[36]);
  VIDMM_SEGMENT::FreeForwardProgressMdl((VIDMM_SEGMENT *)this);
  v2 = (struct _MDL *)this[39];
  if ( v2 )
  {
    MmFreePagesFromMdl(v2);
    ExFreePoolWithTag(this[39], 0);
    this[39] = 0LL;
  }
  v3 = (VIDMM_LINEAR_POOL *)this[26];
  if ( v3 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v3);
}
