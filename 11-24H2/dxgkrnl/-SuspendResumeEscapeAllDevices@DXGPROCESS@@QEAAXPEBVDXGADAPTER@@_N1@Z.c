/*
 * XREFs of ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1401EE050
 * Callers:
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x140400F4C (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004BC20 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z @ 0x140054440 (-VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1403D2690 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::SuspendResumeEscapeAllDevices(
        struct _KTHREAD **this,
        const struct DXGADAPTER *a2,
        char a3,
        char a4)
{
  struct _KTHREAD *v8; // rdi
  __int64 v9; // r8
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v11; // rbx
  _QWORD v12[2]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v13[16]; // [rsp+60h] [rbp-28h] BYREF

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2737;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      2737LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2739;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pDxgAdapter", 2739LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[28] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2740;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_DeviceCreationLock.IsExclusiveOwner()",
      2740LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = this[40];
  v12[0] = this + 40;
  while ( 1 )
  {
    v12[1] = v8;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v12);
    v11 = Current;
    if ( !Current )
      break;
    if ( *(const struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL) == a2 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13, Current);
      if ( a3 )
        DXGDEVICE::FlushPagingQueues(v11);
      LOBYTE(v9) = a3;
      VIDMM_EXPORT::VidMmSuspendResumeDevice(
        *(VIDMM_EXPORT **)(*((_QWORD *)v11 + 2) + 760LL),
        *((struct VIDMM_DEVICE **)v11 + 99),
        v9,
        a4);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13);
    }
    v8 = *(struct _KTHREAD **)v8;
  }
}
