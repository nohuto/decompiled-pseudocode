/*
 * XREFs of ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1402C8AD8
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14028FB10 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x1402CACD4 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x14002F1A0 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003E6D0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1402C8C30 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendScheduler(DXGADAPTER **this, char a2, __int64 a3)
{
  char v3; // si
  ADAPTER_RENDER *v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(DXGADAPTER **, __int64, __int64); // rax
  __int64 v9; // r9
  __int64 v11; // r9

  v3 = a3;
  v5 = (ADAPTER_RENDER *)this;
  if ( *((_DWORD *)this + 189) && DXGADAPTER::IsDxgmms2(this[2]) )
  {
    WdLogSingleEntry5(0LL, 275LL, 39LL, this, v11, 0LL);
    WdLogGlobalForLineNumber = 3106;
  }
  v6 = 0;
  if ( !*((_QWORD *)v5 + 96) )
    goto LABEL_14;
  LOBYTE(a3) = a2;
  ADAPTER_RENDER::SuspendVidMmWorkerThread(v5, (unsigned int)(v3 != 0) + 1, a3);
  this = (DXGADAPTER **)*((_QWORD *)v5 + 93);
  if ( !this
    || (LOBYTE(a3) = v3 != 0,
        v7 = *(_QWORD *)(*((_QWORD *)v5 + 92) + 8LL),
        v8 = *(__int64 (__fastcall **)(DXGADAPTER **, __int64, __int64))(v7 + 768),
        LOBYTE(v7) = a2,
        v6 = v8(this, v7, a3),
        v6 >= 0) )
  {
LABEL_14:
    v9 = *((_QWORD *)v5 + 2);
    *((_DWORD *)v5 + 189) = 0xFFFF;
    if ( *(_QWORD *)(v9 + 3120) )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pqtqq_EtwWriteTransfer((__int64)this, &FlushPresentReferencesAndDisableOverlays, a3);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(*((_QWORD *)v5 + 92) + 8LL) + 1000LL))(
        *((_QWORD *)v5 + 93),
        0LL,
        *((unsigned int *)v5 + 189),
        0LL,
        *((_DWORD *)v5 + 189));
    }
  }
  return (unsigned int)v6;
}
