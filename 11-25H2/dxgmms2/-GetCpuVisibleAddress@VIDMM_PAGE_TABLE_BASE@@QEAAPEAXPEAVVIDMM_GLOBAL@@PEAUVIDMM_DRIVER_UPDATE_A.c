/*
 * XREFs of ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BABA0
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BA084 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140038248 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z @ 0x14003AE38 (-DdiMapCpuHostAperture@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_MAPCPUHOSTAPERTURE@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400A9BBC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400A9C6C (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?DiscardCpuHostApertureRange@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400D28C0 (-DiscardCpuHostApertureRange@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM.c)
 *     AllocateCpuHostApertureRange @ 0x1400F6CC8 (AllocateCpuHostApertureRange.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1400FCBA0 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@.c)
 */

// write access to const memory has been detected, the output may be wrong!
void *__fastcall VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *a3)
{
  _DWORD *v3; // rax
  VIDMM_PAGE_TABLE_BASE *v4; // r10
  __int64 v5; // r11
  __int64 v6; // r9
  void *result; // rax
  __int64 v8; // r8
  int v9; // eax
  __int64 *v10; // rbx
  __int64 ****v11; // rax
  __int64 v12; // rdi
  struct _MDL *v13; // r13
  __int64 **v14; // r15
  __int64 *v15; // rsi
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbp
  unsigned int v18; // edx
  __int64 *v19; // rcx
  __int64 CpuHostApertureRange; // r14
  int v21; // esi
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v22; // rsi
  VIDMM_PHYSICAL_ADAPTER *v23; // r12
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v24; // r8
  __int64 v25; // rax
  int v26; // ecx
  _DWORD *v27; // rdx
  __int64 v28; // rax
  unsigned int *v29; // rsi
  unsigned __int64 v30; // r12
  __int64 v31; // rax
  UINT64 *v32; // r11
  unsigned int v33; // eax
  unsigned int *v34; // rdx
  int v35; // r8d
  __m128i *v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r8
  __m128i si128; // xmm2
  unsigned __int64 v40; // r9
  __m128i v41; // xmm1
  unsigned __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 *v44; // r15
  void *v45; // rax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rcx
  UINT64 *v50; // r15
  UINT64 v51; // r13
  __int64 v52; // rbp
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned __int64 v59; // [rsp+50h] [rbp-88h]
  __int64 ***v60; // [rsp+58h] [rbp-80h]
  _DXGKARG_MAPCPUHOSTAPERTURE v61; // [rsp+60h] [rbp-78h] BYREF
  __int64 v62; // [rsp+E0h] [rbp+8h]
  unsigned int v63; // [rsp+E0h] [rbp+8h]
  int SegmentId; // [rsp+E0h] [rbp+8h]
  __int64 *v65; // [rsp+E8h] [rbp+10h]
  UINT64 *v67; // [rsp+F8h] [rbp+20h]

  v3 = (_DWORD *)*((_QWORD *)this + 2);
  v4 = this;
  v5 = *(_QWORD *)v3;
  v6 = *(_QWORD *)(*((_QWORD *)a2 + 5029) + 8LL * (v3[6] & 0x3F));
  v62 = *(_QWORD *)(*(_QWORD *)v3 + 64LL);
  result = (void *)v62;
  if ( v62 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 1648) + 8LL * *(unsigned __int16 *)(v62 + 40));
    v9 = *(_DWORD *)(v8 + 104);
    if ( (v9 & 0x1001) == 0 )
    {
      if ( (v9 & 0x2000) != 0 )
      {
        v10 = *(__int64 **)(v8 + 552);
        v11 = (__int64 ****)*((_QWORD *)this + 3);
        v12 = 0LL;
        v60 = *v11;
        v13 = 0LL;
        v14 = **v11;
        v15 = *v14;
        v16 = *(unsigned int *)(v10[6] + 416);
        v65 = v15;
        v17 = (~(unsigned __int64)(unsigned int)(v16 - 1) & (v15[9]
                                                           + (unsigned int)(v16 - 1)
                                                           + v15[2]
                                                           - (~(unsigned __int64)(unsigned int)(v16 - 1) & v15[9])))
            / v16;
        if ( !(_DWORD)v17 && g_IsInternalRelease )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
          WdLogGlobalForLineNumber = 195;
        }
        v18 = *((_DWORD *)v10 + 15);
        if ( v18 < (unsigned int)v17 )
        {
          v19 = (__int64 *)v10[2];
          if ( v19 == v10 + 2 )
          {
LABEL_11:
            WdLogSingleEntry3(4LL, (unsigned int)v17, v18, v16);
            WdLogGlobalForLineNumber = 471;
            goto LABEL_13;
          }
          while ( 1 )
          {
            v18 += *(_DWORD *)(v10[5] + 4LL * *((unsigned int *)v19 + 7));
            if ( v18 >= (unsigned int)v17 )
              break;
            v19 = (__int64 *)*v19;
            if ( v19 == v10 + 2 )
              goto LABEL_11;
          }
        }
        CpuHostApertureRange = AllocateCpuHostApertureRange((unsigned int)v17);
        if ( CpuHostApertureRange )
        {
          if ( *((_DWORD *)v10 + 15) < (unsigned int)v17 )
          {
            v22 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v10[2];
            v23 = *(VIDMM_PHYSICAL_ADAPTER **)(v10[6] + 32);
            if ( v22 != (struct VIDMM_CPU_HOST_APERTURE_RANGE *)(v10 + 2) )
            {
              do
              {
                v24 = v22;
                v22 = *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)v22;
                VIDMM_PHYSICAL_ADAPTER::DiscardCpuHostApertureRange(v23, (struct VIDMM_CPU_HOST_APERTURE *)v10, v24);
              }
              while ( *((_DWORD *)v10 + 15) < (unsigned int)v17
                   && v22 != (struct VIDMM_CPU_HOST_APERTURE_RANGE *)(v10 + 2) );
            }
            v15 = v65;
          }
          v25 = *((unsigned int *)v10 + 16);
          v26 = v17 - 1;
          *(_DWORD *)(CpuHostApertureRange + 24) = v25;
          if ( (_DWORD)v17 != 1 )
          {
            do
            {
              LODWORD(v25) = *(_DWORD *)(v10[5] + 4 * v25);
              --v26;
            }
            while ( v26 );
          }
          *(_DWORD *)(CpuHostApertureRange + 28) = v25;
          v27 = (_DWORD *)(v10[5] + 4LL * (unsigned int)v25);
          *((_DWORD *)v10 + 16) = *v27;
          *v27 = v17;
          *((_DWORD *)v10 + 15) -= v17;
          *(_QWORD *)(CpuHostApertureRange + 16) = 0LL;
          v28 = v15[9];
          v29 = (unsigned int *)(CpuHostApertureRange + 32);
          v59 = v28;
          if ( *(_DWORD *)(CpuHostApertureRange + 32) != -1 )
          {
            g_DxgMmsBugcheckExportIndex = 1;
            WdLogSingleEntry5(0LL, 270LL, 44LL, v10, CpuHostApertureRange, 0LL);
            WdLogGlobalForLineNumber = 195;
          }
          v63 = *(_DWORD *)(v10[6] + 416);
          v30 = *(unsigned int *)(v10[5] + 4LL * *(unsigned int *)(CpuHostApertureRange + 28));
          v31 = 8 * v30;
          if ( !is_mul_ok(v30, 8uLL) )
            v31 = -1LL;
          v67 = (UINT64 *)operator new[](v31, 0x36346956u, 258LL);
          v32 = v67;
          if ( v67 )
          {
            v33 = *(_DWORD *)(CpuHostApertureRange + 24);
            v34 = &v29[v30];
            v35 = *(_DWORD *)(CpuHostApertureRange + 28);
            if ( v29 == v34 )
            {
LABEL_30:
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 270LL, 47LL, v10, CpuHostApertureRange, 0LL);
              WdLogGlobalForLineNumber = 195;
            }
            else
            {
              while ( 1 )
              {
                *v29 = v33;
                if ( v33 == v35 )
                  break;
                ++v29;
                v33 = *(_DWORD *)(v10[5] + 4LL * v33);
                if ( v29 == v34 )
                  goto LABEL_30;
              }
            }
            v36 = (__m128i *)v32;
            v37 = v59 / v63;
            v38 = v30 + v37;
            if ( v37 < v30 + v37 )
            {
              if ( v30 < 8 )
                goto LABEL_76;
              si128 = _mm_load_si128((const __m128i *)&_xmm);
              v40 = v37 + 4;
              do
              {
                *v36 = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)v37, (__m128i)v37), si128);
                v37 += 8LL;
                v41 = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)v40, (__m128i)v40), si128);
                v42 = v40 + 2;
                v43 = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)(v40 - 2), (__m128i)(v40 - 2)), si128);
                v40 += 8LL;
                v36[1] = v43;
                v36[2] = v41;
                v36[3] = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)v42, (__m128i)v42), si128);
                v36 += 4;
              }
              while ( v37 < v38 - (v30 & 7) );
              if ( v37 < v38 )
              {
LABEL_76:
                do
                {
                  v36->m128i_i64[0] = v37;
                  v36 = (__m128i *)((char *)v36 + 8);
                  ++v37;
                }
                while ( v37 < v38 );
              }
            }
            v44 = v65;
            *(_DWORD *)(&v61.PhysicalAdapterIndex + 1) = 0;
            if ( *v65 )
              v45 = *(void **)(*(_QWORD *)(*v65 + 376) + 48LL);
            else
              v45 = 0LL;
            v46 = v10[6];
            v61.hAllocation = v45;
            v61.NumberOfPages = v30;
            v61.pCpuHostAperturePages = (UINT32 *)(CpuHostApertureRange + 32);
            v61.pMemorySegmentPages = v32;
            if ( (*(_DWORD *)(v46 + 104) & 0x1000) != 0 )
              v61.SegmentId = 0;
            else
              v61.SegmentId = *(_WORD *)(v46 + 40) + 1;
            v61.PhysicalAdapterIndex = *(_WORD *)(v46 + 420);
            v47 = ADAPTER_RENDER::DdiMapCpuHostAperture(
                    *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v46 + 24) + 24LL) + 3128LL),
                    &v61);
            v48 = *v10;
            if ( *(__int64 **)(*v10 + 8) != v10 )
              __fastfail(3u);
            *(_QWORD *)CpuHostApertureRange = v48;
            *(_QWORD *)(CpuHostApertureRange + 8) = v10;
            *(_QWORD *)(v48 + 8) = CpuHostApertureRange;
            *v10 = CpuHostApertureRange;
            if ( v47 < 0 )
            {
              v49 = *v65;
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 270LL, 45LL, v10, v49, &v61);
              WdLogGlobalForLineNumber = 195;
            }
            if ( *(_QWORD *)(*(_QWORD *)(v10[6] + 24) + 41064LL) && (_DWORD)v30 )
            {
              v50 = v67;
              do
              {
                v51 = *v50;
                v52 = *(_QWORD *)(v10[6] + 24);
                SegmentId = v61.SegmentId;
                if ( *(_QWORD *)(v52 + 41064) )
                {
                  KeEnterCriticalRegion();
                  ExAcquirePushLockExclusiveEx(v52 + 41008, 0LL);
                  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
                  *(_QWORD *)(v52 + 41016) = KeGetCurrentThread();
                  v53 = *(unsigned int *)(v52 + 41072);
                  if ( (_DWORD)v53 == dword_1400814B4 )
                  {
                    *(_DWORD *)(v52 + 41072) = 0;
                    v53 = 0LL;
                  }
                  v54 = *(_QWORD *)(v52 + 41064) + 48 * v53;
                  *(_QWORD *)v54 = MEMORY[0xFFFFF78000000014];
                  *(_DWORD *)(v54 + 36) = SegmentId;
                  *(_DWORD *)(v54 + 32) = 2;
                  *(_QWORD *)(v54 + 8) = v51;
                  *(_QWORD *)(v54 + 16) = 1LL;
                  *(_QWORD *)(v54 + 24) = 0LL;
                  *(_DWORD *)(v54 + 40) = *(_DWORD *)(v52 + 41000);
                  ++*(_DWORD *)(v52 + 41072);
                  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
                  *(_QWORD *)(v52 + 41016) = 0LL;
                  ExReleasePushLockExclusiveEx(v52 + 41008, 0LL);
                  KeLeaveCriticalRegion();
                }
                ++v50;
                --v30;
              }
              while ( v30 );
              v44 = v65;
            }
            operator delete(v67);
            v21 = 0;
            v13 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
                    (VIDMM_CPU_HOST_APERTURE *)v10,
                    v60[2],
                    (const struct VIDMM_CPU_HOST_APERTURE_RANGE *)CpuHostApertureRange,
                    v44[9],
                    v44[2]);
            if ( v13 )
            {
              VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
              v57 = (*((__int64 (__fastcall **)(struct _MDL *, _QWORD, __int64))VirtualMemoryInterface + 5))(
                      v13,
                      0LL,
                      2LL);
              if ( v57 )
              {
                v12 = v57;
                *((_QWORD *)a3 + 1) = CpuHostApertureRange;
                *(_QWORD *)a3 = v13;
                return (void *)v12;
              }
              WdLogSingleEntry0(3LL);
              WdLogGlobalForLineNumber = 8166;
            }
            else
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 8149;
              DxgkLogInternalTriageEvent(v55, 0x40000LL);
              v21 = -1073741801;
            }
          }
          else
          {
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 699;
            v21 = -1073741801;
            WdLogSingleEntry1(3LL, v14);
            WdLogGlobalForLineNumber = 8136;
          }
          if ( *(_DWORD *)(CpuHostApertureRange + 32) != -1 )
            VIDMM_CPU_HOST_APERTURE::UnmapRange(
              (VIDMM_CPU_HOST_APERTURE *)v10,
              (struct VIDMM_CPU_HOST_APERTURE_RANGE *)CpuHostApertureRange);
          VIDMM_CPU_HOST_APERTURE::ReleaseRange(
            (VIDMM_CPU_HOST_APERTURE *)v10,
            (struct VIDMM_CPU_HOST_APERTURE_RANGE *)CpuHostApertureRange);
          if ( v13 )
            ExFreePoolWithTag(v13, 0);
LABEL_64:
          *((_QWORD *)a3 + 1) = 0LL;
          *(_QWORD *)a3 = 0LL;
          if ( v21 < 0 )
          {
            WdLogSingleEntry0(3LL);
            result = 0LL;
            WdLogGlobalForLineNumber = 8272;
            return result;
          }
          return (void *)v12;
        }
LABEL_13:
        v21 = -1073741801;
        WdLogSingleEntry1(3LL, v14);
        WdLogGlobalForLineNumber = 8125;
        goto LABEL_64;
      }
      if ( (v9 & 4) != 0 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)a2 + 3) + 444LL) & 8) != 0 )
          return (void *)(*(_QWORD *)(v5 + 72) + *(_QWORD *)(v62 + 56));
        else
          return (void *)MmMapIoSpaceEx(*(_QWORD *)(v5 + 72) + *(_QWORD *)(v62 + 56), *(_QWORD *)(v5 + 16), 1028LL);
      }
      v58 = *((_QWORD *)this + 2);
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 73LL, v4, v58, v8);
      WdLogGlobalForLineNumber = 195;
    }
    return *(void **)(**((_QWORD **)v4 + 3) + 16LL);
  }
  return result;
}
