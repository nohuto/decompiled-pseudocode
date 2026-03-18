/*
 * XREFs of ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1401E7FFC
 * Callers:
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1401E9770 (DxgkSetProcessSchedulingPriorityBand.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004C16C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1403BF1EC (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityBand(__int64 a1, int a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // r14
  struct DXGADAPTER *v5; // r15
  int v6; // eax
  DXGDEVICE *Current; // rax
  DXGDEVICE *v8; // rsi
  __int128 v10; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v11[16]; // [rsp+60h] [rbp-E8h] BYREF
  _BYTE v12[144]; // [rsp+70h] [rbp-D8h] BYREF

  v3 = a2;
  if ( *(struct _KTHREAD **)(a1 + 128) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4508;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsMutexOwner()", 4508LL, 0LL, 0LL, 0LL, 0LL);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 216, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(a1 + 224) = KeGetCurrentThread();
  if ( (_DWORD)v3 == 1 )
  {
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 205) = a1;
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 407, 1, 0);
    *(_DWORD *)(a1 + 416) = 1;
  }
  else
  {
    if ( (_DWORD)v3 )
    {
      WdLogSingleEntry2(3LL, v3, -1073741811LL);
      WdLogGlobalForLineNumber = 4534;
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(a1 + 224) = 0LL;
      ExReleasePushLockExclusiveEx(a1 + 216, 0LL);
      KeLeaveCriticalRegion();
      return 3221225485LL;
    }
    *(_DWORD *)(a1 + 416) = 2;
  }
  v4 = *(_QWORD **)(a1 + 320);
  *(_QWORD *)&v10 = a1 + 320;
  while ( 1 )
  {
    *((_QWORD *)&v10 + 1) = v4;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v10);
    v8 = Current;
    if ( !Current )
      break;
    v5 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v11, Current);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, v5, 0LL);
    v6 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12, 0LL);
    if ( v6 >= 0 )
    {
      DXGDEVICE::NotifyProcessStatusChange(v8);
    }
    else
    {
      WdLogSingleEntry2(3LL, v5, v6);
      WdLogGlobalForLineNumber = 4561;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v11);
    v4 = (_QWORD *)*v4;
  }
  v10 = 0LL;
  if ( !(_DWORD)v3 && a1 == *((_QWORD *)DXGGLOBAL::GetGlobal() + 205) )
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 407, 0, 1);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(a1 + 224) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 216, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
