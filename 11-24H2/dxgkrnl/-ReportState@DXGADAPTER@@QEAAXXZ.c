/*
 * XREFs of ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403A3D80
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403A35BC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013524 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003E6D0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqxx_EtwWriteTransfer @ 0x140059D34 (McTemplateK0pqqqxx_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqjzqqx_EtwWriteTransfer @ 0x14005FF70 (McTemplateK0pqqqqjzqqx_EtwWriteTransfer.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer @ 0x140066500 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140306840 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DpiBrightnessReportState@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1403A4530 (-DpiBrightnessReportState@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiReportAdapter @ 0x1403A45AC (DpiReportAdapter.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1403A4870 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1403B56B0 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1403F2A08 (-ReportState@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReportState(DXGADAPTER *this)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  int *AdapterType; // rax
  unsigned int v5; // r9d
  __int64 v6; // rcx
  unsigned int *v7; // rsi
  __int64 v8; // r8
  wchar_t *v9; // r15
  unsigned int v10; // ebp
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int i; // r14d
  unsigned int j; // ebp
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int *v18; // rdi
  int v19; // r15d
  unsigned int k; // r14d
  __int64 v21; // r8
  ADAPTER_DISPLAY *v22; // rcx
  ADAPTER_RENDER *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // [rsp+20h] [rbp-128h]
  __int64 v27; // [rsp+20h] [rbp-128h]
  __int64 v28; // [rsp+20h] [rbp-128h]
  __int64 v29; // [rsp+28h] [rbp-120h]
  __int64 v30; // [rsp+28h] [rbp-120h]
  __int64 v31; // [rsp+28h] [rbp-120h]
  __int64 v32; // [rsp+30h] [rbp-118h]
  __int64 v33; // [rsp+30h] [rbp-118h]
  __int64 v34; // [rsp+30h] [rbp-118h]
  __int64 v35; // [rsp+38h] [rbp-110h]
  __int64 v36; // [rsp+50h] [rbp-F8h]
  __int64 v37; // [rsp+58h] [rbp-F0h]
  int v38; // [rsp+C0h] [rbp-88h]
  int v39; // [rsp+D8h] [rbp-70h]
  struct _UNICODE_STRING v40; // [rsp+100h] [rbp-48h] BYREF
  struct _STRING DestinationString; // [rsp+110h] [rbp-38h] BYREF
  int v42; // [rsp+150h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10260;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner()",
      10260LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( bTracingEnabled )
  {
    v2 = *(_QWORD *)((char *)this + 4772);
    v3 = *((_QWORD *)this + 36);
    AdapterType = DXGADAPTER::GetAdapterType(this, &v42);
    v5 = *((_DWORD *)this + 613);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
    {
      v6 = v5 >> 14;
      LOBYTE(v6) = v6 & 7;
      McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer(
        v6,
        &EventReportAdapter,
        v5 >> 31,
        *((_QWORD *)this + 27),
        (char)this,
        *((_DWORD *)this + 464),
        *((_QWORD *)this + 300),
        *((_DWORD *)this + 602),
        *((_QWORD *)this + 302),
        *((_DWORD *)this + 606),
        *((_DWORD *)this + 607),
        *((_DWORD *)this + 609),
        *((_DWORD *)this + 610),
        *((_DWORD *)this + 611),
        *((_DWORD *)this + 614),
        *((_DWORD *)this + 608),
        *((_DWORD *)this + 612),
        v5,
        (v5 >> 10) & 0xF,
        v6,
        (v5 >> 17) & 7,
        (v5 & 0x80000000) != 0,
        *((_DWORD *)this + 615),
        *((_DWORD *)this + 616),
        v38,
        *((_DWORD *)this + 618),
        *((_DWORD *)this + 619),
        v39,
        *((_DWORD *)this + 842),
        *AdapterType,
        v3,
        v2);
    }
  }
  DpiReportAdapter(*((_QWORD *)this + 27), this);
  if ( bTracingEnabled )
  {
    v7 = (unsigned int *)((char *)this + 3368);
    if ( *((_DWORD *)this + 842) )
    {
      v40 = 0LL;
      v9 = (wchar_t *)operator new[](0x50uLL, 0x4B677844u, 256LL);
      if ( v9 )
      {
        v10 = 0;
        if ( *v7 )
        {
          do
          {
            DestinationString = 0LL;
            v11 = *((_QWORD *)this + 403) + 520LL * v10;
            RtlInitAnsiString(&DestinationString, (PCSZ)(v11 + 236));
            *(_QWORD *)&v40.Length = 5242880LL;
            v40.Buffer = v9;
            if ( RtlAnsiStringToUnicodeString(&v40, &DestinationString, 0) < 0 )
              RtlInitUnicodeString(&v40, L"Unknown");
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
            {
              LODWORD(v37) = *(_DWORD *)(v11 + 344);
              LODWORD(v36) = *(_DWORD *)(v11 + 216);
              LODWORD(v35) = *(_DWORD *)(v11 + 8);
              LODWORD(v32) = *(_DWORD *)(v11 + 212);
              LODWORD(v29) = *(_DWORD *)(v11 + 208);
              LODWORD(v26) = v10;
              McTemplateK0pqqqqjzqqx_EtwWriteTransfer(
                v11 + 220,
                v12,
                v13,
                this,
                v26,
                v29,
                v32,
                v35,
                v11 + 220,
                v40.Buffer,
                v36,
                v37,
                *(_QWORD *)(v11 + 368));
            }
            for ( i = 0; i < *(_DWORD *)(v11 + 8); ++i )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
              {
                LODWORD(v32) = *(_DWORD *)(v11 + 24LL * i + 32);
                LODWORD(v29) = i;
                LODWORD(v26) = v10;
                McTemplateK0pqqqxx_EtwWriteTransfer(
                  3LL * i,
                  v12,
                  v13,
                  this,
                  v26,
                  v29,
                  v32,
                  *(_QWORD *)(v11 + 24LL * i + 16),
                  *(_QWORD *)(v11 + 24LL * i + 24));
              }
            }
            ++v10;
          }
          while ( v10 < *v7 );
          v7 = (unsigned int *)((char *)this + 3368);
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
      }
      for ( j = 0; j < *v7; ++j )
      {
        v16 = 520LL * j;
        v17 = *((_QWORD *)this + 403);
        v18 = *(unsigned int **)(v16 + v17 + 512);
        if ( v18 )
        {
          v19 = *(_DWORD *)(v16 + v17 + 212);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
          {
            LODWORD(v35) = v18[48];
            LODWORD(v32) = *v18;
            LODWORD(v29) = *(_DWORD *)(v16 + v17 + 212);
            LODWORD(v26) = j;
            McTemplateK0pqtqq_EtwWriteTransfer(v16, &Dxgk_PowerPStateComponent, v8, this, v26, v29, v32, v35);
          }
          for ( k = 0; k < *v18; ++k )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
            {
              LODWORD(v32) = v18[k + 1];
              LODWORD(v29) = k;
              LODWORD(v26) = v19;
              McTemplateK0pqtq_EtwWriteTransfer((unsigned int)v32, &Dxgk_PowerPState, v8, this, v26, v29, v32);
            }
          }
        }
      }
    }
  }
  DpiBrightnessReportState(*((struct _DEVICE_OBJECT **)this + 27));
  v22 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 390);
  if ( v22 )
    ADAPTER_DISPLAY::ReportState(v22);
  v23 = (ADAPTER_RENDER *)*((_QWORD *)this + 391);
  if ( v23 )
    ADAPTER_RENDER::ReportState(v23);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v32) = (**((_DWORD **)this + 376) >> 15) & 3;
    LODWORD(v29) = (**((_DWORD **)this + 376) >> 17) & 1;
    LODWORD(v26) = 0;
    McTemplateK0pqtq_EtwWriteTransfer((unsigned int)v29, &EventAdapterFeatureState, v21, this, v26, v29, v32);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v33) = (**((_DWORD **)this + 376) >> 18) & 3;
      LODWORD(v30) = (**((_DWORD **)this + 376) >> 20) & 1;
      LODWORD(v27) = 1;
      McTemplateK0pqtq_EtwWriteTransfer((unsigned int)v30, &EventAdapterFeatureState, v24, this, v27, v30, v33);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v34) = (**((_DWORD **)this + 376) >> 25) & 3;
        LODWORD(v31) = (**((_DWORD **)this + 376) >> 27) & 1;
        LODWORD(v28) = 4;
        McTemplateK0pqtq_EtwWriteTransfer((unsigned int)v31, &EventAdapterFeatureState, v25, this, v28, v31, v34);
      }
    }
  }
  DXGADAPTER::ReportNodeMetadata(this);
}
