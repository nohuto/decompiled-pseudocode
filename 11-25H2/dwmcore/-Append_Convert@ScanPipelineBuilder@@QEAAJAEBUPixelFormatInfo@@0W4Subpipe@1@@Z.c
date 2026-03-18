/*
 * XREFs of ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1802E67E8
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1802E6270 (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsNoAlphaFormOf@@YAHW4DXGI_FORMAT@@0@Z @ 0x180185D70 (-IsNoAlphaFormOf@@YAHW4DXGI_FORMAT@@0@Z.c)
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1802E6668 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z @ 0x1802E6AF0 (-Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z.c)
 *     ?GetNearestInterchangeFormat@@YA?AW4DXGI_FORMAT@@W41@@Z @ 0x1802E6D90 (-GetNearestInterchangeFormat@@YA-AW4DXGI_FORMAT@@W41@@Z.c)
 *     ?GetOp_AlphaDivide@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x1802E6DCC (-GetOp_AlphaDivide@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 *     ?GetOp_IgnoreAlpha@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z @ 0x1802E6E18 (-GetOp_IgnoreAlpha@@YAP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::Append_Convert(int *a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v7; // ebx
  enum DXGI_FORMAT *v8; // r8
  enum DXGI_FORMAT NearestInterchangeFormat; // ebp
  struct PipelineItem *v10; // r8
  int v11; // r9d
  enum DXGI_FORMAT v12; // r12d
  void (*v13)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  int v14; // eax
  void (*v15)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  int v16; // eax
  void (*v17)(const struct PipelineParams *, const struct ScanOpParams *); // rdi
  void (*v18)(const struct PipelineParams *, const struct ScanOpParams *); // rdx
  int v19; // eax
  int appended; // eax
  int v21; // eax
  void (*Op_IgnoreAlpha)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  int v23; // eax
  void (*Op_AlphaDivide)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  int v25; // eax
  void (*v26)(const struct PipelineParams *, const struct ScanOpParams *); // rax
  struct PipelineItem *v27; // r8
  int v28; // eax
  void (*v29)(const struct PipelineParams *, const struct ScanOpParams *); // rdx
  int v30; // eax

  v3 = *(_DWORD *)(a3 + 4);
  v7 = 0;
  if ( *(_DWORD *)a2 == *(_DWORD *)a3 )
  {
    if ( v3 == 3 )
    {
      Op_IgnoreAlpha = GetOp_IgnoreAlpha((enum DXGI_FORMAT)*(_DWORD *)a3);
      if ( Op_IgnoreAlpha )
      {
        v23 = ScanPipelineBuilder::AddOp_Binary(a1, Op_IgnoreAlpha, (struct PipelineItem *)a3);
        v7 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x204u, 0LL);
          return v7;
        }
      }
    }
    else if ( v3 == 1 )
    {
      Op_AlphaDivide = GetOp_AlphaDivide((enum DXGI_FORMAT)*(_DWORD *)a3);
      if ( Op_AlphaDivide )
      {
        v25 = ScanPipelineBuilder::AddOp_Binary(a1, Op_AlphaDivide, (struct PipelineItem *)a3);
        v7 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x20Du, 0LL);
          return v7;
        }
      }
    }
  }
  else
  {
    NearestInterchangeFormat = GetNearestInterchangeFormat(*(enum DXGI_FORMAT *)a2);
    v12 = GetNearestInterchangeFormat(*v8);
    if ( v11 == 3 )
    {
      v13 = GetOp_IgnoreAlpha((enum DXGI_FORMAT)*(_DWORD *)v10);
      if ( v13 )
      {
        v14 = ScanPipelineBuilder::AddOp_Binary(a1, v13, v10);
        v7 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x1C3u, 0LL);
          return v7;
        }
      }
    }
    else if ( v11 == 1 )
    {
      v15 = GetOp_AlphaDivide((enum DXGI_FORMAT)*(_DWORD *)v10);
      if ( v15 )
      {
        v16 = ScanPipelineBuilder::AddOp_Binary(a1, v15, v10);
        v7 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x1CCu, 0LL);
          return v7;
        }
      }
    }
    v17 = (void (*)(const struct PipelineParams *, const struct ScanOpParams *))Convert_32bppABGR_32bppARGB;
    if ( *(_DWORD *)a3 != v12 )
    {
      switch ( *(_DWORD *)a3 )
      {
        case 0xA:
          v18 = (void (*)(const struct PipelineParams *, const struct ScanOpParams *))Convert_64bppABGRFloat_128bppABGR;
          break;
        case 0x18:
          v18 = (void (*)(const struct PipelineParams *, const struct ScanOpParams *))Convert_32bppABGR2101010_64bppABGR;
          break;
        case 0x1C:
          v18 = (void (*)(const struct PipelineParams *, const struct ScanOpParams *))Convert_32bppABGR_32bppARGB;
          break;
        case 0x41:
          v18 = (void (*)(const struct PipelineParams *, const struct ScanOpParams *))Convert_8bppA_32bppARGB;
          break;
        default:
          v18 = (void (*)(const struct PipelineParams *, const struct ScanOpParams *))Quantize_32bppARGB_32RGB;
          if ( *(_DWORD *)a3 != 88 )
            v18 = 0LL;
          break;
      }
      v19 = ScanPipelineBuilder::AddOp_Binary(a1, v18, v10);
      v7 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x1DCu, 0LL);
        return v7;
      }
    }
    appended = ScanPipelineBuilder::Append_Convert_BetweenInterchange(
                 a1,
                 (unsigned int)NearestInterchangeFormat,
                 (unsigned int)v12);
    v7 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x1E4u, 0LL);
      return v7;
    }
    if ( *(_DWORD *)a2 != NearestInterchangeFormat
      && !IsNoAlphaFormOf((enum DXGI_FORMAT)*(_DWORD *)a2, NearestInterchangeFormat) )
    {
      if ( *(_DWORD *)a2 == 10 )
      {
        v17 = (void (*)(const struct PipelineParams *, const struct ScanOpParams *))Convert_128bppABGR_64bppABGRFloat;
      }
      else if ( *(_DWORD *)a2 == 24 )
      {
        v17 = (void (*)(const struct PipelineParams *, const struct ScanOpParams *))Convert_64bppABGR_32bppABGR2101010;
      }
      else if ( *(_DWORD *)a2 != 28 )
      {
        v17 = (void (*)(const struct PipelineParams *, const struct ScanOpParams *))Quantize_32bppARGB_32RGB;
        if ( *(_DWORD *)a2 != 88 )
          v17 = 0LL;
      }
      v21 = ScanPipelineBuilder::AddOp_Binary(a1, v17, (struct PipelineItem *)a3);
      v7 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x1F6u, 0LL);
        return v7;
      }
    }
  }
  if ( *(_DWORD *)(a2 + 4) == 3 )
  {
    v26 = GetOp_IgnoreAlpha((enum DXGI_FORMAT)*(_DWORD *)a2);
    if ( v26 )
    {
      v28 = ScanPipelineBuilder::AddOp_Binary(a1, v26, v27);
      v7 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x21Bu, 0LL);
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 4) != 1 )
      return v7;
    switch ( *(_DWORD *)a2 )
    {
      case 2:
        v29 = (void (*)(const struct PipelineParams *, const struct ScanOpParams *))AlphaMultiply_128bppABGR;
        break;
      case 0xA:
        v29 = (void (*)(const struct PipelineParams *, const struct ScanOpParams *))AlphaMultiply_64bppABGRFloat;
        break;
      case 0xB:
        v29 = (void (*)(const struct PipelineParams *, const struct ScanOpParams *))AlphaMultiply_64bppARGB;
        break;
      case 0x1C:
      case 0x57:
        v29 = (void (*)(const struct PipelineParams *, const struct ScanOpParams *))AlphaMultiply_32bppARGB;
        break;
      default:
        return v7;
    }
    v30 = ScanPipelineBuilder::AddOp_Binary(a1, v29, (struct PipelineItem *)a3);
    v7 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v30, 0x226u, 0LL);
  }
  return v7;
}
