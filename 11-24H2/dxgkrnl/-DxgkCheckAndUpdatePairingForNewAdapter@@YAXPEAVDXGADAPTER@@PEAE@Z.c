/*
 * XREFs of ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401AB000
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404056C4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x14000B870 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x14019B038 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x14019D160 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray @ 0x1401AA85C (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AdapterArray.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::_AdapterArray @ 0x1401AA904 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--_AdapterArray.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall DxgkCheckAndUpdatePairingForNewAdapter(struct DXGADAPTER *a1, unsigned __int8 *a2)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v5; // rax
  unsigned int i; // edi
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rbx
  int v12; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-41h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-31h] BYREF
  __int64 v15; // [rsp+40h] [rbp-29h]
  _BYTE v16[16]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v17[24]; // [rsp+58h] [rbp-11h] BYREF
  struct _GUID v18; // [rsp+70h] [rbp+7h] BYREF

  v12 = 0;
  *a2 = 0;
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    Global,
    lambda_98a973f9db80c22b1740ef6057097b25_::_lambda_invoker_cdecl_,
    &v12,
    1LL);
  if ( v12 )
  {
    DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray((__int64)&v14, v12 + 16);
    v5 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      v5,
      lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_,
      &v14,
      1LL);
    for ( i = 0; i < v14; ++i )
    {
      v7 = *(_QWORD *)(v15 + 16LL * i);
      v8 = *(_QWORD *)(v7 + 3120);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (struct DXGFASTMUTEX *const)(v8 + 152), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
      v13[0] = 0LL;
      v18 = 0LL;
      ADAPTER_DISPLAY::GetPairedRenderAdapter((ADAPTER_DISPLAY *)v8, (struct DXGADAPTER_REFERENCE *)v13, &v18);
      v9 = v13[0];
      if ( v13[0]
        && (*(_QWORD *)&v18.Data1 != *(_QWORD *)(v13[0] + 316LL) || *(_QWORD *)v18.Data4 != *(_QWORD *)(v13[0] + 324LL))
        && (*(_QWORD *)&v18.Data1 == *(_QWORD *)((char *)a1 + 316)
         && *(_QWORD *)v18.Data4 == *(_QWORD *)((char *)a1 + 324)
         || (*((_DWORD *)a1 + 111) & 1) != 0
         || v9 == *((_QWORD *)DXGGLOBAL::GetGlobal() + 123)) )
      {
        v10 = *(_QWORD *)(v9 + 3128) + 24LL;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v10, 0LL);
        *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
        v11 = *(_QWORD *)(v13[0] + 3128LL) + 48LL;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v11, 0LL);
        *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v17,
          (struct DXGADAPTER *)v7,
          1);
        if ( *(_DWORD *)(v7 + 200) == 1 )
        {
          ADAPTER_RENDER::DisconnectFromDisplayAdapters(
            *(ADAPTER_RENDER **)(v13[0] + 3128LL),
            (struct DXGADAPTER *)v7,
            0);
          ADAPTER_DISPLAY::SetPairedRenderAdapter((ADAPTER_DISPLAY *)v8, a1, 0LL);
          *a2 = 1;
        }
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v17);
        *(_QWORD *)(v11 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v11, 0LL);
        KeLeaveCriticalRegion();
        *(_QWORD *)(v10 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v10, 0LL);
        KeLeaveCriticalRegion();
      }
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v13, 0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v16);
    }
    DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::_AdapterArray((__int64)&v14);
  }
}
