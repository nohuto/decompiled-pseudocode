/*
 * XREFs of ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x14039FD84
 * Callers:
 *     ?DxgkpProcessStatusChangeWork@@YAXPEAX@Z @ 0x14039FCE0 (-DxgkpProcessStatusChangeWork@@YAXPEAX@Z.c)
 * Callees:
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004BC20 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1403B315C (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::ProcessStatusChange(DXGPROCESS *this)
{
  struct _KPROCESS *v2; // rcx
  char *v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // r9
  __int64 Current; // rax
  struct DXGDEVICE *v7; // rbx
  __int128 v8; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v9[8]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD ApcState[7]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v11[160]; // [rsp+88h] [rbp-80h] BYREF

  v2 = (struct _KPROCESS *)*((_QWORD *)this + 7);
  memset(&ApcState[1], 0, 48);
  KeStackAttachProcess(v2, (PRKAPC_STATE)&ApcState[1]);
  v3 = (char *)this + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 216, 0LL);
  *((_QWORD *)this + 28) = KeGetCurrentThread();
  _InterlockedExchange((volatile __int32 *)this + 105, 0);
  v4 = (_QWORD *)*((_QWORD *)this + 40);
  *(_QWORD *)&v8 = (char *)this + 320;
  while ( 1 )
  {
    *((_QWORD *)&v8 + 1) = v4;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v8);
    v7 = (struct DXGDEVICE *)Current;
    if ( !Current )
      break;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL)) )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9, v7);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v11, (__int64)v7, 2, v5, 0);
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v11, 0LL) >= 0 )
        DXGDEVICE::NotifyProcessStatusChange(v7);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v11);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9);
    }
    v4 = (_QWORD *)*v4;
  }
  v8 = 0LL;
  KeUnstackDetachProcess((PRKAPC_STATE)&ApcState[1]);
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
