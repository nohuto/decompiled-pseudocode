/*
 * XREFs of ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1401CEBB0
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1401902D4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     DxgkEnsureVmBusInterface @ 0x1401D1D84 (DxgkEnsureVmBusInterface.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1400728D0 (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x140184828 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x140214E1C (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x140217918 (-EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ.c)
 */

__int64 __fastcall DXGGLOBAL::EnsureVmBusInterface(DXGGLOBAL *this)
{
  char v2; // bp
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rcx
  PMDL PagesForMdl; // rax
  struct _MDL **v7; // r14
  __int64 v8; // rax
  const wchar_t *v9; // r9
  unsigned int v10; // esi
  PVOID MappedSystemVa; // rax
  int v12; // eax
  __int64 v13; // r15
  const wchar_t *v14; // r9
  int GpadlFromMdl; // eax
  void **v16; // rcx

  v2 = 0;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 456));
  if ( *((_QWORD *)this + 206) )
  {
    v7 = (struct _MDL **)((char *)this + 1688);
  }
  else
  {
    v2 = 1;
    v4 = operator new(0x48uLL, 0x4B677844u, 256LL, v3);
    if ( !v4 )
    {
      *((_QWORD *)this + 206) = 0LL;
      v7 = (struct _MDL **)((char *)this + 1688);
      v10 = -1073741801;
      goto LABEL_19;
    }
    DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(v4, 2);
    *((_QWORD *)this + 206) = v5;
    PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, 0x808uLL, MmNonCached, 0);
    v7 = (struct _MDL **)((char *)this + 1688);
    *((_QWORD *)this + 211) = PagesForMdl;
    if ( !PagesForMdl )
    {
      WdLogSingleEntry0(2LL);
      v8 = 5941LL;
      v9 = L"MmAllocatePagesForMdlEx failed";
LABEL_5:
      WdLogGlobalForLineNumber = v8;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v9, v8, 0LL, 0LL, 0LL, 0LL);
      v10 = -1073741801;
      goto LABEL_19;
    }
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 210) = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      WdLogSingleEntry0(2LL);
      v8 = 5948LL;
      v9 = L"MmGetSystemAddressForMdlSafe failed";
      goto LABEL_5;
    }
  }
  v12 = DXG_GUEST_GLOBAL_VMBUS::EnsureVmBusChannel(*((DXG_GUEST_GLOBAL_VMBUS **)this + 206));
  v10 = v12;
  if ( v12 >= 0 )
  {
    if ( *((_DWORD *)this + 419) )
      goto LABEL_23;
    GpadlFromMdl = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
                     *((DXG_GUEST_GLOBAL_VMBUS **)this + 206),
                     *v7,
                     (unsigned int *)this + 419);
    v10 = GpadlFromMdl;
    if ( GpadlFromMdl >= 0 )
      goto LABEL_23;
    v13 = GpadlFromMdl;
    WdLogSingleEntry1(2LL, GpadlFromMdl);
    v14 = L"CreateGpadlFromMdl failed: 0x%I64x";
    WdLogGlobalForLineNumber = 5978;
  }
  else
  {
    v13 = v12;
    WdLogSingleEntry1(2LL, v12);
    v14 = L"Failed to create global VM bus channel, returning 0x%I64x";
    WdLogGlobalForLineNumber = 5966;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v14, v13, 0LL, 0LL, 0LL, 0LL);
  if ( !v2 )
    goto LABEL_23;
LABEL_19:
  if ( *v7 )
  {
    MmFreePagesFromMdl(*v7);
    ExFreePoolWithTag(*v7, 0);
    *((_QWORD *)this + 210) = 0LL;
    *v7 = 0LL;
  }
  v16 = (void **)*((_QWORD *)this + 206);
  if ( v16 )
  {
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v16);
    *((_QWORD *)this + 206) = 0LL;
  }
LABEL_23:
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 58) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 456, 0LL);
  KeLeaveCriticalRegion();
  return v10;
}
