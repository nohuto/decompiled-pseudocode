/*
 * XREFs of ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEAUVIDMM_PHYSICAL_ALLOC@@_K2@Z @ 0x1400C0390
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C16A0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     MapInCpuHostAperture @ 0x14011493C (MapInCpuHostAperture.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z @ 0x140038E38 (-DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_CPU_HOST_APERTURE::MapRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2,
        struct VIDMM_PHYSICAL_ALLOC *a3,
        unsigned __int64 a4)
{
  UINT32 *v4; // rsi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  UINT64 *v11; // r14
  __int64 result; // rax
  UINT32 v13; // eax
  UINT32 *v14; // r8
  int v15; // r9d
  UINT32 *v16; // rdx
  __m128i *v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __m128i si128; // xmm1
  unsigned __int64 v21; // rax
  __m128i v22; // xmm0
  void *v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  UINT64 v28; // rbp
  int SegmentId; // r13d
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  struct _DXGKARG_MAPCPUHOSTAPERTURE v33; // [rsp+30h] [rbp-68h] BYREF
  UINT64 *v36; // [rsp+C0h] [rbp+28h]

  v4 = (UINT32 *)((char *)a2 + 32);
  if ( *((_DWORD *)a2 + 8) != -1 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 44LL, this, a2, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  v8 = *(unsigned int *)(*((_QWORD *)this + 6) + 416LL);
  v9 = *(unsigned int *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 7));
  v10 = 8 * v9;
  if ( !is_mul_ok(v9, 8uLL) )
    v10 = -1LL;
  v36 = (UINT64 *)operator new[](v10, 0x36346956u, 258LL);
  v11 = v36;
  if ( v36 )
  {
    v13 = *((_DWORD *)a2 + 6);
    v14 = &v4[v9];
    v15 = *((_DWORD *)a2 + 7);
    v16 = v4;
    if ( v4 == v14 )
    {
LABEL_10:
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 47LL, this, a2, 0LL);
      WdLogGlobalForLineNumber = 195;
    }
    else
    {
      while ( 1 )
      {
        *v16 = v13;
        if ( v13 == v15 )
          break;
        ++v16;
        v13 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v13);
        if ( v16 == v14 )
          goto LABEL_10;
      }
    }
    v17 = (__m128i *)v36;
    v18 = a4 / v8;
    v19 = v9 + a4 / v8;
    if ( v18 < v9 + v18 )
    {
      if ( v9 < 8 )
        goto LABEL_38;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      do
      {
        *v17 = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)v18, (__m128i)v18), si128);
        v17[1] = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)(v18 + 2), (__m128i)(v18 + 2)), si128);
        v21 = v18 + 6;
        v22 = _mm_unpacklo_epi64((__m128i)(v18 + 4), (__m128i)(v18 + 4));
        v18 += 8LL;
        v17[2] = _mm_add_epi64(v22, si128);
        v17[3] = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)v21, (__m128i)v21), si128);
        v17 += 4;
      }
      while ( v18 < v19 - (v9 & 7) );
      if ( v18 < v19 )
      {
LABEL_38:
        do
        {
          v17->m128i_i64[0] = v18;
          v17 = (__m128i *)((char *)v17 + 8);
          ++v18;
        }
        while ( v18 < v19 );
      }
    }
    *(_DWORD *)(&v33.PhysicalAdapterIndex + 1) = 0;
    if ( *(_QWORD *)a3 )
      v23 = *(void **)(*(_QWORD *)(*(_QWORD *)a3 + 392LL) + 48LL);
    else
      v23 = 0LL;
    v24 = *((_QWORD *)this + 6);
    v33.hAllocation = v23;
    v33.NumberOfPages = v9;
    v33.pCpuHostAperturePages = v4;
    v33.pMemorySegmentPages = v36;
    if ( (*(_DWORD *)(v24 + 104) & 0x1000) != 0 )
      v33.SegmentId = 0;
    else
      v33.SegmentId = *(_WORD *)(v24 + 40) + 1;
    v33.PhysicalAdapterIndex = *(_WORD *)(v24 + 420);
    v25 = ADAPTER_RENDER::DdiMapCpuHostAperture(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v24 + 24) + 24LL) + 3128LL),
            &v33);
    v26 = *(_QWORD *)this;
    if ( *(VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)this + 8LL) != this )
      __fastfail(3u);
    *(_QWORD *)a2 = v26;
    *((_QWORD *)a2 + 1) = this;
    *(_QWORD *)(v26 + 8) = a2;
    *(_QWORD *)this = a2;
    if ( v25 < 0 )
    {
      v27 = *(_QWORD *)a3;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 45LL, this, v27, &v33);
      WdLogGlobalForLineNumber = 195;
    }
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 41064LL) && (_DWORD)v9 )
    {
      do
      {
        v28 = *v11;
        SegmentId = v33.SegmentId;
        v30 = *(_QWORD *)(*((_QWORD *)this + 6) + 24LL);
        if ( *(_QWORD *)(v30 + 41064) )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v30 + 41008, 0LL);
          *(_QWORD *)(v30 + 41016) = KeGetCurrentThread();
          v31 = *(unsigned int *)(v30 + 41072);
          if ( (_DWORD)v31 == dword_1400814D4 )
          {
            *(_DWORD *)(v30 + 41072) = 0;
            v31 = 0LL;
          }
          v32 = *(_QWORD *)(v30 + 41064) + 48 * v31;
          *(_QWORD *)v32 = MEMORY[0xFFFFF78000000014];
          *(_DWORD *)(v32 + 32) = 2;
          *(_DWORD *)(v32 + 36) = SegmentId;
          *(_QWORD *)(v32 + 8) = v28;
          *(_QWORD *)(v32 + 16) = 1LL;
          *(_QWORD *)(v32 + 24) = 0LL;
          *(_DWORD *)(v32 + 40) = *(_DWORD *)(v30 + 41000);
          ++*(_DWORD *)(v30 + 41072);
          *(_QWORD *)(v30 + 41016) = 0LL;
          ExReleasePushLockExclusiveEx(v30 + 41008, 0LL);
          KeLeaveCriticalRegion();
        }
        ++v11;
        --v9;
      }
      while ( v9 );
      v11 = v36;
    }
    operator delete(v11);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 699;
  }
  return result;
}
