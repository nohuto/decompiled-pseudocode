/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x14041F9CC
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x140039658 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     Feature_4078915896__private_IsEnabledDeviceUsageNoInline @ 0x14006B7A8 (Feature_4078915896__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x14018A6B4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1401991B4 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1403530D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x14038AAAC (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DXGDEVICE::OpenCddPrimaryHandle(DXGDEVICE *this, unsigned int a2, char a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // r13d
  char v6; // r12
  ADAPTER_DISPLAY *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned int CddPrimaryShareResourceHandle; // eax
  unsigned int v13; // r15d
  __int64 v14; // r12
  unsigned int v15; // eax
  __int64 v16; // r14
  char *v17; // r13
  int v18; // r14d
  _BYTE *Pool2; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  __int128 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+68h] [rbp-98h]
  _BYTE v29[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v30[24]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v31[10]; // [rsp+A0h] [rbp-60h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v32; // [rsp+F0h] [rbp-10h] BYREF
  PVOID P; // [rsp+160h] [rbp+60h]
  _BYTE v34[320]; // [rsp+168h] [rbp+68h] BYREF
  int v35; // [rsp+2A8h] [rbp+1A8h]

  v4 = 0;
  v5 = a4;
  v6 = a3;
  v8 = *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 237) + 3120LL);
  v9 = a2;
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9857;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 9857LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9858;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      9858LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9859;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayCore->IsCoreResourceSharedOwner()",
      9859LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *((_QWORD *)this + v9 + 83);
  v11 = v9;
  if ( v10 && *((_DWORD *)this + 116) == 1 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGFASTMUTEX *const)(v10 + 80), 0);
    if ( (unsigned int)Feature_4078915896__private_IsEnabledDeviceUsageNoInline() )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
    if ( (*(_DWORD *)(*((_QWORD *)this + v9 + 83) + 4LL) & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9873;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_pCddPrimaryResource[nOutput]->m_SharedResource",
        9873LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + v9 + 83) + 24LL) + 16LL) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9874;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_pCddPrimaryResource[nOutput]->m_pAllocationList->m_hAllocationHandle",
        9874LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v9 + 83) + 24LL) + 48LL) + 4LL) & 0x10) != 0 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
  }
  if ( !*((_QWORD *)this + v9 + 83) )
  {
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v8, v9);
    v13 = CddPrimaryShareResourceHandle;
    if ( CddPrimaryShareResourceHandle )
    {
      v27 = 0LL;
      DWORD1(v27) = CddPrimaryShareResourceHandle;
      v28 = 0LL;
      if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(
                  (__int64)this,
                  &v27,
                  CddPrimaryShareResourceHandle) >= 0 )
      {
        v14 = DWORD1(v28);
        v15 = DWORD1(v28) + DWORD2(v28);
        if ( (unsigned int)(DWORD1(v28) + DWORD2(v28)) >= DWORD1(v28) )
        {
          v16 = v15;
          v17 = (char *)operator new[](v15, 0x4B677844u, 256LL);
          if ( v17 )
          {
            memset(v31, 0, 0x48uLL);
            v18 = HIDWORD(v28);
            P = 0LL;
            v35 = 0;
            if ( HIDWORD(v28) <= 4 )
            {
              Pool2 = v34;
              P = v34;
              if ( HIDWORD(v28) )
              {
                memset(v34, 0, 80LL * HIDWORD(v28));
                Pool2 = P;
              }
            }
            else
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v28) < 0x50 )
                goto LABEL_30;
              Pool2 = (_BYTE *)ExAllocatePool2(256LL, 80LL * HIDWORD(v28), 1265072196LL);
              P = Pool2;
            }
            v35 = v18;
            if ( !Pool2 )
            {
LABEL_30:
              WdLogSingleEntry0(6LL);
              WdLogGlobalForLineNumber = 9915;
              DxgkLogInternalTriageEvent(
                0LL,
                262145LL,
                0xFFFFFFFFLL,
                L"Failed to allocate memory for D3DDDI_OPENALLOCATIONINFO2",
                9915LL,
                0LL,
                0LL,
                0LL,
                0LL);
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
              if ( P != v34 )
              {
                if ( P )
                  ExFreePoolWithTag(P, 0);
              }
              return 0LL;
            }
            HIDWORD(v31[0]) = v13;
            LODWORD(v31[1]) = v18;
            v31[2] = Pool2;
            if ( DWORD2(v28) )
              v31[5] = &v17[v14];
            else
              v31[5] = 0LL;
            LODWORD(v31[6]) = DWORD2(v28);
            v31[7] = v17;
            LODWORD(v31[8]) = v14;
            if ( (_DWORD)v28 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 9937;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"QueryResInfo.PrivateRuntimeDataSize == 0",
                9937LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v13 = HIDWORD(v31[0]);
            }
            if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                        this,
                        (__int64)v31,
                        v13,
                        0LL,
                        0,
                        0LL,
                        0,
                        0LL,
                        0LL,
                        0LL) < 0 )
            {
              WdLogSingleEntry2(4LL, this, v11);
              WdLogGlobalForLineNumber = 9952;
            }
            else
            {
              *((_BYTE *)this + v11 + 648) = 1;
              if ( !*((_QWORD *)this + v11 + 83) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 9948;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146LL,
                  0xFFFFFFFFLL,
                  L"m_pCddPrimaryResource[nOutput]",
                  9948LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
            if ( P != v34 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v35 = 0;
          }
          else
          {
            WdLogSingleEntry2(6LL, this, v16);
            WdLogGlobalForLineNumber = 9959;
            DxgkLogInternalTriageEvent(
              0LL,
              262145LL,
              0xFFFFFFFFLL,
              L"Device 0x%I64x failed to allocate PrivateDriverData buffer of 0x%I64d bytes",
              (__int64)this,
              v16,
              0LL,
              0LL,
              0LL);
          }
          v5 = a4;
        }
        v6 = a3;
      }
    }
  }
  v21 = *((_QWORD *)this + v11 + 83);
  if ( !v21 )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)(v21 + 80), 0);
  if ( (unsigned int)Feature_4078915896__private_IsEnabledDeviceUsageNoInline() )
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  if ( (*(_DWORD *)(*((_QWORD *)this + v11 + 83) + 4LL) & 1) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9974;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_pCddPrimaryResource[nOutput]->m_SharedResource",
      9974LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + v11 + 83) + 24LL) + 16LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9975;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_pCddPrimaryResource[nOutput]->m_pAllocationList->m_hAllocationHandle",
      9975LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v6
    && (memset(&v32, 0, sizeof(v32)),
        v22 = *((_QWORD *)this + 2),
        v32.Protection.Value = 1LL,
        v32.MinimumAddress = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 2952LL),
        v23 = *((_QWORD *)this + v11 + 83),
        v32.MaximumAddress = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 2960LL),
        v24 = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
                *(VIDMM_EXPORT **)(v22 + 760),
                *(struct VIDMM_GLOBAL **)(v22 + 768),
                0LL,
                *(struct VIDMM_MULTI_ALLOC **)(*(_QWORD *)(v23 + 24) + 24LL),
                &v32,
                0,
                v5),
        v24 < 0) )
  {
    WdLogSingleEntry1(3LL, v24);
    WdLogGlobalForLineNumber = 9997;
    DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
  }
  else
  {
    v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + v11 + 83) + 24LL) + 16LL);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v30);
  return v4;
}
