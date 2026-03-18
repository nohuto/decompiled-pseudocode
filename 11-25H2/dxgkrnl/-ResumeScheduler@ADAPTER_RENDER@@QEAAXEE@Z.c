/*
 * XREFs of ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1402BB188
 * Callers:
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028DA40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402BAC68 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1402D74E8 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140015210 (McTemplateK0pt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1402BC984 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 */

void __fastcall ADAPTER_RENDER::ResumeScheduler(ADAPTER_RENDER *this, unsigned __int8 a2, unsigned __int8 a3)
{
  _QWORD *v4; // rdi
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-18h]

  v4 = (_QWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 189) )
  {
    if ( *(_QWORD *)(*v4 + 3120LL) )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 1008LL))(*((_QWORD *)this + 93));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v12 = *((_DWORD *)this + 189);
        McTemplateK0pt_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          (__int64)&ResumeSchedulerForVidPnSource,
          v7,
          *v4,
          v12);
      }
    }
    *((_DWORD *)this + 189) = 0;
  }
  v8 = *((_QWORD *)this + 93);
  if ( v8 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 92) + 8LL);
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(v9 + 776);
    LOBYTE(v9) = a3;
    v11 = v10(v8, v9);
    if ( v11 < 0 )
    {
      WdLogSingleEntry5(0LL, 275LL, 19LL, *v4, v11, 0LL);
      WdLogGlobalForLineNumber = 3208;
    }
    ADAPTER_RENDER::ResumeVidMmWorkerThread(this, a2, a3);
  }
}
