/*
 * XREFs of ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1401E8678
 * Callers:
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x140408694 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004C16C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z @ 0x1400547F0 (-VidMmSuspendResumeDevice@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@_N1@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1403D95D4 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
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
    WdLogGlobalForLineNumber = 2736;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      2736LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2738;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDxgAdapter", 2738LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !(unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( this[28] == KeGetCurrentThread() )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( this[28] != KeGetCurrentThread() )
  {
LABEL_9:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2739;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DeviceCreationLock.IsExclusiveOwner()",
      2739LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_10:
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
