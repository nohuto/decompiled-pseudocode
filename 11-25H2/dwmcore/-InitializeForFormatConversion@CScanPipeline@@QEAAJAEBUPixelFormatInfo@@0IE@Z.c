/*
 * XREFs of ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1802E6270
 * Callers:
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x1802E6018 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x180186120 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?ResetPipeline@CScanPipeline@@MEAAXXZ @ 0x1802E6220 (-ResetPipeline@CScanPipeline@@MEAAXXZ.c)
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1802E6668 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1802E67E8 (-Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 *     ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ @ 0x1802E6C90 (-ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ.c)
 */

__int64 __fastcall CScanPipeline::InitializeForFormatConversion(
        void **this,
        const struct PixelFormatInfo *a2,
        const struct PixelFormatInfo *a3,
        unsigned int a4)
{
  __int64 v8; // r14
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r14
  _QWORD *v12; // rdx
  __int64 *v13; // r9
  __int64 v14; // r10
  __int64 v15; // rcx
  int appended; // eax
  void (__fastcall *v17)(const struct PipelineParams *, const struct ScanOpParams *); // rdx
  int v18; // r9d
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-78h]
  _QWORD v22[2]; // [rsp+30h] [rbp-68h] BYREF
  __int16 v23; // [rsp+40h] [rbp-58h]
  char v24; // [rsp+42h] [rbp-56h]
  int v25; // [rsp+44h] [rbp-54h]
  __m128i si128; // [rsp+48h] [rbp-50h]

  CScanPipeline::ResetPipeline((CScanPipeline *)this);
  operator delete(this[80]);
  this[80] = 0LL;
  v8 = a4;
  v9 = HrMalloc(0x30uLL, a4, this + 80);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x33u, 0LL);
    v21 = 66;
    goto LABEL_23;
  }
  v11 = 16 * v8;
  v12 = this + 81;
  v13 = (__int64 *)(this + 80);
  v14 = 2LL;
  do
  {
    v15 = *v13++;
    *v12++ = v11 + v15;
    --v14;
  }
  while ( v14 );
  v25 = 0;
  v23 = 257;
  v24 = 1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v22[0] = this;
  v22[1] = this + 80;
  appended = ScanPipelineBuilder::Append_Convert(v22, a2, a3, v13);
  v10 = appended;
  if ( appended < 0 )
  {
    v21 = 81;
    goto LABEL_18;
  }
  if ( !*(_DWORD *)(v22[0] + 32LL) )
  {
    if ( *(_DWORD *)a2 == 2 )
    {
      v17 = Copy_128;
    }
    else if ( *(_DWORD *)a2 == 10 || *(_DWORD *)a2 == 11 )
    {
      v17 = Copy_64;
    }
    else
    {
      v17 = *(_DWORD *)a2 == 24 || *(_DWORD *)a2 == 28 || (unsigned int)(*(_DWORD *)a2 - 87) < 2 ? Copy_32 : 0LL;
    }
    appended = ScanPipelineBuilder::AddOp_Binary(v22, v17);
    v10 = appended;
    if ( appended < 0 )
    {
      v21 = 93;
LABEL_18:
      v18 = appended;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v21, 0LL);
      return v10;
    }
  }
  v19 = ScanPipelineBuilder::ConvertDestBufferReferences((ScanPipelineBuilder *)v22);
  v10 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x95u, 0LL);
    v21 = 96;
LABEL_23:
    v18 = v10;
    goto LABEL_24;
  }
  return v10;
}
