/*
 * XREFs of ?MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1400A4DC8
 * Callers:
 *     ?BeginTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1400A46B0 (-BeginTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapTemporaryResource(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  _QWORD *v9; // rax
  __int64 v10; // r15
  unsigned __int64 i; // rbx
  unsigned __int64 j; // rbx

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v9[3] = a2;
    v9[4] = a3;
    v9[5] = a4;
    WdLogGlobalForLineNumber = 1552;
  }
  v10 = *(_QWORD *)a2;
  (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, _QWORD, struct _MDL *, int, bool))(*(_QWORD *)this + 200LL))(
    this,
    a2,
    a4 >> 12,
    (*(_QWORD *)(*(_QWORD *)a2 + 136LL) + a3) >> 12,
    *(_QWORD *)(*(_QWORD *)a2 + 136LL) >> 12,
    a5,
    1,
    (**((_DWORD **)a2 + 49) & 0x800004) == 4);
  for ( i = 0LL; i < a3; i += 4096LL )
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct VIDMM_GLOBAL_ALLOC *, __int64, unsigned __int64, _QWORD, _QWORD, int, _DWORD))(*(_QWORD *)this + 200LL))(
      this,
      a2,
      1LL,
      (*(_QWORD *)(v10 + 136) + i) >> 12,
      *(_QWORD *)(v10 + 136) >> 12,
      *((_QWORD *)this + 39),
      1,
      0);
  for ( j = a4 + i; j < *(_QWORD *)(v10 + 16); j += 4096LL )
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct VIDMM_GLOBAL_ALLOC *, __int64, unsigned __int64, _QWORD, _QWORD, int, _DWORD))(*(_QWORD *)this + 200LL))(
      this,
      a2,
      1LL,
      (*(_QWORD *)(v10 + 136) + j) >> 12,
      *(_QWORD *)(v10 + 136) >> 12,
      *((_QWORD *)this + 39),
      1,
      0);
}
