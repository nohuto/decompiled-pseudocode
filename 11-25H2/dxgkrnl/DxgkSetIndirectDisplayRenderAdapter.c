/*
 * XREFs of DxgkSetIndirectDisplayRenderAdapter @ 0x1401AD31C
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x140187524 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1401ADA2C (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ??$DXGKCALLONEXIT@V_lambda_9000b013b54c5d4fd00007edcb0ed276_@@@@YA?A_PV_lambda_9000b013b54c5d4fd00007edcb0ed276_@@@Z @ 0x14006AB4C (--$DXGKCALLONEXIT@V_lambda_9000b013b54c5d4fd00007edcb0ed276_@@@@YA-A_PV_lambda_9000b013b54c5d4fd.c)
 *     _DXGKCALLONEXIT__lambda_b98058a49004024dd1650fdaa637bde3____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14006ABA8 (_DXGKCALLONEXIT__lambda_b98058a49004024dd1650fdaa637bde3____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x140198B48 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x14019ACC8 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 *     _lambda_b98058a49004024dd1650fdaa637bde3_::_lambda_b98058a49004024dd1650fdaa637bde3_ @ 0x1401A8314 (_lambda_b98058a49004024dd1650fdaa637bde3_--_lambda_b98058a49004024dd1650fdaa637bde3_.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x140302664 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 */

__int64 __fastcall DxgkSetIndirectDisplayRenderAdapter(struct DXGADAPTER *a1, struct _LUID *a2, _BYTE *a3)
{
  _QWORD *v6; // rax
  __int128 v7; // xmm1
  struct _LUID *v8; // rdx
  bool v9; // zf
  unsigned int v10; // esi
  struct DXGADAPTER *v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r14
  struct DXGADAPTER *v14; // rdi
  __int64 HighPart; // [rsp+20h] [rbp-E0h]
  __int64 LowPart; // [rsp+28h] [rbp-D8h]
  struct DXGADAPTER *v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[16]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v22; // [rsp+88h] [rbp-78h] BYREF
  struct _GUID v23; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v24[24]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v25[24]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v26[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-10h]
  _BYTE v28[48]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v29[12]; // [rsp+130h] [rbp+30h] BYREF
  char v30; // [rsp+1A0h] [rbp+A0h] BYREF
  int IndirectDisplayPairedAdapter; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v32; // [rsp+1B8h] [rbp+B8h] BYREF

  IndirectDisplayPairedAdapter = 0;
  v32 = 0LL;
  v22 = 0LL;
  v30 = 0;
  v23 = 0LL;
  if ( a3 )
    *a3 = 0;
  v6 = lambda_b98058a49004024dd1650fdaa637bde3_::_lambda_b98058a49004024dd1650fdaa637bde3_(
         v29,
         (__int64)a2,
         (__int64)&IndirectDisplayPairedAdapter,
         (__int64)&v32,
         (__int64)&v22,
         (__int64)&v30);
  v7 = *((_OWORD *)v6 + 1);
  v26[0] = *(_OWORD *)v6;
  v27 = v6[4];
  v26[1] = v7;
  DXGKCALLONEXIT<_lambda_9000b013b54c5d4fd00007edcb0ed276_>((__int64)v28, v26);
  v32 = *(_QWORD *)((char *)a1 + 412);
  v21 = 0LL;
  DXGADAPTER::IsAdapterSessionized(a1, v8, 0LL, &v21);
  v9 = (*((_DWORD *)a1 + 111) & 0x100) == 0;
  v22 = v21;
  if ( v9 )
  {
    WdLogSingleEntry2(2LL, a1, -1073741811LL);
    WdLogGlobalForLineNumber = 12385;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.",
      (__int64)a1,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v10 = -1073741585;
    IndirectDisplayPairedAdapter = -1073741585;
LABEL_35:
    DXGKCALLONEXIT__lambda_b98058a49004024dd1650fdaa637bde3____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v28);
    return v10;
  }
  v11 = 0LL;
  v18[0] = 0LL;
  if ( a2->HighPart || a2->LowPart )
  {
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v18, a2);
    v11 = v18[0];
    if ( !v18[0] )
    {
      WdLogSingleEntry3(2LL, a2->HighPart, a2->LowPart, -1073741811LL);
      LowPart = a2->LowPart;
      HighPart = a2->HighPart;
      WdLogGlobalForLineNumber = 12402;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Invalid Render Adapter LUID (0x%I64x, 0x%I64x) specified, returning 0x%I64x",
        HighPart,
        LowPart,
        -1073741811LL,
        0LL,
        0LL);
      v10 = -1073741584;
      IndirectDisplayPairedAdapter = -1073741584;
LABEL_34:
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v18, 0LL);
      goto LABEL_35;
    }
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(*((_QWORD *)a1 + 390) + 152LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v19[0] = 0LL;
  IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(a1, 0, (struct DXGADAPTER_REFERENCE *)v19);
  if ( IndirectDisplayPairedAdapter < 0 )
  {
    WdLogSingleEntry1(4LL, a1);
    WdLogGlobalForLineNumber = 12440;
  }
  if ( (struct DXGADAPTER *)v19[0] == v11 )
  {
    WdLogSingleEntry2(4LL, a2->HighPart, a2->LowPart);
    WdLogGlobalForLineNumber = 12447;
    IndirectDisplayPairedAdapter = 0;
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v19, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v18, 0LL);
    v10 = 0;
    goto LABEL_35;
  }
  if ( v19[0] )
    v12 = *(_QWORD *)(v19[0] + 3128LL);
  else
    v12 = *((_QWORD *)v11 + 391);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v12 + 24, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v12 + 32) = KeGetCurrentThread();
  if ( v19[0] )
    v13 = *(_QWORD *)(v19[0] + 3128LL);
  else
    v13 = *((_QWORD *)v18[0] + 391);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v13 + 48, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v14 = v18[0];
  v9 = v18[0] == 0LL;
  *(_QWORD *)(v13 + 56) = KeGetCurrentThread();
  if ( !v9 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v24, v14, 1);
    if ( !*((_QWORD *)v14 + 391) || (*((_DWORD *)v14 + 744) & 8) != 0 )
    {
      v10 = -1073741584;
      WdLogSingleEntry2(2LL, v14, -1073741584LL);
      WdLogGlobalForLineNumber = 12482;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Caller specified adapter 0x%I64x is not a capable adapter, returning 0x%I64x",
        (__int64)v14,
        -1073741584LL,
        0LL,
        0LL,
        0LL);
      IndirectDisplayPairedAdapter = -1073741584;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v13 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v13 + 48, 0LL);
      KeLeaveCriticalRegion();
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v12 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v12 + 24, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v19, 0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
      goto LABEL_34;
    }
    if ( *((_DWORD *)v14 + 50) != 1 || *((_BYTE *)v18[0] + 3017) )
    {
      WdLogSingleEntry2(3LL, v18[0], -1073741130LL);
      WdLogGlobalForLineNumber = 12490;
      IndirectDisplayPairedAdapter = -1073741130;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v13 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v13 + 48, 0LL);
      KeLeaveCriticalRegion();
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v12 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v12 + 24, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v19, 0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v18, 0LL);
      v10 = -1073741130;
      goto LABEL_35;
    }
    v23 = *(struct _GUID *)((char *)v18[0] + 316);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v25, a1, 1);
  if ( *((_DWORD *)a1 + 50) != 1 || *((_BYTE *)a1 + 3017) )
  {
    WdLogSingleEntry2(3LL, a1, -1073741130LL);
    WdLogGlobalForLineNumber = 12507;
    IndirectDisplayPairedAdapter = -1073741130;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v13 + 56) = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 48, 0LL);
    KeLeaveCriticalRegion();
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v12 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 24, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v19, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v18, 0LL);
    DXGKCALLONEXIT__lambda_b98058a49004024dd1650fdaa637bde3____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v28);
    return 3221226166LL;
  }
  else
  {
    if ( v19[0] )
      ADAPTER_RENDER::DisconnectFromDisplayAdapters(*(ADAPTER_RENDER **)(v19[0] + 3128LL), a1, *((_DWORD *)a1 + 50));
    ADAPTER_DISPLAY::SetPairedRenderAdapter(*((ADAPTER_DISPLAY **)a1 + 390), v18[0], &v23);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    v30 = 1;
    if ( a3 )
      *a3 = 1;
    IndirectDisplayPairedAdapter = 0;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v13 + 56) = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 48, 0LL);
    KeLeaveCriticalRegion();
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v12 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 24, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v19, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v18, 0LL);
    DXGKCALLONEXIT__lambda_b98058a49004024dd1650fdaa637bde3____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v28);
    return 0LL;
  }
}
