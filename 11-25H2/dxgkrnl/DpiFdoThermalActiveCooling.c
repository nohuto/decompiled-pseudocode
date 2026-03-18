/*
 * XREFs of DpiFdoThermalActiveCooling @ 0x140247CB0
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

void __fastcall DpiFdoThermalActiveCooling(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  int v3; // esi
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = a2;
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalActiveCooling, File, 1u, 0x20u);
  if ( v5 >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v2 + 484) )
      DpiCheckForOutstandingD3Requests(v2);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 168), 1u);
    if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0LL) < 0 )
    {
      **(_BYTE **)(v2 + 5008) = 1;
    }
    else
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      {
        LODWORD(v8) = v3;
        McTemplateK0pt_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          (__int64)&EventDpiFdoThermalActiveCooling,
          v7,
          a1,
          v8);
      }
      LOBYTE(v6) = v3;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v2 + 5008) + 48LL))(
        *(_QWORD *)(*(_QWORD *)(v2 + 5008) + 16LL),
        v6);
      DpiReleaseCoreSyncAccessSafe(a1, 0LL);
    }
    *(_BYTE *)(*(_QWORD *)(v2 + 5008) + 2LL) = v3;
    if ( *(_BYTE *)(v2 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalActiveCooling, 0x20u);
  }
  else
  {
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 602;
  }
}
