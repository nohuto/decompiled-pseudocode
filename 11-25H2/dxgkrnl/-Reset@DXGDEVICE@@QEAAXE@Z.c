/*
 * XREFs of ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1401B9040
 * Callers:
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x14019DA2C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1403F8E44 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?VidSchMarkDeviceAsError@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_DEVICE@@W4_VIDSCH_ERROR_CODE@@PEAU_D3DKMT_DEVICEPAGEFAULT_STATE@@@Z @ 0x14005B4B4 (-VidSchMarkDeviceAsError@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_DEVICE@@W4_VIDSCH_ERROR_CODE@@PEAU_D3DK.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?Reset@DXGOVERLAY@@QEAAXXZ @ 0x1401E2DF0 (-Reset@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1401E7E9C (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x140225FE4 (-VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU.c)
 */

void __fastcall DXGDEVICE::Reset(DXGDEVICE *this, char a2)
{
  DXGOVERLAY *i; // rdi
  bool v5; // zf
  __int64 v6; // rdx
  const struct _WNF_STATE_NAME *v7; // rdx
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  DXG_GUEST_VIRTUALGPU_VMBUS *v10; // rcx
  struct DXGPROCESS *v11; // rdx
  DXGPROCESS *v12; // rcx
  _BYTE v13[40]; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+80h] [rbp+8h] BYREF
  _D3DKMT_MARKDEVICEASERROR v15; // [rsp+90h] [rbp+18h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1612;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1612LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 856LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  for ( i = (DXGOVERLAY *)*((_QWORD *)this + 64); i != (DXGDEVICE *)((char *)this + 512) && i; i = *(DXGOVERLAY **)i )
    DXGOVERLAY::Reset(i);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  v5 = (*((_BYTE *)this + 1901) & 1) == 0;
  v6 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 152) = 2;
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 736) + 8LL) + 584LL))(*((_QWORD *)this + 100)) )
    {
      *((_DWORD *)this + 152) = 3;
    }
    else
    {
      v9 = 22;
      if ( !a2 )
        v9 = 26;
      VIDSCH_EXPORT::VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL), *((_QWORD *)this + 100), v9);
    }
  }
  else
  {
    v10 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v6 + 16) + 4664LL);
    v11 = (struct DXGPROCESS *)*((_QWORD *)this + 5);
    v15.hDevice = *((_DWORD *)this + 117);
    v15.Reason = 0x80000000;
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(v10, v11, this, &v15);
  }
  v12 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v14 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v12, v7, &v14, v8) < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1683;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"DXGPROCESS::SendWnfNotification failed during DXGDEVICE::Reset.",
      1683LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
}
