/*
 * XREFs of ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1402DFDE0
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1402DF238 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140056908 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?RemoveDirectFlipResourceFromRequestedPinnedList@DXGDEVICE@@AEAAXIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1401B8FCC (-RemoveDirectFlipResourceFromRequestedPinnedList@DXGDEVICE@@AEAAXIIPEBVDXGRESOURCEREFERENCE@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1402E027C (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 *     ?IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1402E0C5C (-IsDirectFlipAllocationRequestedPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1402E0CB0 (-InsertDirectFlipResourceToRequestedPinnedList@DXGDEVICE@@AEAAEIIPEBVDXGRESOURCEREFERENCE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinDirectFlipResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        char a4)
{
  ADAPTER_RENDER *v6; // rcx
  __int64 v9; // rbp
  unsigned int v10; // r12d
  __int64 v11; // r12
  int v12; // eax
  unsigned int v13; // r9d
  __int64 v14; // rdi
  unsigned int v15; // ebp
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // r15
  const struct DXGALLOCATION *v19; // rdx
  __int64 v20; // rdx
  const struct DXGRESOURCEREFERENCE *v21; // r15
  __int64 v22; // rbx
  unsigned int v23; // ebp
  unsigned int v25; // ebx
  __int64 i; // rbp
  unsigned int v27; // [rsp+20h] [rbp-98h]
  enum _D3DDDIFORMAT v28; // [rsp+28h] [rbp-90h]
  __int64 v29; // [rsp+30h] [rbp-88h]
  struct _DXGKARG_DESCRIBEALLOCATION v30; // [rsp+50h] [rbp-68h] BYREF
  int v31; // [rsp+C0h] [rbp+8h]
  union _LARGE_INTEGER Interval; // [rsp+D0h] [rbp+18h] BYREF

  v6 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 136LL) - 48LL;
  v10 = *(_DWORD *)(v9 + 4);
  memset(&v30, 0, sizeof(v30));
  v11 = (v10 >> 6) & 0xF;
  v30.hAllocation = *(HANDLE *)(v9 + 16);
  v12 = ADAPTER_RENDER::DdiDescribeAllocation(v6, &v30, (__int64)a3);
  v14 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry4(2LL, v12, this, *(_QWORD *)(v9 + 16), v9);
    v29 = *(_QWORD *)(v9 + 16);
    WdLogGlobalForLineNumber = 6738;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
      v14,
      (__int64)this,
      v29,
      v9,
      0LL);
    return (unsigned int)v14;
  }
  if ( (unsigned int)v11 >= *((_DWORD *)this + 472) )
  {
    v25 = -1073741811;
    WdLogSingleEntry2(3LL, *(_QWORD *)a3, -1073741811LL);
    WdLogGlobalForLineNumber = 6749;
  }
  else
  {
    if ( a4 && !*((_DWORD *)this + 473) )
    {
      v25 = -1073741790;
      WdLogSingleEntry1(3LL, -1073741790LL);
      WdLogGlobalForLineNumber = 6759;
      return v25;
    }
    v15 = 0;
    v16 = 0LL;
LABEL_5:
    if ( (unsigned int)v16 < a2 )
    {
      v17 = DXGDEVICE::ValidateDirectFlipResource(
              (DXGDEVICE *)*(unsigned int *)(*(_QWORD *)(*((_QWORD *)a3 + v16) + 56LL) + 132LL),
              *((struct DXGRESOURCE **)a3 + v16),
              v11,
              v13,
              v27,
              v28,
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + v16) + 56LL) + 132LL));
      LODWORD(v14) = v17;
      if ( v17 >= 0 )
      {
        v18 = *((_QWORD *)a3 + v16);
        v19 = *(const struct DXGALLOCATION **)(v18 + 24);
        while ( 1 )
        {
          if ( !v19 )
          {
            v16 = (unsigned int)(v16 + 1);
            goto LABEL_5;
          }
          if ( DXGDEVICE::IsDirectFlipAllocationRequestedPinned(this, v19) )
            break;
          v19 = *(const struct DXGALLOCATION **)(v20 + 64);
          ++v15;
        }
        v25 = -1073741811;
        WdLogSingleEntry2(3LL, v18, -1073741811LL);
        WdLogGlobalForLineNumber = 6789;
        return v25;
      }
      WdLogSingleEntry2(3LL, *((_QWORD *)a3 + v16), v17);
      WdLogGlobalForLineNumber = 6776;
      return (unsigned int)v14;
    }
    if ( *((_DWORD *)this + (unsigned int)v11 + 374) + v15 > 0x300 )
    {
      v25 = -1073741811;
      WdLogSingleEntry4(3LL, *((unsigned int *)this + v11 + 374), v15, 768LL, -1073741811LL);
      WdLogGlobalForLineNumber = 6804;
    }
    else
    {
      if ( DXGDEVICE::InsertDirectFlipResourceToRequestedPinnedList(this, v11, a2, a3) )
      {
        v31 = 0;
        if ( a2 )
        {
          v21 = a3;
          while ( (int)v14 >= 0 )
          {
            v22 = *(_QWORD *)(*(_QWORD *)v21 + 24LL);
            if ( v22 )
            {
              while ( (int)v14 >= 0 )
              {
                v23 = 0;
                while ( 1 )
                {
                  LODWORD(v14) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 200LL))(
                                   *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                                   *(_QWORD *)(v22 + 24),
                                   0LL,
                                   0LL,
                                   0LL,
                                   0LL);
                  if ( (int)v14 >= 0 )
                    break;
                  Interval.QuadPart = -150LL;
                  KeDelayExecutionThread(0, 0, &Interval);
                  ++v23;
                  LODWORD(v14) = -1071775488;
                  if ( v23 >= 4 )
                    goto LABEL_22;
                }
                v22 = *(_QWORD *)(v22 + 64);
LABEL_22:
                if ( !v22 )
                {
                  if ( (int)v14 >= 0 )
                    goto LABEL_24;
                  break;
                }
              }
              for ( i = *(_QWORD *)(*(_QWORD *)v21 + 24LL); i && i != v22; i = *(_QWORD *)(i + 64) )
                VIDMM_EXPORT::VidMmUnpinAllocation(
                  *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                  *(struct VIDMM_MULTI_ALLOC **)(i + 24));
            }
LABEL_24:
            v21 = (const struct DXGRESOURCEREFERENCE *)((char *)v21 + 8);
            if ( ++v31 >= a2 )
              goto LABEL_25;
          }
        }
        else
        {
LABEL_25:
          if ( (int)v14 >= 0 )
            return (unsigned int)v14;
        }
        DXGDEVICE::RemoveDirectFlipResourceFromRequestedPinnedList(this, v11, a2, a3);
        return (unsigned int)v14;
      }
      v25 = -1073741670;
      WdLogSingleEntry1(3LL, -1073741670LL);
      WdLogGlobalForLineNumber = 6819;
    }
  }
  return v25;
}
