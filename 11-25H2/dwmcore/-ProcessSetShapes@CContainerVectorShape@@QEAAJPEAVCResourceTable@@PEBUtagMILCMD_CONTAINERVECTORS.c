/*
 * XREFs of ?ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES@@PEBXI@Z @ 0x1800781F0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x180079ED4 (-SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V-$span@$$CBI$0-0@gsl@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CContainerVectorShape::ProcessSetShapes(
        CContainerVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v7; // ebx
  int v8; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x2Cu, 0LL);
  }
  else
  {
    gsl::details::extent_type<-1>::extent_type<-1>(v10, (unsigned __int64)a5 >> 2);
    v10[1] = a4;
    if ( v10[0] == -1LL || !a4 && v10[0] )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v8 = CContainerVectorShape::SetShapes(this);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x33u, 0LL);
  }
  return v7;
}
