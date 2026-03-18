/*
 * XREFs of ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1801E8854
 * Callers:
 *     ?EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z @ 0x1801E85C8 (-EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z.c)
 *     ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z @ 0x1801E87B0 (-EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18019C774 (-terminate@details@gsl@@YAXXZ.c)
 *     ?PinResources@CD3DDevice@@QEAAJV?$span@PEAVISwapChainRealization@@$0?0@gsl@@@Z @ 0x1802C4000 (-PinResources@CD3DDevice@@QEAAJV-$span@PEAVISwapChainRealization@@$0-0@gsl@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // rsi
  gsl::details *v4; // rdi
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  gsl::details *v10[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_QWORD *)*((_QWORD *)this + 9);
  if ( !((__int64)(*((_QWORD *)this + 10) - (_QWORD)v2) >> 3) )
  {
    v8 = -2003292412;
    v9 = 1491LL;
    goto LABEL_11;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 40LL))(*v2);
  if ( !v3 )
  {
    v8 = -2003304307;
    v9 = 1487LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\globalcompositionsurfaceinfo.cpp",
      (const char *)v8);
    return v8;
  }
  v4 = (gsl::details *)*((_QWORD *)this + 9);
  gsl::details::extent_type<-1>::extent_type<-1>(v10, (__int64)(*((_QWORD *)this + 10) - (_QWORD)v4) >> 3);
  v10[1] = v4;
  if ( v10[0] == (gsl::details *)-1LL || !v4 && v10[0] )
  {
    gsl::details::terminate(v10[0]);
    JUMPOUT(0x1801E895CLL);
  }
  v5 = CD3DDevice::PinResources(v3, v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *((_BYTE *)this + 189) = 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C8,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\globalcompositionsurfaceinfo.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
