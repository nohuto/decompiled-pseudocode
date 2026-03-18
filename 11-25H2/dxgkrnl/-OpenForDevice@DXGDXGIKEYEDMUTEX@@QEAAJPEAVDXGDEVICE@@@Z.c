/*
 * XREFs of ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1401E03D4
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1402FD488 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x140180008 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401DF2AC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401E08AC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x14029E83C (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402FF2A8 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenForDevice(DXGDXGIKEYEDMUTEX *this, ADAPTER_RENDER **a2)
{
  __int64 v4; // r8
  __int64 v6; // rcx
  int v7; // edi
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  const wchar_t *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v31; // rdi
  struct DXGPROCESS *v32; // rsi
  char *v33; // rbp
  unsigned int v34; // ecx
  __int64 v35; // r8
  int v36; // edx
  __int64 v37; // rdi
  void **v38; // [rsp+28h] [rbp-80h]
  _BYTE v39[16]; // [rsp+80h] [rbp-28h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(a2[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 469;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      469LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    WdLogSingleEntry2(2LL, this, v4);
    v38 = (void **)*((_QWORD *)this + 1);
    WdLogGlobalForLineNumber = 474;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"KeyedMutex 0x%I64x already opened locally by device 0x%I64x",
      (__int64)this,
      (__int64)v38,
      0LL,
      0LL,
      0LL);
    return 3221227288LL;
  }
  *((_QWORD *)this + 1) = a2;
  v7 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(this, 0LL);
  if ( v7 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(2LL, this, CurrentProcess);
    WdLogGlobalForLineNumber = 484;
    v10 = PsGetCurrentProcess(v9);
    v11 = L"Failed to open local producer mutex for KeyedMutex 0x%I64x in process 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v11, (__int64)this, v10, 0LL, 0LL, 0LL);
LABEL_14:
    v24 = PsGetCurrentProcess(v12);
    WdLogSingleEntry2(2LL, a2, v24);
    WdLogGlobalForLineNumber = 531;
    v26 = PsGetCurrentProcess(v25);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to open DxgiKeyedMutex for device 0x%I64x in process 0x%I64x",
      (__int64)a2,
      v26,
      0LL,
      0LL,
      0LL);
    DXGDXGIKEYEDMUTEX::CloseFromDevice(this, v27, v28, v29);
    return (unsigned int)v7;
  }
  v7 = DXGDEVICE::ConfigureSharedResourceHelper(
         (DXGDEVICE *)a2,
         0,
         (void *)0xFFFFFFFFFFFFFFFFLL,
         *(struct DXGSHAREDRESOURCE **)(*(_QWORD *)this + 16LL),
         1u,
         0);
  if ( v7 < 0 )
  {
    v14 = PsGetCurrentProcess(v13);
    WdLogSingleEntry2(2LL, this, v14);
    WdLogGlobalForLineNumber = 492;
    v10 = PsGetCurrentProcess(v15);
    v11 = L"Failed to add producer device to PAL for KeyedMutex 0x%I64x in process 0x%I64x";
    goto LABEL_7;
  }
  v7 = DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(this, (struct DXGDEVICE *)a2);
  if ( v7 < 0 )
  {
    v17 = PsGetCurrentProcess(v16);
    WdLogSingleEntry2(2LL, this, v17);
    WdLogGlobalForLineNumber = 500;
    v10 = PsGetCurrentProcess(v18);
    v11 = L"Failed to open shared surface for KeyedMutex 0x%I64x in process 0x%I64x, insure the DDA producer and consumer "
           "devices are on the same adapter";
    goto LABEL_7;
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v39, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v39);
  v7 = DXGSYNCOBJECT::Open(
         *(DXGSYNCOBJECT **)(*(_QWORD *)this + 32LL),
         0LL,
         0LL,
         0LL,
         (unsigned int *)this + 24,
         0LL,
         0LL,
         0,
         0LL,
         0,
         DXGDEVICE::DestroyFlagsDefault,
         0LL,
         0LL,
         0,
         0);
  if ( v7 < 0 )
  {
    v21 = PsGetCurrentProcess(v20);
    WdLogSingleEntry3(2LL, *(_QWORD *)(*(_QWORD *)this + 32LL), a2, v21);
    WdLogGlobalForLineNumber = 511;
    v23 = PsGetCurrentProcess(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to open GPU fence 0x%I64x for device 0x%I64x in process 0x%I64x",
      *(_QWORD *)(*(_QWORD *)this + 32LL),
      (__int64)a2,
      v23,
      0LL,
      0LL);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v39);
    goto LABEL_14;
  }
  Current = DXGPROCESS::GetCurrent();
  v31 = *((unsigned int *)this + 24);
  v32 = Current;
  v33 = (char *)Current + 248;
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v34 = ((unsigned int)v31 >> 6) & 0xFFFFFF;
  if ( v34 < *((_DWORD *)v32 + 74) )
  {
    v35 = *((_QWORD *)v32 + 35);
    v36 = *(_DWORD *)(v35 + 16LL * v34 + 8);
    if ( (((unsigned int)v31 >> 25) & 0x60) == (v36 & 0x60) && (v36 & 0x1F) != 0 )
    {
      v37 = 2 * ((v31 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v35 + 8 * v37 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*((_QWORD *)v32 + 35) + 8 * v37 + 8) &= ~0x2000u;
    }
  }
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v33 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v33, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)this + 13) = *(_QWORD *)(*(_QWORD *)this + 32LL);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v39);
  return 0LL;
}
