/*
 * XREFs of ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A4F90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400CF710 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_APERTURE_SEGMENT::ReserveTemporaryResource(
        VIDMM_LINEAR_POOL **this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // esi
  _QWORD *v10; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this);
    WdLogGlobalForLineNumber = 1007;
    v5 = WdLogNewEntry5_WdTrace(v4);
    *(_QWORD *)(v5 + 24) = this;
    *(_QWORD *)(v5 + 32) = a2;
    WdLogGlobalForLineNumber = 1010;
  }
  if ( *((_QWORD *)a2 + 2) > (unsigned __int64)this[9] )
    return 3223191808LL;
  if ( ((_DWORD)this[13] & 0x20) != 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 13LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  (*((void (__fastcall **)(VIDMM_LINEAR_POOL **, _QWORD))*this + 7))(this, *(_QWORD *)a2);
  v7 = VIDMM_LINEAR_POOL::Allocate(
         this[26],
         *((_QWORD *)a2 + 2),
         *((_DWORD *)a2 + 8),
         1u,
         0LL,
         0LL,
         0,
         0,
         a2,
         (union _LARGE_INTEGER *)a2 + 17,
         (void **)a2 + 16);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8) + 24) = v7;
      WdLogGlobalForLineNumber = 1065;
    }
  }
  else
  {
    *((_QWORD *)a2 + 18) = this;
    if ( g_IsInternalReleaseOrDbg )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v10[3] = *((_QWORD *)a2 + 16);
      v10[4] = *((int *)a2 + 35);
      v10[5] = *((unsigned int *)a2 + 34);
      WdLogGlobalForLineNumber = 1060;
    }
  }
  return v9;
}
