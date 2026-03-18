/*
 * XREFs of ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1401BB7FC
 * Callers:
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x14019FE68 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1403F2C34 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140029490 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?VidSchMarkDeviceAsError@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_DEVICE@@W4_VIDSCH_ERROR_CODE@@PEAU_D3DKMT_DEVICEPAGEFAULT_STATE@@@Z @ 0x14005AEB4 (-VidSchMarkDeviceAsError@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_DEVICE@@W4_VIDSCH_ERROR_CODE@@PEAU_D3DK.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?Reset@DXGOVERLAY@@QEAAXXZ @ 0x1401E8020 (-Reset@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1401ED894 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x14022C8D0 (-VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU.c)
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
    WdLogGlobalForLineNumber = 1664;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1664LL,
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
  v5 = (*((_BYTE *)this + 1917) & 1) == 0;
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
    WdLogGlobalForLineNumber = 1735;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DXGPROCESS::SendWnfNotification failed during DXGDEVICE::Reset.",
      1735LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
}
