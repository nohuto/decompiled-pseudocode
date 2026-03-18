/*
 * XREFs of ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x140030FDC
 * Callers:
 *     ?PowerSettingCallback@DXGADAPTER@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1403F4060 (-PowerSettingCallback@DXGADAPTER@@SAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1400310E0 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x14003124C (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     ?ComputeLatencyTolerancesForEngineComponents@DXGADAPTER@@QEAAXXZ @ 0x14003129C (-ComputeLatencyTolerancesForEngineComponents@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyPrimaryMonitorPowerChange(DXGADAPTER *this, char a2)
{
  int v3; // edi
  __int64 v5; // r8
  bool v6; // zf
  int v7; // [rsp+20h] [rbp-48h]
  _BYTE v8[8]; // [rsp+30h] [rbp-38h] BYREF
  char *v9; // [rsp+38h] [rbp-30h]
  char v10; // [rsp+58h] [rbp-10h]

  v9 = (char *)this + 3688;
  v3 = 0;
  v10 = 0;
  DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v8);
  v6 = bTracingEnabled == 0;
  *((_BYTE *)this + 3666) = a2;
  if ( !v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
  {
    LOBYTE(v3) = a2 != 0;
    v7 = v3;
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&Dxgk_PrimaryMonitorPowerChange,
      v5,
      this,
      v7);
  }
  *((_QWORD *)this + 439) = (char *)this + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFD0uLL) + 3464;
  DXGADAPTER::UpdateLatencyTolerances(this);
  DXGADAPTER::ComputeLatencyTolerancesForEngineComponents(this);
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v8);
}
