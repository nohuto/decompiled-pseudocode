/*
 * XREFs of ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x14000DDC4
 * Callers:
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14000D160 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x14000A8E4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?SetSyncRefreshTime@CompositionSurfaceObject@@QEAAX_K@Z @ 0x140033098 (-SetSyncRefreshTime@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x14003402C (-IsVBlankVirtualizationDisabled@CompositionSurfaceObject@@QEBA_N_K@Z.c)
 *     ?UpdateStatsForIndependentFlip@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z @ 0x140037B1C (-UpdateStatsForIndependentFlip@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z.c)
 *     ?RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z @ 0x140038888 (-RemoveIndependentFlipSkipTokenFromList@CTokenManager@@IEAAXU_LUID@@IPEAPEAVCToken@@@Z.c)
 *     ?FindTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAVCTokenQueue@@@Z @ 0x14003BD24 (-FindTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAVCTokenQueue@@@Z.c)
 *     ?CompleteIndependentFlipNotifyToken@CTokenQueue@@QEAA_N_KI@Z @ 0x14003E320 (-CompleteIndependentFlipNotifyToken@CTokenQueue@@QEAA_N_KI@Z.c)
 *     Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledDeviceUsageNoInline @ 0x14009847C (Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkGetNominalRefreshRateInfo @ 0x1401C1C6C (DxgkGetNominalRefreshRateInfo.c)
 *     DxgkGetPresentStats @ 0x14034A864 (DxgkGetPresentStats.c)
 */

__int64 __fastcall CTokenManager::CompleteIndependentFlipToken(
        HANDLE *this,
        unsigned __int64 a2,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        unsigned int a4)
{
  void *hCompSurf; // r13
  int PresentStats; // r15d
  __int64 v10; // r8
  LARGE_INTEGER v11; // rbx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int v13; // r12d
  CompositionSurfaceObject *v14; // r15
  bool IsVBlankVirtualizationDisabled; // al
  __int64 v16; // rax
  LONG v17; // r8d
  LUID compSurfLuid; // rdx
  _QWORD *v19; // r13
  unsigned __int64 v20; // rax
  __int64 Win32kImportTable; // rax
  __int64 v22; // rsi
  void (__fastcall *v23)(_QWORD, _QWORD, __int64, __int64); // r14
  __int64 v24; // rdi
  unsigned int v25; // ebx
  int v26; // eax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-79h] BYREF
  struct CTokenQueue *v29; // [rsp+38h] [rbp-71h] BYREF
  PVOID Object; // [rsp+40h] [rbp-69h] BYREF
  LONG y; // [rsp+48h] [rbp-61h] BYREF
  int v32; // [rsp+4Ch] [rbp-5Dh]
  int v33; // [rsp+50h] [rbp-59h]
  int v34; // [rsp+54h] [rbp-55h]
  __int64 v35; // [rsp+58h] [rbp-51h]
  __int64 v36; // [rsp+60h] [rbp-49h]
  HANDLE Handle; // [rsp+68h] [rbp-41h]
  _QWORD v38[10]; // [rsp+70h] [rbp-39h] BYREF

  hCompSurf = (void *)a3->hCompSurf;
  Object = 0LL;
  Handle = hCompSurf;
  memset(v38, 0, sizeof(v38));
  PresentStats = DxgkGetPresentStats(a4, a3->VidPnSourceId, a3->CustomDuration, v38);
  if ( (unsigned int)Feature_VRRSurfaceSyncRefreshTime2__private_IsEnabledDeviceUsageNoInline()
    && (PresentStats < 0 || v38[7] == 0xFFFFFFFFLL) )
  {
    PerformanceFrequency.QuadPart = 0LL;
    v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( PresentStats >= 0
      && (VidPnSourceId = a3->VidPnSourceId, v29 = 0LL, (int)DxgkGetNominalRefreshRateInfo(a4, VidPnSourceId) >= 0)
      && (_DWORD)v29
      && HIDWORD(v29) )
    {
      v10 = (unsigned int)v29;
      v38[7] = PerformanceFrequency.QuadPart * HIDWORD(v29) / (unsigned int)v29;
    }
    else
    {
      LODWORD(v38[8]) = 1;
      v38[4] = v11.QuadPart;
      v38[6] = v11.QuadPart;
      v38[7] = PerformanceFrequency.QuadPart / 60;
    }
  }
  v13 = CompositionSurfaceObject::ResolveHandle(hCompSurf, 2u, v10, (struct CompositionSurfaceObject **)&Object);
  if ( v13 >= 0 )
  {
    v14 = (CompositionSurfaceObject *)Object;
    v29 = 0LL;
    if ( (int)CTokenManager::FindTokenQueue((CTokenManager *)this, (struct CompositionSurfaceObject *)Object, &v29) >= 0
      && CTokenQueue::CompleteIndependentFlipNotifyToken(v29, a2, a3->ScrollOffset.y) )
    {
      PerformanceFrequency.LowPart = 0;
      ZwSetEvent(this[9], (PLONG)&PerformanceFrequency);
    }
    v34 = 0;
    IsVBlankVirtualizationDisabled = CompositionSurfaceObject::IsVBlankVirtualizationDisabled(v14, a2);
    y = a3->ScrollOffset.y;
    if ( IsVBlankVirtualizationDisabled )
    {
      v32 = v38[1];
      v33 = v38[3];
      v16 = v38[4];
    }
    else
    {
      v32 = HIDWORD(v38[5]);
      v33 = HIDWORD(v38[5]);
      v16 = v38[6];
    }
    v35 = v16;
    v36 = v16;
    CompositionSurfaceObject::UpdateStatsForIndependentFlip(v14, a2, (const struct DXGI_FRAME_STATISTICS *)&y, v38[5]);
    v17 = a3->ScrollOffset.y;
    compSurfLuid = a3->compSurfLuid;
    Object = 0LL;
    CTokenManager::RemoveIndependentFlipSkipTokenFromList(
      (CTokenManager *)this,
      compSurfLuid,
      v17,
      (struct CToken **)&Object);
    v19 = Object;
    if ( Object )
    {
      v20 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)Object + 136LL))(
              Object,
              v35,
              v38[7],
              v38[7] * LODWORD(v38[8]));
      CompositionSurfaceObject::SetSyncRefreshTime(v14, v20);
      Win32kImportTable = DxgkGetWin32kImportTable();
      v22 = v19[7];
      v23 = *(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(Win32kImportTable + 424);
      v24 = *(_QWORD *)(v19[6] + 24LL);
      v25 = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 112LL))(v19);
      v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v19 + 120LL))(v19);
      v23((unsigned int)(LODWORD(v38[3]) + v26), v25, v24, v22);
      (*(void (__fastcall **)(_QWORD *))(*v19 + 56LL))(v19);
      (*(void (__fastcall **)(_QWORD *, __int64))*v19)(v19, 1LL);
    }
    ObfDereferenceObject(v14);
    ObCloseHandle(Handle, 1);
  }
  return (unsigned int)v13;
}
