/*
 * XREFs of ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N@Z @ 0x1400CDA94
 * Callers:
 *     CancelAllReclaimedAllocationsInList @ 0x1400CD9FC (CancelAllReclaimedAllocationsInList.c)
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140005BFC (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400CDD2C (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IncrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1400CE0FC (-IncrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400CE188 (-IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400CF710 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::ReAllocateOldResource(VIDMM_SEGMENT *this, struct VIDMM_PHYSICAL_ALLOC *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  unsigned __int64 *v6; // rsi
  int *v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  VIDMM_LINEAR_POOL *v12; // rcx
  int v13; // esi
  VIDMM_SEGMENT *v14; // rax
  VIDMM_SEGMENT *v15; // rcx
  VIDMM_SEGMENT **v16; // rdx
  VIDMM_SEGMENT **v17; // rdx
  void *v18; // [rsp+80h] [rbp+8h] BYREF
  union _LARGE_INTEGER v19; // [rsp+88h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = v3;
    WdLogGlobalForLineNumber = 2492;
  }
  v6 = (unsigned __int64 *)((char *)a2 + 16);
  VIDMM_SEGMENT::IncrementBytesResident(
    this,
    **(struct VIDMM_PARTITION ***)(v3 + 352),
    *((_QWORD *)a2 + 2),
    (*(_DWORD *)(v3 + 24) & 0x200) != 0);
  VIDMM_SEGMENT::IncrementBytesCommitted(this, **(struct VIDMM_PARTITION ***)(v3 + 352), *((_QWORD *)a2 + 2));
  ++*((_DWORD *)this + 90);
  ++*((_DWORD *)this + 91);
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0pqx_EtwWriteTransfer();
  v7 = (int *)((char *)this + 104);
  if ( (*((_DWORD *)this + 26) & 0x1001) != 0 )
  {
    v8 = *(_QWORD *)(v3 + 360);
    if ( v8 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v8 + 44)) == 1 )
      {
        _InterlockedAdd64((volatile signed __int64 *)(**(_QWORD **)(v3 + 352) + 56LL), *v6);
        v7 = (int *)((char *)this + 104);
      }
      if ( _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v3 + 360) + 40LL)) == 1 )
        _InterlockedAdd64((volatile signed __int64 *)(**(_QWORD **)(v3 + 352) + 64LL), *v6);
      v6 = (unsigned __int64 *)((char *)a2 + 16);
    }
    else
    {
      _InterlockedAdd64((volatile signed __int64 *)(**(_QWORD **)(v3 + 352) + 56LL), *v6);
      _InterlockedAdd64((volatile signed __int64 *)(**(_QWORD **)(v3 + 352) + 64LL), *v6);
    }
    *(_QWORD *)(*((_QWORD *)this + 3) + 40216LL) += *v6;
  }
  v9 = *v7;
  if ( (*v7 & 0x20) != 0 )
    v10 = *((_QWORD *)a2 + 3);
  else
    v10 = *v6;
  if ( (v9 & 0x1000) != 0 )
  {
    v13 = 0;
    *((_QWORD *)a2 + 10) = 1LL;
  }
  else
  {
    v11 = *((_QWORD *)a2 + 9);
    v18 = 0LL;
    v12 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 26);
    v19.QuadPart = 0LL;
    v13 = VIDMM_LINEAR_POOL::Allocate(v12, v10, 0, 1u, v11, v11 + v10, 0, 0, a2, &v19, &v18);
    *((_QWORD *)a2 + 10) = v18;
  }
  v14 = (VIDMM_SEGMENT *)(v3 + 264);
  v15 = *(VIDMM_SEGMENT **)(v3 + 264);
  if ( *((_QWORD *)v15 + 1) != v3 + 264
    || (v16 = *(VIDMM_SEGMENT ***)(v3 + 272), *v16 != v14)
    || (*v16 = v15,
        *((_QWORD *)v15 + 1) = v16,
        v17 = (VIDMM_SEGMENT **)*((_QWORD *)this + 2),
        *v17 != (VIDMM_SEGMENT *)((char *)this + 8)) )
  {
LABEL_25:
    __fastfail(3u);
  }
  *(_QWORD *)v14 = (char *)this + 8;
  *(_QWORD *)(v3 + 272) = v17;
  *v17 = v14;
  *((_QWORD *)this + 2) = v14;
  VIDMM_SEGMENT::MarkResourcesForEviction(this, (struct VIDMM_GLOBAL_ALLOC *)v3);
  if ( v13 < 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 6LL, v3, v13, 0LL);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_25;
  }
}
