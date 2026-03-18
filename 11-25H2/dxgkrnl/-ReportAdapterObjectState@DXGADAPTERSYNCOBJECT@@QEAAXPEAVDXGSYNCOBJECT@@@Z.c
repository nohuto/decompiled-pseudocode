/*
 * XREFs of ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1403B2DCC
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403B2AAC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 *     ?ReportState@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1403B31E4 (-ReportState@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140049660 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x14004E114 (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpqq_EtwWriteTransfer @ 0x1400575B8 (McTemplateK0ppqqpqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpt_EtwWriteTransfer @ 0x140057B24 (McTemplateK0ppqqpt_EtwWriteTransfer.c)
 *     McTemplateK0ppqqx_EtwWriteTransfer @ 0x14006043C (McTemplateK0ppqqx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqppqi_EtwWriteTransfer @ 0x140078B84 (McTemplateK0ppqqppqi_EtwWriteTransfer.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402FCB50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::ReportAdapterObjectState(
        struct ADAPTER_RENDER **this,
        struct DXGSYNCOBJECT *a2,
        __int64 a3)
{
  __int64 v5; // r9
  const EVENT_DESCRIPTOR *v6; // rdx
  struct ADAPTER_RENDER *v7; // r9
  __int64 v8; // rcx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v10; // rdx

  if ( *((_DWORD *)a2 + 101) == 7 )
  {
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(a2, this[2]);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqqx_EtwWriteTransfer(
        *((unsigned int *)a2 + 76),
        &EventReportNativeFence,
        a3,
        *(_QWORD *)(v10 + 16),
        VidSchSyncObject);
  }
  else
  {
    if ( !bTracingEnabled )
      goto LABEL_7;
    a3 = (__int64)this[4];
    v5 = *((_QWORD *)this[2] + 2);
    switch ( *((_DWORD *)a2 + 52) )
    {
      case 1:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppqqpt_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventReportSynchronizationMutex,
            0LL,
            v5,
            a3,
            4,
            *((_DWORD *)a2 + 53),
            *((unsigned int *)a2 + 70),
            *((_DWORD *)a2 + 54));
        break;
      case 2:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppqqpqq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventReportSemaphore,
            0LL,
            v5,
            a3,
            4,
            *((_DWORD *)a2 + 53),
            *((unsigned int *)a2 + 70),
            *((_DWORD *)a2 + 54),
            *((_DWORD *)a2 + 55));
        break;
      case 3:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          break;
        v6 = (const EVENT_DESCRIPTOR *)&EventReportFence;
LABEL_6:
        McTemplateK0ppqqpx_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, v6, 0LL);
        break;
      case 4:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppqqpx_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventReportCPUNotification,
            0LL,
            v5,
            a3,
            4,
            *((_DWORD *)a2 + 53),
            *((unsigned int *)a2 + 70),
            *((_QWORD *)a2 + 27));
        break;
      case 5:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          break;
        v6 = (const EVENT_DESCRIPTOR *)&EventReportMonitoredFence;
        goto LABEL_6;
      case 6:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppqqppqi_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            &EventReportPeriodicMonitoredFence,
            0LL,
            v5,
            a3,
            4,
            *((_DWORD *)a2 + 53),
            *((unsigned int *)a2 + 70),
            *((unsigned int *)a2 + 54),
            *((_DWORD *)a2 + 55),
            *((_QWORD *)a2 + 28));
        break;
      default:
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1053;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"FALSE", 1053LL, 0LL, 0LL, 0LL, 0LL);
        break;
    }
  }
LABEL_7:
  if ( *((_DWORD *)a2 + 20) && bTracingEnabled )
  {
    v7 = this[4];
    if ( v7 )
      v8 = *((_QWORD *)v7 + 2);
    else
      v8 = 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(v8, &EventReportSyncObject, a3);
  }
}
