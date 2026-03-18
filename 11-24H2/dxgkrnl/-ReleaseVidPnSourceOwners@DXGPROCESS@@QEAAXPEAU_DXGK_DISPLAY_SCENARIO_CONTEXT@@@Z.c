/*
 * XREFs of ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C5210
 * Callers:
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1401EF060 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x140031A00 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003503C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004BC20 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401BA340 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall DXGPROCESS::ReleaseVidPnSourceOwners(struct _KTHREAD **this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  char *v4; // rsi
  struct _KTHREAD *v5; // r14
  ADAPTER_DISPLAY **v6; // rdi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v8; // rbx
  __int128 v9; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v10[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v11[144]; // [rsp+70h] [rbp-90h] BYREF

  if ( this[16] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3426;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsMutexOwner()", 3426LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = (char *)(this + 27);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 27, 0LL);
  this[28] = KeGetCurrentThread();
  v5 = this[40];
  *(_QWORD *)&v9 = this + 40;
  while ( 1 )
  {
    *((_QWORD *)&v9 + 1) = v5;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v9);
    v8 = Current;
    if ( !Current )
      break;
    v6 = (ADAPTER_DISPLAY **)*((_QWORD *)Current + 237);
    if ( v6 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v10, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, (struct DXGADAPTER *const)v6, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL) >= 0 )
      {
        if ( !v6[390] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3462;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"pDisplayAdapter->IsDisplayAdapter()",
            3462LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v6[390], v8)
          || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v6[390], v8) )
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v11);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds(v8, a2, 0);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v10);
    }
    v5 = *(struct _KTHREAD **)v5;
  }
  v9 = 0LL;
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
