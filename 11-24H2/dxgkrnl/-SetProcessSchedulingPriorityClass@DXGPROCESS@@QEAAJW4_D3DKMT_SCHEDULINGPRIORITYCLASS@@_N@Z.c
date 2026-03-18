/*
 * XREFs of ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1403E8F4C
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x140185320 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004BC20 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     VidSchSetPriorityClassProcessX @ 0x140187170 (VidSchSetPriorityClassProcessX.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityClass(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned __int8 a3)
{
  unsigned int v5; // r12d
  __int64 result; // rax
  struct _KTHREAD *v7; // r14
  struct DXGADAPTER *v8; // rbx
  __int64 v9; // r8
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v11; // rdi
  __int128 v12; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v14[144]; // [rsp+70h] [rbp-90h] BYREF

  v5 = a3;
  if ( this[16] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3541;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsMutexOwner()", 3541LL, 0LL, 0LL, 0LL, 0LL);
  }
  result = VidSchSetPriorityClassProcessX((struct DXGPROCESS *)this, a2, v5);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 78) = a2;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this + 27, 0LL);
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
        && (*((_BYTE *)v11 + 1917) & 1) == 0 )
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
    this[28] = 0LL;
    ExReleasePushLockExclusiveEx(this + 27, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
