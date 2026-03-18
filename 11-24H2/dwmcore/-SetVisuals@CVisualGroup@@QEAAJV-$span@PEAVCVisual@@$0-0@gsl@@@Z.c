/*
 * XREFs of ?SetVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x18021765C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@0@@Z @ 0x1800961B0 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExclu.c)
 *     ?AppendVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x1800961E8 (-AppendVisuals@CVisualGroup@@QEAAJV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 */

__int64 __fastcall CVisualGroup::SetVisuals(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  int appended; // eax
  unsigned int v7; // ebx
  int v9[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 72);
  v5 = *(_QWORD *)(a1 + 80);
  if ( v4 != v5 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CExcludeVisualReference>>>(v4, v5);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a1 + 72);
  }
  *(_OWORD *)v9 = *a2;
  appended = CVisualGroup::AppendVisuals(a1, v9);
  v7 = appended;
  if ( appended >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualgroup.cpp",
    (const char *)(unsigned int)appended);
  return v7;
}
