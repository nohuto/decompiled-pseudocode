/*
 * XREFs of ?ProcessSetMappingMode@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETMAPPINGMODE@@@Z @ 0x180217A88
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetMappingMode(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GRADIENTBRUSH_SETMAPPINGMODE *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 57) != v3 )
  {
    *((_DWORD *)this + 57) = v3;
    (*(void (__fastcall **)(CGradientBrush *, __int64, CGradientBrush *))(*(_QWORD *)this + 80LL))(this, 6LL, this);
  }
  return 0LL;
}
