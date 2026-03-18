/*
 * XREFs of ?ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES@@PEBXI@Z @ 0x1801FBA20
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x180131ADC (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CContainerVectorShape::ProcessSetShapes(
        struct CResource ***this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  char v9; // di
  int v10; // eax
  unsigned __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x2Cu, 0LL);
  }
  else
  {
    v9 = *((_BYTE *)a3 + 8) != 0;
    gsl::details::extent_type<-1>::extent_type<-1>(v12, (unsigned __int64)a5 >> 2);
    v12[1] = a4;
    if ( v12[0] == -1LL || !a4 && v12[0] )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v10 = CContainerVectorShape::SetShapes(this, (__int64)a2, v12, v9);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x33u, 0LL);
  }
  return v8;
}
