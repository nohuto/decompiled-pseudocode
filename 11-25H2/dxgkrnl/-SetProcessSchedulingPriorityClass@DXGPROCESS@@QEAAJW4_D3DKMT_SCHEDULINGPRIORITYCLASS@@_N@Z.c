/*
 * XREFs of ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1403EEBE0
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x140182FD0 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004C16C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     VidSchSetPriorityClassProcessX @ 0x140184E20 (VidSchSetPriorityClassProcessX.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityClass(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned __int8 a3)
{
  unsigned int v5; // r12d
  __int64 result; // rax
  struct _KTHREAD *v7; // r15
  struct DXGADAPTER *v8; // rbx
  __int64 v9; // r8
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v11; // rsi
  __int128 v12; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v14[144]; // [rsp+70h] [rbp-90h] BYREF

  v5 = a3;
  if ( this[16] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3540;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsMutexOwner()", 3540LL, 0LL, 0LL, 0LL, 0LL);
  }
  result = VidSchSetPriorityClassProcessX((struct DXGPROCESS *)this, a2, v5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 78) = a2;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this + 27, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    this[28] = KeGetCurrentThread();
    v7 = this[40];
    *(_QWORD *)&v12 = this + 40;
    while ( 1 )
    {
      *((_QWORD *)&v12 + 1) = v7;
      Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v12);
      v11 = Current;
      if ( !Current )
        break;
      v8 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v14, v8, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v14, 0LL) >= 0
        && (*((_BYTE *)v11 + 1901) & 1) == 0 )
      {
        LOBYTE(v9) = v5;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 736LL) + 8LL)
                                                        + 160LL))(
          *((_QWORD *)v11 + 100),
          *((unsigned int *)this + 104),
          v9);
        v7 = (struct _KTHREAD *)*((_QWORD *)&v12 + 1);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v14);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13);
      v7 = *(struct _KTHREAD **)v7;
    }
    v12 = 0LL;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    this[28] = 0LL;
    ExReleasePushLockExclusiveEx(this + 27, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
