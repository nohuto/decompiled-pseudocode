/*
 * XREFs of ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x140100C64
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400C05B0 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x14003AF08 (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0pptqx_EtwWriteTransfer @ 0x140047600 (McTemplateK0pptqx_EtwWriteTransfer.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?ReportState@VIDMM_DEVICE@@QEAAXXZ @ 0x140100D78 (-ReportState@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReportPagingProcessState(VIDMM_GLOBAL *this)
{
  __int64 i; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // [rsp+28h] [rbp-A0h]
  __int64 v7; // [rsp+30h] [rbp-98h]
  _QWORD v8[14]; // [rsp+50h] [rbp-78h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1736); i = (unsigned int)(i + 1) )
  {
    v3 = *((_QWORD *)this + i + 740);
    if ( *(_DWORD *)(v3 + 48) == 7 )
    {
      memset(v8, 0, sizeof(v8));
      if ( (byte_140081241 & 1) != 0 )
      {
        LODWORD(v7) = v8[2];
        LODWORD(v6) = 4;
        McTemplateK0pptqx_EtwWriteTransfer(v4, &EventReportNativeFence, v5, *((_QWORD *)this + 3), v3, v6, v7, v8[0]);
      }
    }
    else
    {
      memset(v8, 0, 0x50uLL);
      if ( bTracingEnabled && (byte_140081241 & 1) != 0 )
      {
        LODWORD(v7) = HIDWORD(v8[0]);
        LODWORD(v6) = 4;
        McTemplateK0ppqqpx_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventReportMonitoredFence,
          0LL,
          *((_QWORD *)this + 3),
          v3,
          v6,
          v7,
          0LL,
          v8[1]);
      }
    }
  }
  VIDMM_DEVICE::ReportState(*((VIDMM_DEVICE **)this + 5049));
}
