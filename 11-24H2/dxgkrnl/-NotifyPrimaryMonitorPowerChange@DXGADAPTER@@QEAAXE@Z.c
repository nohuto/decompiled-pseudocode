/*
 * XREFs of ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x140053964
 * Callers:
 *     ?PowerSettingCallback@DXGADAPTER@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1403EDF60 (-PowerSettingCallback@DXGADAPTER@@SAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?ComputeLatencyTolerancesForEngineComponents@DXGADAPTER@@QEAAXXZ @ 0x140042A14 (-ComputeLatencyTolerancesForEngineComponents@DXGADAPTER@@QEAAXXZ.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x14004A484 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyPrimaryMonitorPowerChange(KSPIN_LOCK *this, char a2)
{
  char *v2; // rbx
  int v5; // esi
  __int64 v6; // r8
  bool v7; // zf
  int v8; // [rsp+20h] [rbp-48h]
  _BYTE v9[8]; // [rsp+30h] [rbp-38h] BYREF
  char *v10; // [rsp+38h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+40h] [rbp-28h] BYREF
  char v12; // [rsp+58h] [rbp-10h]

  v2 = (char *)(this + 461);
  v10 = (char *)(this + 461);
  v5 = 0;
  v12 = 0;
  KeAcquireInStackQueuedSpinLock(this + 461, &v11);
  v7 = bTracingEnabled == 0;
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v12 = 1;
  *((_BYTE *)this + 3666) = a2;
  if ( !v7 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
  {
    LOBYTE(v5) = a2 != 0;
    v8 = v5;
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&Dxgk_PrimaryMonitorPowerChange,
      v6,
      this,
      v8);
  }
  this[439] = (KSPIN_LOCK)this + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + 3464;
  DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)this);
  DXGADAPTER::ComputeLatencyTolerancesForEngineComponents((DXGADAPTER *)this);
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v9);
}
