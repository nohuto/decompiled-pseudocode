/*
 * XREFs of ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1403ABD80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 */

void __fastcall DxgkSetProcessStatus(struct _D3DKMT_PROCESS_STATUS_INTERNAL *a1)
{
  __int64 v2; // rbp
  __int64 ProcessDxgProcess; // rbx
  __int64 v4; // r8
  int v5; // edx
  bool v6; // zf
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  signed __int32 v9; // ett

  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal() + 416)
    || !_InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 415, 1, 1) )
  {
    v2 = *(_QWORD *)a1;
    ProcessDxgProcess = PsGetProcessDxgProcess(*(_QWORD *)a1);
    if ( ProcessDxgProcess )
    {
      if ( *((_DWORD *)a1 + 2) == 1 )
      {
        v5 = 1;
      }
      else
      {
        if ( *((_DWORD *)a1 + 2) != 2 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 4168;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"Invalid DxgProcess state!",
            4168LL,
            0LL,
            0LL,
            0LL,
            0LL);
          return;
        }
        v5 = 2;
      }
      v6 = *((_BYTE *)a1 + 12) == 0;
      _m_prefetchw((const void *)(ProcessDxgProcess + 416));
      v7 = *(_DWORD *)(ProcessDxgProcess + 416);
      if ( v6 )
      {
        v4 = (unsigned int)~v5;
        do
        {
          v9 = v7;
          v7 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 416), v4 & v7, v7);
        }
        while ( v9 != v7 );
        if ( (v7 & v5) == 0 )
          return;
      }
      else
      {
        do
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange((volatile signed __int32 *)(ProcessDxgProcess + 416), v5 | v7, v7);
        }
        while ( v8 != v7 );
        if ( (v7 & v5) != 0 )
          return;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0pt_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          (__int64)&SetProcessStatus,
          v4,
          v2,
          *(_DWORD *)(ProcessDxgProcess + 416));
      _InterlockedAdd((volatile signed __int32 *)(ProcessDxgProcess + 424), 1u);
      if ( _InterlockedExchange((volatile __int32 *)(ProcessDxgProcess + 420), 1) )
        _InterlockedDecrement((volatile signed __int32 *)(ProcessDxgProcess + 424));
      else
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(*(_QWORD *)(ProcessDxgProcess + 64) + 48LL), CriticalWorkQueue);
    }
  }
}
