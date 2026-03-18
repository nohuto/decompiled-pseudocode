/*
 * XREFs of ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEAUVIDMM_PHYSICAL_ALLOC@@_K2@Z @ 0x1400EE6C0
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C0D40 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     MapInCpuHostAperture @ 0x1401146B4 (MapInCpuHostAperture.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140038248 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z @ 0x14003AE38 (-DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_CPU_HOST_APERTURE::MapRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE *a2,
        struct VIDMM_PHYSICAL_ALLOC *a3,
        unsigned __int64 a4)
{
  UINT32 *v4; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  UINT64 *v12; // r11
  __int64 result; // rax
  UINT32 v14; // eax
  UINT32 *v15; // r8
  int v16; // r9d
  UINT32 *v17; // rdx
  __m128i *v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  __m128i si128; // xmm1
  unsigned __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rax
  void *v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  UINT64 *v30; // r14
  UINT64 v31; // rbp
  int SegmentId; // r13d
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  struct _DXGKARG_MAPCPUHOSTAPERTURE v36; // [rsp+30h] [rbp-58h] BYREF
  UINT64 *v38; // [rsp+B0h] [rbp+28h]

  v4 = (UINT32 *)((char *)a2 + 32);
  if ( *((_DWORD *)a2 + 8) != -1 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 44LL, this, a2, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  v9 = *(unsigned int *)(*((_QWORD *)this + 6) + 416LL);
  v10 = *(unsigned int *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 7));
  v11 = 8 * v10;
  if ( !is_mul_ok(v10, 8uLL) )
    v11 = -1LL;
  v38 = (UINT64 *)operator new[](v11, 0x36346956u, 258LL);
  v12 = v38;
  if ( v38 )
  {
    v14 = *((_DWORD *)a2 + 6);
    v15 = &v4[v10];
    v16 = *((_DWORD *)a2 + 7);
    v17 = v4;
    if ( v4 == v15 )
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
        *v17 = v14;
        if ( v14 == v16 )
          break;
        ++v17;
        v14 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v14);
        if ( v17 == v15 )
          goto LABEL_10;
      }
    }
    v18 = (__m128i *)v12;
    v19 = a4 / v9;
    v20 = v10 + a4 / v9;
    if ( v19 < v10 + v19 )
    {
      if ( v10 < 8 )
        goto LABEL_38;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      do
      {
        *v18 = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)v19, (__m128i)v19), si128);
        v18[1] = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)(v19 + 2), (__m128i)(v19 + 2)), si128);
        v22 = v19 + 6;
        v23 = _mm_unpacklo_epi64((__m128i)(v19 + 4), (__m128i)(v19 + 4));
        v19 += 8LL;
        v18[2] = _mm_add_epi64(v23, si128);
        v18[3] = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)v22, (__m128i)v22), si128);
        v18 += 4;
      }
      while ( v19 < v20 - (v10 & 7) );
      if ( v19 < v20 )
      {
LABEL_38:
        do
        {
          v18->m128i_i64[0] = v19;
          v18 = (__m128i *)((char *)v18 + 8);
          ++v19;
        }
        while ( v19 < v20 );
      }
    }
    v24 = *(_QWORD *)a3;
    *(_DWORD *)(&v36.PhysicalAdapterIndex + 1) = 0;
    if ( v24 )
      v25 = *(void **)(*(_QWORD *)(v24 + 376) + 48LL);
    else
      v25 = 0LL;
    v26 = *((_QWORD *)this + 6);
    v36.hAllocation = v25;
    v36.NumberOfPages = v10;
    v36.pCpuHostAperturePages = v4;
    v36.pMemorySegmentPages = v12;
    if ( (*(_DWORD *)(v26 + 104) & 0x1000) != 0 )
      v36.SegmentId = 0;
    else
      v36.SegmentId = *(_WORD *)(v26 + 40) + 1;
    v36.PhysicalAdapterIndex = *(_WORD *)(v26 + 420);
    v27 = ADAPTER_RENDER::DdiMapCpuHostAperture(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v26 + 24) + 24LL) + 3128LL),
            &v36);
    v28 = *(_QWORD *)this;
    if ( *(VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)this + 8LL) != this )
      __fastfail(3u);
    *(_QWORD *)a2 = v28;
    *((_QWORD *)a2 + 1) = this;
    *(_QWORD *)(v28 + 8) = a2;
    *(_QWORD *)this = a2;
    if ( v27 < 0 )
    {
      v29 = *(_QWORD *)a3;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 45LL, this, v29, &v36);
      WdLogGlobalForLineNumber = 195;
    }
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 24LL) + 41064LL) && (_DWORD)v10 )
    {
      v30 = v38;
      do
      {
        v31 = *v30;
        SegmentId = v36.SegmentId;
        v33 = *(_QWORD *)(*((_QWORD *)this + 6) + 24LL);
        if ( *(_QWORD *)(v33 + 41064) )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v33 + 41008, 0LL);
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          *(_QWORD *)(v33 + 41016) = KeGetCurrentThread();
          v34 = *(unsigned int *)(v33 + 41072);
          if ( (_DWORD)v34 == dword_1400814B4 )
          {
            *(_DWORD *)(v33 + 41072) = 0;
            v34 = 0LL;
          }
          v35 = *(_QWORD *)(v33 + 41064) + 48 * v34;
          *(_QWORD *)v35 = MEMORY[0xFFFFF78000000014];
          *(_DWORD *)(v35 + 32) = 2;
          *(_DWORD *)(v35 + 36) = SegmentId;
          *(_QWORD *)(v35 + 8) = v31;
          *(_QWORD *)(v35 + 16) = 1LL;
          *(_QWORD *)(v35 + 24) = 0LL;
          *(_DWORD *)(v35 + 40) = *(_DWORD *)(v33 + 41000);
          ++*(_DWORD *)(v33 + 41072);
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          *(_QWORD *)(v33 + 41016) = 0LL;
          ExReleasePushLockExclusiveEx(v33 + 41008, 0LL);
          KeLeaveCriticalRegion();
        }
        ++v30;
        --v10;
      }
      while ( v10 );
    }
    operator delete(v38);
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
