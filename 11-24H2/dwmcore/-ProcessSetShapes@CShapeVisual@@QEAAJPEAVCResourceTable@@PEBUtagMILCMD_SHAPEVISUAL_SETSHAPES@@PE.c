/*
 * XREFs of ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x1801F7508
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x180131ADC (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x1801F762C (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeVisual::ProcessSetShapes(
        CShapeVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAPEVISUAL_SETSHAPES *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  int v9; // eax
  unsigned int v10; // edi
  char v11; // di
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-38h]
  unsigned __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF
  struct CResource ***v16; // [rsp+70h] [rbp+18h] BYREF

  v5 = a5;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v10 = -2003303421;
    v13 = -2003303421;
    v14 = 41;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v14, 0LL);
    return v10;
  }
  v16 = 0LL;
  v9 = CShapeVisual::EnsureShapeTree(this, (struct CShapeTree **)&v16);
  v10 = v9;
  if ( v9 < 0 )
  {
    v14 = 45;
LABEL_11:
    v13 = v9;
    goto LABEL_9;
  }
  v11 = *((_BYTE *)a3 + 8) != 0;
  gsl::details::extent_type<-1>::extent_type<-1>(v15, (unsigned __int64)v5 >> 2);
  v15[1] = a4;
  if ( v15[0] == -1LL || !a4 && v15[0] )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v9 = CContainerVectorShape::SetShapes(v16, (__int64)a2, v15, v11);
  v10 = v9;
  if ( v9 < 0 )
  {
    v14 = 51;
    goto LABEL_11;
  }
  return v10;
}
