/*
 * XREFs of ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403B3230
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403B2AAC (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140016724 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003ECE0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqxx_EtwWriteTransfer @ 0x14005A334 (McTemplateK0pqqqxx_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqjzqqx_EtwWriteTransfer @ 0x14005F6B8 (McTemplateK0pqqqqjzqqx_EtwWriteTransfer.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer @ 0x140066940 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1403240C0 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DpiBrightnessReportState@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1403B3AC4 (-DpiBrightnessReportState@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiReportAdapter @ 0x1403B3B40 (DpiReportAdapter.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1403B3E04 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1403C10F8 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1403F8C18 (-ReportState@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReportState(DXGADAPTER *this)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  int *AdapterType; // rax
  unsigned int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned int *v8; // rsi
  __int64 v9; // r8
  wchar_t *v10; // r15
  unsigned int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int i; // r14d
  unsigned int j; // ebp
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int *v19; // rdi
  int v20; // r15d
  unsigned int k; // r14d
  __int64 v22; // r8
  ADAPTER_DISPLAY *v23; // rcx
  ADAPTER_RENDER *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // [rsp+20h] [rbp-128h]
  __int64 v28; // [rsp+20h] [rbp-128h]
  __int64 v29; // [rsp+20h] [rbp-128h]
  __int64 v30; // [rsp+28h] [rbp-120h]
  __int64 v31; // [rsp+28h] [rbp-120h]
  __int64 v32; // [rsp+28h] [rbp-120h]
  __int64 v33; // [rsp+30h] [rbp-118h]
  __int64 v34; // [rsp+30h] [rbp-118h]
  __int64 v35; // [rsp+30h] [rbp-118h]
  __int64 v36; // [rsp+38h] [rbp-110h]
  __int64 v37; // [rsp+50h] [rbp-F8h]
  __int64 v38; // [rsp+58h] [rbp-F0h]
  int v39; // [rsp+C0h] [rbp-88h]
  int v40; // [rsp+D8h] [rbp-70h]
  struct _UNICODE_STRING v41; // [rsp+100h] [rbp-48h] BYREF
  struct _STRING DestinationString; // [rsp+110h] [rbp-38h] BYREF
  int v43; // [rsp+150h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10155;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner()",
      10155LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( bTracingEnabled )
  {
    v2 = *(_QWORD *)((char *)this + 4772);
    v3 = *((_QWORD *)this + 36);
    AdapterType = DXGADAPTER::GetAdapterType(this, &v43);
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
        v39,
        *((_DWORD *)this + 618),
        *((_DWORD *)this + 619),
        v40,
        *((_DWORD *)this + 842),
        *AdapterType,
        v3,
        v2);
    }
  }
  DpiReportAdapter(*((_QWORD *)this + 27), this);
  if ( bTracingEnabled )
  {
    v8 = (unsigned int *)((char *)this + 3368);
    if ( *((_DWORD *)this + 842) )
    {
      v41 = 0LL;
      v10 = (wchar_t *)operator new[](0x50uLL, 0x4B677844u, 256LL, v7);
      if ( v10 )
      {
        v11 = 0;
        if ( *v8 )
        {
          do
          {
            DestinationString = 0LL;
            v12 = *((_QWORD *)this + 403) + 520LL * v11;
            RtlInitAnsiString(&DestinationString, (PCSZ)(v12 + 236));
            *(_QWORD *)&v41.Length = 5242880LL;
            v41.Buffer = v10;
            if ( RtlAnsiStringToUnicodeString(&v41, &DestinationString, 0) < 0 )
              RtlInitUnicodeString(&v41, L"Unknown");
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
            {
              LODWORD(v38) = *(_DWORD *)(v12 + 344);
              LODWORD(v37) = *(_DWORD *)(v12 + 216);
              LODWORD(v36) = *(_DWORD *)(v12 + 8);
              LODWORD(v33) = *(_DWORD *)(v12 + 212);
              LODWORD(v30) = *(_DWORD *)(v12 + 208);
              LODWORD(v27) = v11;
              McTemplateK0pqqqqjzqqx_EtwWriteTransfer(
                v12 + 220,
                v13,
                v14,
                this,
                v27,
                v30,
                v33,
                v36,
                v12 + 220,
                v41.Buffer,
                v37,
                v38,
                *(_QWORD *)(v12 + 368));
            }
            for ( i = 0; i < *(_DWORD *)(v12 + 8); ++i )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
              {
                LODWORD(v33) = *(_DWORD *)(v12 + 24LL * i + 32);
                LODWORD(v30) = i;
                LODWORD(v27) = v11;
                McTemplateK0pqqqxx_EtwWriteTransfer(
                  3LL * i,
                  v13,
                  v14,
                  this,
                  v27,
                  v30,
                  v33,
                  *(_QWORD *)(v12 + 24LL * i + 16),
                  *(_QWORD *)(v12 + 24LL * i + 24));
              }
            }
            ++v11;
          }
          while ( v11 < *v8 );
          v8 = (unsigned int *)((char *)this + 3368);
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
      }
      for ( j = 0; j < *v8; ++j )
      {
        v17 = 520LL * j;
        v18 = *((_QWORD *)this + 403);
        v19 = *(unsigned int **)(v17 + v18 + 512);
        if ( v19 )
        {
          v20 = *(_DWORD *)(v17 + v18 + 212);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
          {
            LODWORD(v36) = v19[48];
            LODWORD(v33) = *v19;
            LODWORD(v30) = *(_DWORD *)(v17 + v18 + 212);
            LODWORD(v27) = j;
            McTemplateK0pqtqq_EtwWriteTransfer(v17, &Dxgk_PowerPStateComponent, v9, this, v27, v30, v33, v36);
          }
          for ( k = 0; k < *v19; ++k )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
            {
              LODWORD(v33) = v19[k + 1];
              LODWORD(v30) = k;
              LODWORD(v27) = v20;
              McTemplateK0pqtq_EtwWriteTransfer((unsigned int)v33, &Dxgk_PowerPState, v9, this, v27, v30, v33);
            }
          }
        }
      }
    }
  }
  DpiBrightnessReportState(*((struct _DEVICE_OBJECT **)this + 27));
  v23 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 390);
  if ( v23 )
    ADAPTER_DISPLAY::ReportState(v23);
  v24 = (ADAPTER_RENDER *)*((_QWORD *)this + 391);
  if ( v24 )
    ADAPTER_RENDER::ReportState(v24);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v33) = (**((_DWORD **)this + 376) >> 15) & 3;
    LODWORD(v30) = (**((_DWORD **)this + 376) >> 17) & 1;
    LODWORD(v27) = 0;
    McTemplateK0pqtq_EtwWriteTransfer((unsigned int)v30, &EventAdapterFeatureState, v22, this, v27, v30, v33);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v34) = (**((_DWORD **)this + 376) >> 18) & 3;
      LODWORD(v31) = (**((_DWORD **)this + 376) >> 20) & 1;
      LODWORD(v28) = 1;
      McTemplateK0pqtq_EtwWriteTransfer((unsigned int)v31, &EventAdapterFeatureState, v25, this, v28, v31, v34);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(v35) = (**((_DWORD **)this + 376) >> 25) & 3;
        LODWORD(v32) = (**((_DWORD **)this + 376) >> 27) & 1;
        LODWORD(v29) = 4;
        McTemplateK0pqtq_EtwWriteTransfer((unsigned int)v32, &EventAdapterFeatureState, v26, this, v29, v32, v35);
      }
    }
  }
  DXGADAPTER::ReportNodeMetadata(this);
}
