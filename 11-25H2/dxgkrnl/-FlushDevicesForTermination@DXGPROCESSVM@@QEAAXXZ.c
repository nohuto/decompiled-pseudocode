/*
 * XREFs of ?FlushDevicesForTermination@DXGPROCESSVM@@QEAAXXZ @ 0x1401E6EF4
 * Callers:
 *     ?FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401E7014 (-FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004C16C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x14038A344 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

void __fastcall DXGPROCESSVM::FlushDevicesForTermination(DXGPROCESSVM *this)
{
  char *v2; // rdi
  struct DXGADAPTER *v3; // rbx
  __int64 Current; // rax
  __int64 v5; // rsi
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (char *)this + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  *(_QWORD *)&v6 = (char *)this + 320;
  for ( *((_QWORD *)&v6 + 1) = *((_QWORD *)this + 40); ; *((_QWORD *)&v6 + 1) = **((_QWORD **)&v6 + 1) )
  {
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v6);
    v5 = Current;
    if ( !Current )
      break;
    v3 = *(struct DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v7, v3, 1);
    if ( *((_DWORD *)v3 + 50) == 1 && *(_DWORD *)(v5 + 608) == 1 )
      DXGDEVICE::FlushScheduler(v5, 4LL, 4294967293LL, 0LL);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  }
  v6 = 0LL;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
