/*
 * XREFs of DxgkSetIndependentFlipMode @ 0x14039E10C
 * Callers:
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x14004852C (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1400485FC (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 *     ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x14009DA98 (-UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x140050384 (-GetPlaneIndex@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ.c)
 *     ?VidSchExitIndependentFlip@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@IPEBU_LUID@@_KPEBII_NPEAHPEA_K@Z @ 0x140050C98 (-VidSchExitIndependentFlip@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@IPEBU_LUID@@_KPEBII_NPEAHPEA_.c)
 *     ?GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1400510F4 (-GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkSetIndependentFlipMode(
        HANDLE Handle,
        struct _LUID *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7,
        int *a8,
        unsigned __int64 *a9)
{
  int v9; // r13d
  NTSTATUS v11; // eax
  unsigned int v12; // esi
  __int64 v13; // r15
  int v14; // eax
  int v15; // r14d
  unsigned int v16; // edi
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int VidPnSourceId; // ebx
  unsigned int PlaneIndex; // eax
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rdi
  unsigned int v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+54h] [rbp-ACh]
  unsigned int *v32; // [rsp+60h] [rbp-A0h]
  int v33; // [rsp+68h] [rbp-98h]
  unsigned int *v34; // [rsp+70h] [rbp-90h]
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v36; // [rsp+80h] [rbp-80h]
  int *v37; // [rsp+88h] [rbp-78h]
  unsigned __int64 v38; // [rsp+90h] [rbp-70h]
  struct _LUID *v39; // [rsp+98h] [rbp-68h]
  PVOID v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-50h]
  char v43; // [rsp+B8h] [rbp-48h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v45[144]; // [rsp+D0h] [rbp-30h] BYREF

  v9 = 0;
  v41 = -1;
  v34 = a7;
  *a8 = 0;
  v33 = a4;
  v38 = a3;
  v39 = a2;
  v37 = a8;
  v36 = a9;
  v42 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2094;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a9, (__int64)&EventProfilerEnter, a3, 2094);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v41, 2094);
  HandleInformation = 0LL;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 0x20000u, g_pDxgkSharedAllocationObjectType, 0, &Object, &HandleInformation);
  v12 = v11;
  v40 = Object;
  if ( v11 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle, -1073741788LL);
    WdLogGlobalForLineNumber = 12539;
  }
  else if ( v11 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle, v11);
    WdLogGlobalForLineNumber = 12546;
  }
  else
  {
    v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 80LL) + 16LL);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, (struct DXGADAPTER *const)v13, 0LL);
    if ( *(_QWORD *)(v13 + 3120) )
    {
      v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v45, 0LL);
      v12 = v14;
      if ( v14 < 0 )
      {
        WdLogSingleEntry2(3LL, v13, v14);
        WdLogGlobalForLineNumber = 12570;
      }
      else
      {
        v15 = 0;
        v16 = a6;
        v30 = a6;
        v32 = v34;
        v31 = 0LL;
        if ( a6 )
        {
          do
          {
            if ( (v16 & 1) != 0 )
              break;
            ++v15;
            v16 >>= 1;
          }
          while ( v16 );
          v30 = v16;
          LODWORD(v31) = v15;
        }
        while ( v16 )
        {
          v17 = *(_DWORD *)(*(_QWORD *)(v13 + 3120) + 96LL);
          if ( (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v30) >= v17 )
          {
            v12 = -1073741811;
            WdLogSingleEntry1(2LL, -1073741811LL);
            WdLogGlobalForLineNumber = 12583;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Invalid vidPnSourceMask. Returning 0x%I64x",
              -1073741811LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_22;
          }
          v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v40 + 2) + 80LL) + 16LL) + 2944LL);
          if ( (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v30) >= v18 )
          {
            v12 = -1073741811;
            VidPnSourceId = DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v30);
            PlaneIndex = DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v30);
            WdLogSingleEntry4(2LL, PlaneIndex, VidPnSourceId, a6, -1073741811LL);
            WdLogGlobalForLineNumber = 12594;
            v27 = (unsigned int)DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v30);
            v28 = DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetPlaneIndex((DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v30);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Invalid plane index 0x%I64x specified for VidPnSource 0x%I64x. Source mask is 0x%I64x. Returning 0x%I64x",
              v28,
              v27,
              a6,
              -1073741811LL,
              0LL);
            goto LABEL_22;
          }
          v16 >>= 1;
          v30 = v16;
          if ( v16 )
          {
            do
            {
              if ( (v16 & 1) != 0 )
                break;
              ++v15;
              v16 >>= 1;
            }
            while ( v16 );
            v30 = v16;
            LODWORD(v31) = v15;
          }
          HIDWORD(v31) = ++v9;
        }
        v19 = (((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) & 0x33333333)
            + ((((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) >> 2) & 0x33333333);
        v20 = (unsigned __int16)((unsigned __int8)((v19 & 0xF) + ((v19 >> 4) & 0xF))
                               + (unsigned __int8)((unsigned __int16)((v19 & 0xF0F) + ((v19 >> 4) & 0xF0F)) >> 8))
            + (((((v19 & 0xF0F0F0F) + ((v19 >> 4) & 0xF0F0F0F)) & 0xFF00FF)
              + ((((v19 & 0xF0F0F0F) + ((v19 >> 4) & 0xF0F0F0F)) >> 8) & 0xFF00FF)) >> 16);
        if ( (unsigned int)v20 <= 1 || *(int *)(v13 + 3004) >= 2400 )
        {
          v21 = *(_QWORD *)(v13 + 3128);
          if ( v33 )
            (*(void (__fastcall **)(_QWORD, _QWORD, struct _LUID *, unsigned __int64, unsigned int *, unsigned int, int *, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(v21 + 736) + 8LL) + 400LL))(
              *(_QWORD *)(v21 + 744),
              a6,
              v39,
              v38,
              v34,
              a5,
              v37,
              v36);
          else
            VIDSCH_EXPORT::VidSchExitIndependentFlip(
              *(VIDSCH_EXPORT **)(v21 + 736),
              *(struct _VIDSCH_GLOBAL **)(v21 + 744),
              a6,
              v39,
              v38,
              v34,
              a5,
              1,
              v37,
              v36);
        }
        else
        {
          v12 = -1073741811;
          v29 = (unsigned int)v20;
          WdLogSingleEntry3(2LL, v20, a6, -1073741811LL);
          WdLogGlobalForLineNumber = 12606;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Attempting IFlip on %xI64x sources for a non-WDDM 2.4 driver. Source mask is %xI64x. Returning 0x%I64x",
            v29,
            a6,
            -1073741811LL,
            0LL,
            0LL);
        }
      }
    }
    else
    {
      v12 = -1073741823;
    }
LABEL_22:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
  }
  if ( v40 )
    ObfDereferenceObject(v40);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit, v23, v41);
  return v12;
}
