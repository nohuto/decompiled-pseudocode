/*
 * XREFs of ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1401D44B8
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x140192624 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x140015E68 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x14004683C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x14021C0D4 (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x14021C124 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::HandleVirtualMachineReset(DXGGLOBAL *this)
{
  __int64 v2; // rdx
  __int64 Current; // rax
  __int64 *v4; // rdx
  unsigned int v5; // edx
  DXG_GUEST_GLOBAL_VMBUS *v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v8);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 432, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)this + 112);
  v2 = *((_QWORD *)this + 52);
  *(_QWORD *)&v7 = (char *)this + 416;
  while ( 1 )
  {
    *((_QWORD *)&v7 + 1) = v2;
    Current = DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(&v7);
    if ( !Current )
      break;
    *(_DWORD *)(Current + 488) = 0;
    v2 = *v4;
  }
  v7 = 0LL;
  _InterlockedDecrement((volatile signed __int32 *)this + 112);
  ExReleasePushLockSharedEx((char *)this + 432, 0LL);
  KeLeaveCriticalRegion();
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 456));
  v5 = *((_DWORD *)this + 427);
  if ( v5 )
  {
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((DXG_GUEST_GLOBAL_VMBUS **)this + 210), v5);
    *((_DWORD *)this + 427) = 0;
  }
  v6 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)this + 210);
  if ( v6 )
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel(v6);
  *((_QWORD *)this + 58) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 456, 0LL);
  KeLeaveCriticalRegion();
}
