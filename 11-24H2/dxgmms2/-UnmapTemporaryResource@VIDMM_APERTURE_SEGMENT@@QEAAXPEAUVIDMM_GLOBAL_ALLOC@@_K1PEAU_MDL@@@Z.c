/*
 * XREFs of ?UnmapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1400A5470
 * Callers:
 *     ?EndTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1400A47B0 (-EndTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3F08 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnmapTemporaryResource(
        VIDMM_GLOBAL **this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  unsigned __int64 v5; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r15
  unsigned __int64 i; // rbx

  v5 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v10[3] = a2;
    v10[4] = a3;
    v10[5] = a4;
    WdLogGlobalForLineNumber = 1655;
  }
  v11 = *(_QWORD *)a2;
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, _QWORD, struct _MDL *, int))*this
   + 26))(
    this,
    a2,
    a4 >> 12,
    (*(_QWORD *)(*(_QWORD *)a2 + 136LL) + a3) >> 12,
    *(_QWORD *)(*(_QWORD *)a2 + 136LL) >> 12,
    a5,
    1);
  if ( a3 )
  {
    do
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines(this[3], a2);
      (*((void (__fastcall **)(VIDMM_GLOBAL **, struct VIDMM_GLOBAL_ALLOC *, __int64, unsigned __int64, _QWORD, VIDMM_GLOBAL *, int))*this
       + 26))(
        this,
        a2,
        1LL,
        (*(_QWORD *)(v11 + 136) + v5) >> 12,
        *(_QWORD *)(v11 + 136) >> 12,
        this[39],
        1);
      v5 += 4096LL;
    }
    while ( v5 < a3 );
  }
  for ( i = a4 + v5; i < *(_QWORD *)(*(_QWORD *)a2 + 16LL); i += 4096LL )
  {
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[3], a2);
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct VIDMM_GLOBAL_ALLOC *, __int64, unsigned __int64, _QWORD, VIDMM_GLOBAL *, int))*this
     + 26))(
      this,
      a2,
      1LL,
      (*(_QWORD *)(v11 + 136) + i) >> 12,
      *(_QWORD *)(v11 + 136) >> 12,
      this[39],
      1);
  }
}
