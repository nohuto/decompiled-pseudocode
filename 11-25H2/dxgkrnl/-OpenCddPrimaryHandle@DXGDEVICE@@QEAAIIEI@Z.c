/*
 * XREFs of ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x14040674C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x14003B098 (-VidMmMapGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDM.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1401883A4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x140196D28 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x14035DD88 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x14035F14C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DXGDEVICE::OpenCddPrimaryHandle(DXGDEVICE *this, unsigned int a2, char a3, unsigned int a4)
{
  unsigned int v4; // r12d
  char v5; // r15
  ADAPTER_DISPLAY *v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int CddPrimaryShareResourceHandle; // eax
  unsigned int v12; // r14d
  __int64 v13; // r9
  __int64 v14; // r15
  int v15; // r13d
  unsigned int v16; // eax
  __int64 v17; // rsi
  char *v18; // r12
  __int64 v19; // r9
  int v20; // esi
  _BYTE *Pool2; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  __int128 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+68h] [rbp-98h]
  _QWORD v31[10]; // [rsp+80h] [rbp-80h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v32; // [rsp+D0h] [rbp-30h] BYREF
  PVOID P; // [rsp+140h] [rbp+40h]
  _BYTE v34[320]; // [rsp+148h] [rbp+48h] BYREF
  int v35; // [rsp+288h] [rbp+188h]

  v4 = a4;
  v5 = a3;
  v7 = *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 235) + 3120LL);
  v8 = a2;
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9818;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsDeviceLockExclusiveOwner()", 9818LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9819;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      9819LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9820;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayCore->IsCoreResourceSharedOwner()",
      9820LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *((_QWORD *)this + v8 + 83);
  v10 = v8;
  if ( v9 && *((_DWORD *)this + 116) == 1 )
  {
    if ( (*(_DWORD *)(v9 + 4) & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9829;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"m_pCddPrimaryResource[nOutput]->m_SharedResource",
        9829LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + v8 + 83) + 24LL) + 16LL) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9830;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"m_pCddPrimaryResource[nOutput]->m_pAllocationList->m_hAllocationHandle",
        9830LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v8 + 83) + 24LL) + 48LL) + 4LL) & 0x10) != 0 )
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
  }
  if ( !*((_QWORD *)this + v8 + 83) )
  {
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v7, v8);
    v12 = CddPrimaryShareResourceHandle;
    if ( CddPrimaryShareResourceHandle )
    {
      v29 = 0LL;
      DWORD1(v29) = CddPrimaryShareResourceHandle;
      v30 = 0LL;
      if ( (int)DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(
                  (__int64)this,
                  &v29,
                  CddPrimaryShareResourceHandle) >= 0 )
      {
        v14 = DWORD1(v30);
        v15 = DWORD2(v30);
        v16 = DWORD1(v30) + DWORD2(v30);
        if ( (unsigned int)(DWORD1(v30) + DWORD2(v30)) >= DWORD1(v30) )
        {
          v17 = v16;
          v18 = (char *)operator new[](v16, 0x4B677844u, 256LL, v13);
          if ( v18 )
          {
            memset(v31, 0, 0x48uLL);
            P = 0LL;
            v35 = 0;
            v20 = HIDWORD(v30);
            if ( HIDWORD(v30) <= 4 )
            {
              Pool2 = v34;
              P = v34;
              if ( HIDWORD(v30) )
              {
                memset(v34, 0, 80LL * HIDWORD(v30));
                Pool2 = P;
              }
            }
            else
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v30) < 0x50 )
                goto LABEL_27;
              Pool2 = (_BYTE *)ExAllocatePool2(256LL, 80LL * HIDWORD(v30), 1265072196LL, v19);
              P = Pool2;
            }
            v35 = v20;
            if ( !Pool2 )
            {
LABEL_27:
              WdLogSingleEntry0(6LL);
              WdLogGlobalForLineNumber = 9871;
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
                0xFFFFFFFFLL,
                L"Failed to allocate memory for D3DDDI_OPENALLOCATIONINFO2",
                9871LL,
                0LL,
                0LL,
                0LL,
                0LL);
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
              if ( P != v34 )
              {
                if ( P )
                  ExFreePoolWithTag(P, 0);
              }
              return 0LL;
            }
            HIDWORD(v31[0]) = v12;
            LODWORD(v31[1]) = v20;
            v31[2] = Pool2;
            if ( v15 )
              v31[5] = &v18[v14];
            else
              v31[5] = 0LL;
            LODWORD(v31[6]) = v15;
            v31[7] = v18;
            LODWORD(v31[8]) = v14;
            if ( (_DWORD)v30 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 9893;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"QueryResInfo.PrivateRuntimeDataSize == 0",
                9893LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v12 = HIDWORD(v31[0]);
            }
            if ( (int)DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCE>(
                        this,
                        (__int64)v31,
                        v12,
                        0LL,
                        0,
                        0LL,
                        0,
                        0LL,
                        0LL,
                        0LL) < 0 )
            {
              WdLogSingleEntry2(4LL, this, v10);
              WdLogGlobalForLineNumber = 9908;
            }
            else
            {
              *((_BYTE *)this + v10 + 648) = 1;
              if ( !*((_QWORD *)this + v10 + 83) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 9904;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  0xFFFFFFFFLL,
                  L"m_pCddPrimaryResource[nOutput]",
                  9904LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
            if ( P != v34 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v35 = 0;
          }
          else
          {
            WdLogSingleEntry2(6LL, this, v17);
            WdLogGlobalForLineNumber = 9915;
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              0xFFFFFFFFLL,
              L"Device 0x%I64x failed to allocate PrivateDriverData buffer of 0x%I64d bytes",
              (__int64)this,
              v17,
              0LL,
              0LL,
              0LL);
          }
          v4 = a4;
        }
        v5 = a3;
      }
    }
  }
  v23 = *((_QWORD *)this + v10 + 83);
  if ( !v23 )
    return 0LL;
  if ( (*(_DWORD *)(v23 + 4) & 1) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9924;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_pCddPrimaryResource[nOutput]->m_SharedResource",
      9924LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + v10 + 83) + 24LL) + 16LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9925;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_pCddPrimaryResource[nOutput]->m_pAllocationList->m_hAllocationHandle",
      9925LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v5 )
  {
    memset(&v32, 0, sizeof(v32));
    v24 = *((_QWORD *)this + 2);
    v32.Protection.Value = 1LL;
    v32.MinimumAddress = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 2952LL);
    v25 = *((_QWORD *)this + v10 + 83);
    v32.MaximumAddress = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 2960LL);
    v26 = VIDMM_EXPORT::VidMmMapGpuVirtualAddress(
            *(VIDMM_EXPORT **)(v24 + 760),
            *(struct VIDMM_GLOBAL **)(v24 + 768),
            0LL,
            *(struct VIDMM_MULTI_ALLOC **)(*(_QWORD *)(v25 + 24) + 24LL),
            &v32,
            0,
            v4);
    if ( v26 < 0 )
    {
      WdLogSingleEntry1(3LL, v26);
      WdLogGlobalForLineNumber = 9947;
      DXGDEVICE::CloseInternalCddPrimaryHandle(this, 0LL);
      return 0LL;
    }
  }
  return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + v10 + 83) + 24LL) + 16LL);
}
