/*
 * XREFs of ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801F762C
 * Callers:
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1801F7508 (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PE.c)
 *     ?ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@@Z @ 0x1802A6170 (-ProcessSetViewBox@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETVIEWBOX@@.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180037BE0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CShapeVisual::EnsureShapeTree(CShapeVisual *this, struct CShapeTree **a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v11; // rdx
  __int64 v12; // r8

  v4 = 0;
  *a2 = 0LL;
  if ( !*((_QWORD *)this + 32) )
  {
    v5 = DefaultHeap::AllocClear(0x80uLL);
    if ( !v5 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x59u, 0LL);
      return v4;
    }
    v6 = *((_QWORD *)this + 3);
    v5[2] = 0;
    *((_QWORD *)v5 + 3) = v6;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    v5[10] = 0;
    *((_QWORD *)v5 + 10) = 0LL;
    *((_QWORD *)v5 + 11) = 0LL;
    *((_BYTE *)v5 + 96) = 1;
    *((_QWORD *)v5 + 13) = 0LL;
    *((_QWORD *)v5 + 14) = 0LL;
    *((_QWORD *)v5 + 15) = 0LL;
    *(_QWORD *)v5 = &CShapeTree::`vftable';
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v5 + 2));
    v7 = CVisual::SetContent(this, (struct CContent *)v5);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x5Bu, 0LL);
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CCachedVisualImage *)v5, v11, v12);
      return v4;
    }
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease((CCachedVisualImage *)v5, v8, v9);
  }
  *a2 = (struct CShapeTree *)*((_QWORD *)this + 32);
  return v4;
}
