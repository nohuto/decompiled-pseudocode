/*
 * XREFs of DpiFdoThermalPassiveCooling @ 0x140247E30
 * Callers:
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1402484C0 (DxgkHandleThermalCoolingDrtEscape.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 */

void __fastcall DpiFdoThermalPassiveCooling(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // r8
  __int64 v7; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 64);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalPassiveCooling, File, 1u, 0x20u);
  if ( v5 >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v2 + 484) )
      DpiCheckForOutstandingD3Requests(v2);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 168), 1u);
    if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0LL) < 0 )
    {
      *(_BYTE *)(*(_QWORD *)(v2 + 5008) + 1LL) = 1;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v7) = a2;
        McTemplateK0pt_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          (__int64)&EventDpiFdoThermalPassiveCooling,
          v6,
          a1,
          v7);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v2 + 5008) + 56LL))(
        *(_QWORD *)(*(_QWORD *)(v2 + 5008) + 16LL),
        a2);
      DpiReleaseCoreSyncAccessSafe(a1, 0LL);
    }
    *(_DWORD *)(*(_QWORD *)(v2 + 5008) + 4LL) = a2;
    if ( *(_BYTE *)(v2 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalPassiveCooling, 0x20u);
  }
  else
  {
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 706;
  }
}
