/*
 * XREFs of ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVCOREDEVICEACCESS@@@Z @ 0x14022A12C
 * Callers:
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1401B1230 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402CCEDC (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x140337EC4 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x14033A348 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        struct DXGALLOCATION **a6,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a7,
        PERESOURCE **a8)
{
  int v12; // ebp
  unsigned int v13; // r8d
  __int64 v14; // rcx
  _DWORD *v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  const char *v19; // rdx
  __int128 v20; // [rsp+50h] [rbp-158h] BYREF
  int v21; // [rsp+60h] [rbp-148h]

  if ( a5 <= 0x8000 )
  {
    v12 = 0;
    v13 = 48;
    if ( a5 )
      v13 = 4 * a5 + 44;
    v20 = 0LL;
    v21 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v20, this, v13, 0LL, 0LL, 0LL);
    v14 = v20;
    if ( (_QWORD)v20 )
    {
      *(_BYTE *)(v20 + 12) = 0;
      *(_DWORD *)(v14 + 12) &= 0x1FFu;
      *(_QWORD *)v14 = 0LL;
      *(_QWORD *)(v14 + 16) = 5LL;
      *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)(v14 + 36) = a7;
      *(_DWORD *)(v14 + 24) = a3;
      *(_DWORD *)(v14 + 8) = a2;
      *(_DWORD *)(v14 + 28) = a4;
      *(_DWORD *)(v14 + 32) = a5;
      if ( a5 )
      {
        v16 = (_DWORD *)(v14 + 40);
        v17 = a5;
        do
        {
          v18 = (__int64)*a6++;
          *v16++ = *(_DWORD *)(v18 + 20);
          --v17;
        }
        while ( v17 );
      }
      if ( a8 && !DXGADAPTER::IsCoreResourceExclusiveOwner(a8[3]) )
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a8);
        v12 = 1;
      }
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v20, 0LL, 0LL);
      if ( v12 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a8, v19);
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 10681;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate storage for input buffer",
        10681LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v20);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10671;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"NumAllocations is invalid", 10671LL, 0LL, 0LL, 0LL, 0LL);
  }
}
