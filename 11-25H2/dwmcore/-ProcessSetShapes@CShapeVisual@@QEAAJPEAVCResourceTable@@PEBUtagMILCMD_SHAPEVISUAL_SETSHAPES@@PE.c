/*
 * XREFs of ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x18007840C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z @ 0x180078530 (-EnsureShapeTree@CShapeVisual@@AEAAJPEAPEAVCShapeTree@@@Z.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x180079ED4 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeVisual::ProcessSetShapes(
        CShapeVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAPEVISUAL_SETSHAPES *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // esi
  int v7; // eax
  unsigned int v8; // edi
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-38h]
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  CResource *v13; // [rsp+70h] [rbp+18h] BYREF

  v5 = a5;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v8 = -2003303421;
    v10 = -2003303421;
    v11 = 41;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v11, 0LL);
    return v8;
  }
  v13 = 0LL;
  v7 = CShapeVisual::EnsureShapeTree(this, &v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 45;
LABEL_11:
    v10 = v7;
    goto LABEL_9;
  }
  gsl::details::extent_type<-1>::extent_type<-1>(v12, (unsigned __int64)v5 >> 2);
  v12[1] = a4;
  if ( v12[0] == -1LL || !a4 && v12[0] )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v7 = CContainerVectorShape::SetShapes(v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v11 = 51;
    goto LABEL_11;
  }
  return v8;
}
