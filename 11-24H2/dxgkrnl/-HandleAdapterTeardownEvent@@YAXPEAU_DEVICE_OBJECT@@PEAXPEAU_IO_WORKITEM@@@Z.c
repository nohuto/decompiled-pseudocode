/*
 * XREFs of ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x14018F7F0
 * Callers:
 *     ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x140065B50 (-NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall HandleAdapterTeardownEvent(PVOID IoObject, _DWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-58h]
  int v8; // [rsp+28h] [rbp-50h]
  int v9; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+54h] [rbp-24h]
  int v11; // [rsp+5Ch] [rbp-1Ch]
  __int64 v12; // [rsp+60h] [rbp-18h]
  __int64 v13; // [rsp+68h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 364);
  WdLogSingleEntry3(4LL, *(_QWORD *)Context, (unsigned int)Context[2], (unsigned int)Context[3]);
  WdLogGlobalForLineNumber = 2342;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v8 = Context[3];
    v7 = Context[2];
    McTemplateK0pqq_EtwWriteTransfer(v5, (__int64)&HardwareContentProtectionTeardown, v6, *(_QWORD *)Context, v7, v8);
  }
  v10 = 0LL;
  v11 = 0;
  v13 = 0LL;
  v9 = 11;
  v12 = 1LL;
  SMgrGdiCallout(&v9, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
  if ( (int)ZwUpdateWnfStateData(
              &WNF_DX_HARDWARE_CONTENT_PROTECTION_TILT_NOTIFICATION,
              Context + 4,
              8LL,
              0LL,
              0LL,
              0,
              0) < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2374;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Hardware content protection teardown notification failed",
      2374LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
