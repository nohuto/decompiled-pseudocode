/*
 * XREFs of ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x14009AE04
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093E90 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1400953B8 (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140038248 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x14003B240 (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     RtlStringCbPrintfW @ 0x14003FF68 (RtlStringCbPrintfW.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x14009ACF8 (-CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_AD.c)
 */

__int64 __fastcall VIDMM_PARTITION::EnsureAdapter(VIDMM_PARTITION *this, unsigned int **a2)
{
  struct VIDMM_PARTITION_ADAPTER_INFO *AdapterInfo; // rax
  unsigned int v5; // ebx
  struct VIDMM_PARTITION_ADAPTER_INFO *v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  NTSTATUS v11; // edi
  wchar_t *v12; // r15
  unsigned int i; // r14d
  unsigned int *v14; // r9
  PPCW_INSTANCE *v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  PPCW_DATA Data; // [rsp+20h] [rbp-88h]
  __int64 v20; // [rsp+28h] [rbp-80h]
  __int64 v21; // [rsp+30h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-58h] BYREF
  struct _PCW_DATA v23; // [rsp+60h] [rbp-48h] BYREF
  struct _PCW_DATA v24; // [rsp+70h] [rbp-38h] BYREF

  AdapterInfo = VIDMM_PARTITION::GetAdapterInfo(this, (struct VIDMM_GLOBAL *)a2);
  v5 = 0;
  v6 = AdapterInfo;
  if ( *((_QWORD *)AdapterInfo + 1) )
    return 0LL;
  v7 = *((unsigned int *)a2 + 1736);
  if ( (unsigned int)v7 <= 1 )
  {
    *((_QWORD *)AdapterInfo + 3) = (char *)AdapterInfo + 32;
    if ( (_DWORD)v7 )
      memset((char *)AdapterInfo + 32, 0, 344 * v7);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x158 )
    {
LABEL_8:
      _InterlockedAdd(&dword_1400817E8, 1u);
      WdLogSingleEntry0(6LL);
      v9 = 455;
LABEL_9:
      WdLogGlobalForLineNumber = v9;
      DxgkLogInternalTriageEvent(v8, 262145LL);
      return 3221225495LL;
    }
    *((_QWORD *)AdapterInfo + 3) = ExAllocatePool2(64LL, 344LL * (unsigned int)v7, 1647405398LL);
  }
  *((_DWORD *)v6 + 94) = v7;
  if ( !*((_QWORD *)v6 + 3) )
    goto LABEL_8;
  *((_QWORD *)v6 + 1) = a2;
  *(_QWORD *)v6 = this;
  VIDMM_GLOBAL::CalculatePartitionAdapterBudgets((VIDMM_GLOBAL *)a2, this, v6);
  v11 = 0;
  v12 = (wchar_t *)operator new[](520LL, 0x4B677844u, 258LL);
  if ( !v12 )
  {
    _InterlockedAdd(&dword_140081850, 1u);
    WdLogSingleEntry0(6LL);
    v9 = 468;
    goto LABEL_9;
  }
  for ( i = 0; i < *((_DWORD *)a2 + 1736); ++i )
  {
    v14 = a2[3];
    LODWORD(v21) = *((_DWORD *)this + 8);
    LODWORD(v20) = i;
    v15 = (PPCW_INSTANCE *)(*(_QWORD *)(384LL * v14[60] + *((_QWORD *)this + 5) + 24) + 344LL * i);
    DestinationString = 0LL;
    LODWORD(Data) = v14[103];
    v11 = RtlStringCbPrintfW(v12, 0x208uLL, L"luid_0x%08X_0x%08X_phys_%u_part_%u", v14[104], Data, v20, v21);
    if ( v11 < 0 )
    {
      WdLogSingleEntry0(1LL);
      v17 = 488;
      v18 = 0x40000LL;
      goto LABEL_24;
    }
    RtlInitUnicodeString(&DestinationString, v12);
    if ( *(_DWORD *)v15 )
    {
      if ( *(_DWORD *)v15 == 1 )
      {
        v24.Data = v15;
        v24.Size = 344;
        v11 = PcwCreateInstance(v15 + 42, GpuPerformanceCounterSetNonLocalAdapterMemory, &DestinationString, 1u, &v24);
        if ( v11 < 0 )
        {
          _InterlockedAdd(&dword_140081850, 1u);
          WdLogSingleEntry0(6LL);
          v17 = 507;
LABEL_18:
          v18 = 262145LL;
LABEL_24:
          WdLogGlobalForLineNumber = v17;
          DxgkLogInternalTriageEvent(v16, v18);
          break;
        }
      }
    }
    else
    {
      v23.Data = v15;
      v23.Size = 344;
      v11 = PcwCreateInstance(v15 + 42, GpuPerformanceCounterSetLocalAdapterMemory, &DestinationString, 1u, &v23);
      if ( v11 < 0 )
      {
        _InterlockedAdd(&dword_140081850, 1u);
        WdLogSingleEntry0(6LL);
        v17 = 498;
        goto LABEL_18;
      }
    }
  }
  operator delete(v12);
  if ( v11 < 0 )
    return (unsigned int)v11;
  return v5;
}
