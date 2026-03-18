/*
 * XREFs of ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401A8AE0
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14040C830 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x14001AE50 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x140198B48 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x14019ACC8 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray @ 0x1401A833C (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AdapterArray.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::_AdapterArray @ 0x1401A83E4 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--_AdapterArray.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall DxgkCheckAndUpdatePairingForNewAdapter(struct DXGADAPTER *a1, unsigned __int8 *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  struct DXGGLOBAL *v7; // rax
  unsigned int i; // esi
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h]
  _BYTE v18[16]; // [rsp+48h] [rbp-38h] BYREF
  struct _GUID v19; // [rsp+58h] [rbp-28h] BYREF

  v14 = 0;
  *a2 = 0;
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    Global,
    lambda_98a973f9db80c22b1740ef6057097b25_::_lambda_invoker_cdecl_,
    &v14,
    1LL);
  if ( v14 )
  {
    DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray((__int64)&v16, v14 + 16, v5, v6);
    v7 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      v7,
      lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_,
      &v16,
      1LL);
    for ( i = 0; i < v16; ++i )
    {
      v9 = *(_QWORD *)(v17 + 16LL * i);
      v10 = *(_QWORD *)(v9 + 3120);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)(v10 + 152), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
      v15[0] = 0LL;
      v19 = 0LL;
      ADAPTER_DISPLAY::GetPairedRenderAdapter((ADAPTER_DISPLAY *)v10, (struct DXGADAPTER_REFERENCE *)v15, &v19);
      v11 = v15[0];
      if ( v15[0]
        && (*(_QWORD *)&v19.Data1 != *(_QWORD *)(v15[0] + 316LL) || *(_QWORD *)v19.Data4 != *(_QWORD *)(v15[0] + 324LL))
        && (*(_QWORD *)&v19.Data1 == *(_QWORD *)((char *)a1 + 316)
         && *(_QWORD *)v19.Data4 == *(_QWORD *)((char *)a1 + 324)
         || (*((_DWORD *)a1 + 111) & 1) != 0
         || v11 == *((_QWORD *)DXGGLOBAL::GetGlobal() + 119)) )
      {
        v12 = *(_QWORD *)(v11 + 3128) + 24LL;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v12, 0LL);
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *(_QWORD *)(v12 + 8) = KeGetCurrentThread();
        v13 = *(_QWORD *)(v15[0] + 3128LL) + 48LL;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v13, 0LL);
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)&v19,
          (struct DXGADAPTER *)v9,
          1);
        if ( *(_DWORD *)(v9 + 200) == 1 )
        {
          ADAPTER_RENDER::DisconnectFromDisplayAdapters(
            *(ADAPTER_RENDER **)(v15[0] + 3128LL),
            (struct DXGADAPTER *)v9,
            0);
          ADAPTER_DISPLAY::SetPairedRenderAdapter((ADAPTER_DISPLAY *)v10, a1, 0LL);
          *a2 = 1;
        }
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v19);
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *(_QWORD *)(v13 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v13, 0LL);
        KeLeaveCriticalRegion();
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *(_QWORD *)(v12 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v12, 0LL);
        KeLeaveCriticalRegion();
      }
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v15, 0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
    }
    DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::_AdapterArray((__int64)&v16);
  }
}
