/*
 * XREFs of ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x14035D9E8
 * Callers:
 *     DxgkQueryStatisticsInternal @ 0x140295A90 (DxgkQueryStatisticsInternal.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     McTemplateK0pqqxxxqqqx_EtwWriteTransfer @ 0x1400520D4 (McTemplateK0pqqxxxqqqx_EtwWriteTransfer.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::GetNodePerfData(DXGADAPTER *this, struct _D3DKMT_NODE_PERFDATA *a2)
{
  __int64 PhysicalAdapterIndex; // r13
  __int64 NodeOrdinal; // r12
  unsigned __int16 *v6; // r15
  __int64 v7; // rax
  _QWORD *v8; // rdi
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // r12d
  bool v15; // zf
  __int64 result; // rax
  __int64 v17; // [rsp+70h] [rbp-19h]
  struct _DXGKARG_QUERYADAPTERINFO v18; // [rsp+78h] [rbp-11h] BYREF
  int v19; // [rsp+F8h] [rbp+6Fh] BYREF
  int v20; // [rsp+100h] [rbp+77h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+108h] [rbp+7Fh] BYREF

  if ( !a2
    || (PhysicalAdapterIndex = a2->PhysicalAdapterIndex, (unsigned int)PhysicalAdapterIndex >= *((_DWORD *)this + 74)) )
  {
    WdLogSingleEntry1(3LL, this);
    WdLogGlobalForLineNumber = 11939;
    return 3221225485LL;
  }
  NodeOrdinal = a2->NodeOrdinal;
  v20 = NodeOrdinal;
  v6 = (unsigned __int16 *)(*((_QWORD *)this + 374) + 344 * PhysicalAdapterIndex);
  if ( (unsigned int)NodeOrdinal >= *v6 )
  {
    WdLogSingleEntry1(3LL, this);
    WdLogGlobalForLineNumber = 11949;
    return 3221225485LL;
  }
  v7 = *((_QWORD *)v6 + 13);
  if ( v7 && *((_QWORD *)v6 + 14) )
  {
    PerformanceFrequency.QuadPart = 0LL;
    v17 = NodeOrdinal;
    v8 = (_QWORD *)(v7 + 44 * NodeOrdinal);
    v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v10 = v9;
    if ( bTracingEnabled
      || *((_DWORD *)this + 40) != 1
      && 1000 * (v9.QuadPart - *(_QWORD *)(*((_QWORD *)v6 + 14) + 8 * NodeOrdinal)) / PerformanceFrequency.QuadPart >= 450 )
    {
      *(_QWORD *)&v18.Type = 24LL;
      *(_QWORD *)&v18.InputDataSize = 4LL;
      v19 = NodeOrdinal | ((_DWORD)PhysicalAdapterIndex << 16);
      *(_QWORD *)&v18.Flags.0 = 0LL;
      v18.pInputData = &v19;
      HIDWORD(v18.hKmdProcessHandle) = 0;
      v18.pOutputData = v8;
      v18.OutputDataSize = 44;
      v11 = DXGADAPTER::DdiQueryAdapterInfo(this, &v18);
      v14 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry2(3LL, this, v11);
        WdLogGlobalForLineNumber = 11993;
        return v14;
      }
      v15 = bTracingEnabled == 0;
      *(LARGE_INTEGER *)(*((_QWORD *)v6 + 14) + 8 * v17) = v10;
      if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0pqqxxxqqqx_EtwWriteTransfer(
          *(_QWORD *)((char *)v8 + 36),
          v12,
          v13,
          this,
          v20,
          PhysicalAdapterIndex,
          *v8,
          v8[1],
          v8[2],
          *((_DWORD *)v8 + 6),
          *((_DWORD *)v8 + 7),
          *((_DWORD *)v8 + 8),
          *(_QWORD *)((char *)v8 + 36));
    }
    else
    {
      v14 = 0;
    }
    a2->Frequency = *v8;
    a2->MaxFrequency = v8[1];
    a2->MaxFrequencyOC = v8[2];
    a2->Voltage = *((_DWORD *)v8 + 6);
    a2->VoltageMax = *((_DWORD *)v8 + 7);
    a2->VoltageMaxOC = *((_DWORD *)v8 + 8);
    a2->MaxTransitionLatency = *(_QWORD *)((char *)v8 + 36);
    return v14;
  }
  WdLogSingleEntry1(3LL, this);
  result = 3221225659LL;
  WdLogGlobalForLineNumber = 11956;
  return result;
}
