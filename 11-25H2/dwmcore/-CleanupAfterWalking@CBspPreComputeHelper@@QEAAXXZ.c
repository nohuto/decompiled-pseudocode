/*
 * XREFs of ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x180096F10
 * Callers:
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z @ 0x180096BA0 (-EndWalk@SubTreeContext@CPreComputeContext@@AEAAXJ@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Optimize@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAXXZ @ 0x180097304 (-Optimize@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@I$0EA@$01$09@@QEAAXXZ @ 0x1800973E0 (-Optimize@-$CWatermarkStack@I$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAXXZ @ 0x1800974CC (-Optimize@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAXXZ @ 0x1800975B0 (-Optimize@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAXXZ @ 0x1800976A0 (-Optimize@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ @ 0x1800977F0 (-Optimize@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x180097930 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAXXZ @ 0x180097A20 (-Optimize@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x180186120 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 */

void __fastcall CBspPreComputeHelper::CleanupAfterWalking(CBspPreComputeHelper *this)
{
  int v2; // edi
  int v3; // eax
  __int64 v4; // rsi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rbp
  int v9; // eax
  int v10; // eax
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *((_DWORD *)this + 66) = 0;
  CWatermarkStack<unsigned int,64,2,10>::Optimize((char *)this + 240);
  CWatermarkStack<bool,64,2,10>::Optimize((char *)this + 216);
  v3 = *((_DWORD *)this + 52);
  v4 = 64LL;
  if ( v3 == 10 )
  {
    v7 = *((_DWORD *)this + 53);
    v8 = 64LL;
    if ( v7 > 0x40 )
      v8 = v7;
    if ( (unsigned __int64)(3 * v8) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    }
    else if ( (unsigned int)(3 * v8) <= *((_DWORD *)this + 51) )
    {
      v11 = 0LL;
      v9 = HrMalloc(4uLL, (unsigned int)v8, &v11);
      if ( v9 >= 0 )
      {
        operator delete(*((void **)this + 24));
        *((_QWORD *)this + 24) = v11;
        *((_DWORD *)this + 51) = v8;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x11Eu, 0LL);
      }
    }
    *((_DWORD *)this + 53) = 0;
    v5 = 0;
  }
  else
  {
    v5 = v3 + 1;
  }
  *((_DWORD *)this + 52) = v5;
  CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Optimize((char *)this + 168);
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize((char *)this + 144);
  CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Optimize((char *)this + 120);
  CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Optimize((char *)this + 96);
  CWatermarkStack<CMILMatrix,8,2,8>::Optimize((char *)this + 72);
  CWatermarkStack<CMILMatrix,8,2,8>::Optimize((char *)this + 48);
  CWatermarkStack<CVisual *,64,2,10>::Optimize((char *)this + 24);
  v6 = *((_DWORD *)this + 4);
  if ( v6 == 10 )
  {
    if ( *((_DWORD *)this + 5) > 0x40u )
      v4 = *((unsigned int *)this + 5);
    if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    }
    else if ( (unsigned int)(3 * v4) <= *((_DWORD *)this + 3) )
    {
      v11 = 0LL;
      v10 = HrMalloc(8uLL, (unsigned int)v4, &v11);
      if ( v10 >= 0 )
      {
        operator delete(*(void **)this);
        *(_QWORD *)this = v11;
        *((_DWORD *)this + 3) = v4;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x11Eu, 0LL);
      }
    }
    *((_DWORD *)this + 5) = 0;
  }
  else
  {
    v2 = v6 + 1;
  }
  *((_DWORD *)this + 4) = v2;
}
