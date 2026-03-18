/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x14032C7C0
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x14032BC18 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING_QUEUE@@PEAKPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x14004F4FC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_PAGING.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400560B8 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RemoveDirectFlipResourceFromRequestedPinnedList@DXGDEVICE@@AEAAXIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1401BB754 (-RemoveDirectFlipResourceFromRequestedPinnedList@DXGDEVICE@@AEAAXIIPEBVDXGRESOURCEREFERENCE@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402F57E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1403B0794 (-IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1403BE774 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 *     ?InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x140411008 (-InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinDirectFlipResources(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGRESOURCE **a3,
        char a4)
{
  unsigned int v4; // r13d
  ADAPTER_RENDER *v6; // rcx
  __int64 v9; // r14
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdi
  unsigned int v14; // ebx
  unsigned int v16; // r15d
  __int64 v17; // r14
  unsigned int v18; // r9d
  struct DXGRESOURCE **v19; // rbx
  int v20; // eax
  struct DXGRESOURCE *v21; // r13
  const struct DXGALLOCATION *v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // ecx
  const struct DXGRESOURCEREFERENCE *v25; // r15
  __int64 v26; // rbx
  unsigned int v27; // r14d
  __int64 i; // r14
  unsigned int v29; // [rsp+20h] [rbp-69h]
  enum _D3DDDIFORMAT v30; // [rsp+28h] [rbp-61h]
  unsigned __int64 *v31; // [rsp+30h] [rbp-59h]
  int v32; // [rsp+50h] [rbp-39h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v34[16]; // [rsp+68h] [rbp-21h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v35; // [rsp+78h] [rbp-11h] BYREF
  unsigned int v36; // [rsp+F0h] [rbp+67h]
  int IsEnabledDeviceUsageNoInline; // [rsp+100h] [rbp+77h]

  v4 = a2;
  v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v9 = *(_QWORD *)(*((_QWORD *)*a3 + 7) + 136LL) - 48LL;
  v10 = *(_DWORD *)(v9 + 4);
  memset(&v35, 0, sizeof(v35));
  v11 = (v10 >> 6) & 0xF;
  v36 = v11;
  v35.hAllocation = *(HANDLE *)(v9 + 16);
  v12 = ADAPTER_RENDER::DdiDescribeAllocation(v6, &v35, (__int64)a3);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( v11 < *((_DWORD *)this + 476) )
    {
      if ( !a4 || *((_DWORD *)this + 477) )
      {
        v16 = 0;
        v17 = 0LL;
        IsEnabledDeviceUsageNoInline = Feature_4078915896__private_IsEnabledDeviceUsageNoInline();
        if ( v4 )
        {
          v19 = a3;
          while ( 2 )
          {
            v20 = DXGDEVICE::ValidateDirectFlipResource(
                    *((DXGDEVICE **)*v19 + 7),
                    *v19,
                    v36,
                    v18,
                    v29,
                    v30,
                    *(_DWORD *)(*((_QWORD *)*v19 + 7) + 132LL));
            LODWORD(v13) = v20;
            if ( v20 < 0 )
            {
              WdLogSingleEntry2(3LL, a3[v17], v20);
              WdLogGlobalForLineNumber = 6991;
              return (unsigned int)v13;
            }
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&Interval, (struct DXGRESOURCE *)((char *)*v19 + 80), 0);
            if ( IsEnabledDeviceUsageNoInline )
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&Interval);
            v21 = *v19;
            v22 = (const struct DXGALLOCATION *)*((_QWORD *)*v19 + 3);
            while ( v22 )
            {
              if ( DXGDEVICE::IsDirectFlipAllocationRequestedPinned(this, v22) )
              {
                v14 = -1073741811;
                WdLogSingleEntry2(3LL, v21, -1073741811LL);
                WdLogGlobalForLineNumber = 7011;
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&Interval);
                return v14;
              }
              v22 = *(const struct DXGALLOCATION **)(v23 + 64);
              ++v16;
            }
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&Interval);
            v4 = a2;
            v17 = (unsigned int)(v17 + 1);
            ++v19;
            if ( (unsigned int)v17 < a2 )
              continue;
            break;
          }
          v11 = v36;
        }
        v24 = *((_DWORD *)this + v11 + 378);
        if ( v24 + v16 <= 0x300 )
        {
          if ( DXGDEVICE::InsertDirectFlipResourceToRequestedPinnedList(
                 this,
                 v11,
                 v4,
                 (const struct DXGRESOURCEREFERENCE *)a3) )
          {
            v32 = 0;
            if ( v4 )
            {
              v25 = (const struct DXGRESOURCEREFERENCE *)a3;
              while ( (int)v13 >= 0 )
              {
                DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, (struct DXGFASTMUTEX *const)(*(_QWORD *)v25 + 80LL), 0);
                if ( IsEnabledDeviceUsageNoInline )
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
                v26 = *(_QWORD *)(*(_QWORD *)v25 + 24LL);
                if ( v26 )
                {
                  while ( (int)v13 >= 0 )
                  {
                    v27 = 0;
                    while ( 1 )
                    {
                      LODWORD(v13) = VIDMM_EXPORT::VidMmPinAllocation(
                                       *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                                       *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                                       *(struct VIDMM_MULTI_ALLOC **)(v26 + 24),
                                       0LL,
                                       0LL,
                                       0LL,
                                       0LL);
                      if ( (int)v13 >= 0 )
                        break;
                      Interval.QuadPart = -150LL;
                      KeDelayExecutionThread(0, 0, &Interval);
                      ++v27;
                      LODWORD(v13) = -1071775488;
                      if ( v27 >= 4 )
                        goto LABEL_38;
                    }
                    v26 = *(_QWORD *)(v26 + 64);
LABEL_38:
                    if ( !v26 )
                    {
                      if ( (int)v13 >= 0 )
                        goto LABEL_44;
                      break;
                    }
                  }
                  for ( i = *(_QWORD *)(*(_QWORD *)v25 + 24LL); i && i != v26; i = *(_QWORD *)(i + 64) )
                    VIDMM_EXPORT::VidMmUnpinAllocation(
                      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                      *(struct VIDMM_MULTI_ALLOC **)(i + 24));
                }
LABEL_44:
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v34);
                v25 = (const struct DXGRESOURCEREFERENCE *)((char *)v25 + 8);
                if ( ++v32 >= v4 )
                {
                  v11 = v36;
                  goto LABEL_46;
                }
              }
              v11 = v36;
            }
            else
            {
LABEL_46:
              if ( (int)v13 >= 0 )
                return (unsigned int)v13;
            }
            DXGDEVICE::RemoveDirectFlipResourceFromRequestedPinnedList(
              this,
              v11,
              v4,
              (const struct DXGRESOURCEREFERENCE *)a3);
            return (unsigned int)v13;
          }
          v14 = -1073741670;
          WdLogSingleEntry1(3LL, -1073741670LL);
          WdLogGlobalForLineNumber = 7041;
        }
        else
        {
          v14 = -1073741811;
          WdLogSingleEntry4(3LL, v24, v16, 768LL, -1073741811LL);
          WdLogGlobalForLineNumber = 7026;
        }
      }
      else
      {
        v14 = -1073741790;
        WdLogSingleEntry1(3LL, -1073741790LL);
        WdLogGlobalForLineNumber = 6973;
      }
    }
    else
    {
      v14 = -1073741811;
      WdLogSingleEntry2(3LL, *a3, -1073741811LL);
      WdLogGlobalForLineNumber = 6963;
    }
    return v14;
  }
  WdLogSingleEntry4(2LL, v12, this, *(_QWORD *)(v9 + 16), v9);
  v31 = *(unsigned __int64 **)(v9 + 16);
  WdLogGlobalForLineNumber = 6952;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
    v13,
    (__int64)this,
    (__int64)v31,
    v9,
    0LL);
  return (unsigned int)v13;
}
