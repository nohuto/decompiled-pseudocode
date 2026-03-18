/*
 * XREFs of ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1402170D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400456A8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x140054F44 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ResumeDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x140216AE8 (-ResumeDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 *     ?SuspendDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x140216FEC (-SuspendDevices@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 *     ?PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAX_N@Z @ 0x14021E6AC (-PauseChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAX_N@Z.c)
 *     ?ResumeChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ @ 0x14021E724 (-ResumeChannel@DXG_VMBUS_CHANNEL_BASE@@QEAAXXZ.c)
 *     ?VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ @ 0x1403CB7B4 (-VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ.c)
 *     ?VgpuTraceFrequentWrite@@YAXEJPEAXPEBG1ZZ @ 0x1403E4D38 (-VgpuTraceFrequentWrite@@YAXEJPEAXPEBG1ZZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::VirtualGpuDriverEscape(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGK_VIRTUALGPUDRIVERESCAPE *a2)
{
  unsigned __int64 InputBufferSize; // r8
  unsigned int v5; // r14d
  const wchar_t *v6; // r9
  __int64 v7; // rax
  int *pInputBuffer; // rsi
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 *i; // rax
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rax
  ULONG OutputBufferSize; // eax
  int v17; // eax
  PVOID pOutputBuffer; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+5Ch] [rbp-14h]
  int v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+64h] [rbp-Ch]

  InputBufferSize = a2->InputBufferSize;
  v5 = 0;
  if ( (unsigned int)InputBufferSize < 0xC )
  {
    WdLogSingleEntry1(2LL, (unsigned int)InputBufferSize);
    v6 = L"Invalid input buffer size: 0x%I64x";
    WdLogGlobalForLineNumber = 456;
LABEL_3:
    v7 = a2->InputBufferSize;
LABEL_4:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v6, v7, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  pInputBuffer = (int *)a2->pInputBuffer;
  v10 = pInputBuffer[2];
  switch ( (_DWORD)v10 )
  {
    case 0:
      if ( (unsigned int)InputBufferSize < 0x14 )
      {
        WdLogSingleEntry1(2LL, InputBufferSize);
        v6 = L"Invalid input buffer size to read PCI config: 0x%I64x";
        WdLogGlobalForLineNumber = 466;
        goto LABEL_3;
      }
      OutputBufferSize = a2->OutputBufferSize;
      if ( OutputBufferSize < pInputBuffer[4] )
      {
        WdLogSingleEntry1(2LL, OutputBufferSize);
        v7 = a2->OutputBufferSize;
        v6 = L"Invalid output buffer size to read PCI config: 0x%I64x";
        WdLogGlobalForLineNumber = 472;
        goto LABEL_4;
      }
      pOutputBuffer = a2->pOutputBuffer;
      v19 = *((_DWORD *)this + 6);
      v22 = 0;
      v20 = pInputBuffer[3];
      v21 = pInputBuffer[4];
      v17 = (*(__int64 (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, PVOID *))(*(_QWORD *)this + 48LL))(
              this,
              &pOutputBuffer);
      v5 = v17;
      if ( bTracingEnabled )
        VgpuTraceFrequentRead(
          1u,
          v17,
          this,
          L"DXGKVGPU_ESCAPE_TYPE_READ_PCI_CONFIG",
          (wchar_t *)L"(offset, size) %d %d",
          pInputBuffer[3],
          pInputBuffer[4]);
      return v5;
    case 1:
      if ( (unsigned int)InputBufferSize >= 0x14 )
      {
        v15 = (unsigned int)pInputBuffer[4];
        if ( (unsigned int)v15 < 0xFFFF && InputBufferSize >= v15 + 20 )
        {
          v22 = 0;
          pOutputBuffer = pInputBuffer + 5;
          v19 = *((_DWORD *)this + 6);
          v20 = pInputBuffer[3];
          v21 = pInputBuffer[4];
          v5 = (*(__int64 (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, PVOID *))(*(_QWORD *)this + 56LL))(
                 this,
                 &pOutputBuffer);
          if ( bTracingEnabled )
            VgpuTraceFrequentWrite(
              1u,
              v5,
              this,
              L"DXGKVGPU_ESCAPE_TYPE_WRITE_PCI_CONFIG",
              (wchar_t *)L"(offset, size)  %d %d",
              pInputBuffer[3],
              pInputBuffer[4]);
          return v5;
        }
        WdLogSingleEntry1(2LL, InputBufferSize);
        WdLogGlobalForLineNumber = 497;
      }
      else
      {
        WdLogSingleEntry1(2LL, InputBufferSize);
        WdLogGlobalForLineNumber = 491;
      }
      v6 = L"Invalid input buffer size to write PCI config: 0x%I64x";
      goto LABEL_3;
    case 2:
      if ( (unsigned int)InputBufferSize >= 0x1C )
      {
        if ( *((_BYTE *)this + 172) )
        {
          WdLogSingleEntry1(2LL, this);
          WdLogGlobalForLineNumber = 531;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"DXGKVGPU_ESCAPE_TYPE_INITIALIZE called twice for vGPU 0x%I64x",
            (__int64)this,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        if ( bTracingEnabled )
          VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_INITIALIZE", 0LL);
        *((_BYTE *)this + 172) = 1;
        *((_OWORD *)this + 22) = *(_OWORD *)((char *)a2->pInputBuffer + 12);
        return v5;
      }
      WdLogSingleEntry1(2LL, InputBufferSize);
      WdLogGlobalForLineNumber = 526;
LABEL_39:
      v6 = L"Invalid input/output buffer size: 0x%I64x";
      goto LABEL_3;
    case 3:
      if ( bTracingEnabled )
        VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_RELEASE", 0LL);
      *((_BYTE *)this + 172) = 0;
      return v5;
    case 4:
      if ( a2->OutputBufferSize == 4 )
      {
        *(_DWORD *)a2->pOutputBuffer = 1;
        return v5;
      }
      WdLogSingleEntry1(2LL, InputBufferSize);
      WdLogGlobalForLineNumber = 516;
      goto LABEL_39;
    case 5:
      if ( (unsigned int)InputBufferSize >= 0x10 )
      {
        v13 = bTracingEnabled == 0;
        v14 = pInputBuffer[3];
        *((_DWORD *)this + 42) = v14;
        if ( !v13 )
          VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_POWERTRANSITIONCOMPLETE", (wchar_t *)L"%d", v14);
        return v5;
      }
      WdLogSingleEntry1(2LL, InputBufferSize);
      WdLogGlobalForLineNumber = 564;
      goto LABEL_39;
    case 6:
      if ( (unsigned int)InputBufferSize < 0x18 )
      {
        WdLogSingleEntry1(2LL, InputBufferSize);
        v6 = L"Invalid input/output buffer size for DXGKVGPU_ESCAPE_TYPE_PAUSE: 0x%I64x";
        WdLogGlobalForLineNumber = 578;
        goto LABEL_3;
      }
      if ( bTracingEnabled )
        VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_PAUSE", 0LL);
      if ( (pInputBuffer[5] & 1) == 0 )
      {
        DXGK_VIRTUAL_GPU_PARAV::SuspendDevices(this);
        DXG_VMBUS_CHANNEL_BASE::PauseChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 176), 0);
        v11 = *((_QWORD *)this + 13);
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
          (DXGAUTOPUSHLOCKSHARED *)&pOutputBuffer,
          (struct _KTHREAD **)(v11 + 96));
        for ( i = *(__int64 **)(v11 + 40); i != (__int64 *)(v11 + 40); i = (__int64 *)*i )
        {
          if ( *((_BYTE *)i + 16) && !*((_BYTE *)i + 110) )
          {
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&pOutputBuffer);
            return v5;
          }
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&pOutputBuffer);
        DXG_VMBUS_CHANNEL_BASE::PauseChannel((DXG_VMBUS_CHANNEL_BASE *)(v11 + 160), 0);
      }
      break;
    case 7:
      if ( (unsigned int)InputBufferSize < 0x18 )
      {
        WdLogSingleEntry1(2LL, InputBufferSize);
        v6 = L"Invalid input/output buffer size for DXGKVGPU_ESCAPE_TYPE_RESUME: 0x%I64x";
        WdLogGlobalForLineNumber = 634;
        goto LABEL_3;
      }
      if ( bTracingEnabled )
        VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_RESUME", 0LL);
      DXG_VMBUS_CHANNEL_BASE::ResumeChannel((DXG_VMBUS_CHANNEL_BASE *)(*((_QWORD *)this + 13) + 160LL));
      DXG_VMBUS_CHANNEL_BASE::ResumeChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 176));
      DXGK_VIRTUAL_GPU_PARAV::ResumeDevices(this);
      break;
    default:
      WdLogSingleEntry1(2LL, v10);
      v7 = pInputBuffer[2];
      v6 = L"Invalid escape type: 0x%I64x";
      WdLogGlobalForLineNumber = 647;
      goto LABEL_4;
  }
  return v5;
}
