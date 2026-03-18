/*
 * XREFs of ?AppendVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x18013B638
 * Callers:
 *     ?SetVisuals@CVisualGroup@@QEAAJV?$span@PEAVCVisual@@$0?0@gsl@@@Z @ 0x18013C5D8 (-SetVisuals@CVisualGroup@@QEAAJV-$span@PEAVCVisual@@$0-0@gsl@@@Z.c)
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18013B730 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??R?$default_delete@VCExcludeVisualReference@@@std@@QEBAXPEAVCExcludeVisualReference@@@Z @ 0x18013B824 (--R-$default_delete@VCExcludeVisualReference@@@std@@QEBAXPEAVCExcludeVisualReference@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180298D54 (--$_Emplace_reallocate@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisual.c)
 */

__int64 __fastcall CVisualGroup::AppendVisuals(__int64 a1, _QWORD *a2)
{
  struct CVisual **v2; // rbx
  struct CVisual **v4; // rsi
  struct CVisual *v5; // rcx
  int v6; // eax
  struct CExcludeVisualReference *v7; // rdx
  struct CExcludeVisualReference **v8; // rdx
  __int64 v9; // rcx
  struct CExcludeVisualReference *v10; // rax
  struct CExcludeVisualReference *v12; // [rsp+28h] [rbp-18h] BYREF
  char v13; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct CExcludeVisualReference *v15; // [rsp+58h] [rbp+18h] BYREF

  v2 = (struct CVisual **)a2[1];
  v4 = &v2[*a2];
  while ( v2 != v4 )
  {
    v5 = *v2;
    if ( *v2 )
    {
      v15 = 0LL;
      v12 = 0LL;
      v13 = 1;
      v6 = CExcludeVisualReference::Create(v5, &v12);
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1B,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualgroup.cpp",
          (const char *)(unsigned int)v6,
          (int)&v15);
      if ( v13 )
      {
        v7 = v15;
        v15 = v12;
        if ( v7 )
          ((void (*)(void))std::default_delete<CExcludeVisualReference>::operator())();
      }
      v8 = *(struct CExcludeVisualReference ***)(a1 + 80);
      v9 = a1 + 72;
      if ( v8 == *(struct CExcludeVisualReference ***)(a1 + 88) )
      {
        std::vector<std::unique_ptr<CExcludeVisualReference>>::_Emplace_reallocate<std::unique_ptr<CExcludeVisualReference>>(
          v9,
          v8,
          &v15);
      }
      else
      {
        v10 = v15;
        v15 = 0LL;
        *v8 = v10;
        *(_QWORD *)(a1 + 80) += 8LL;
      }
      if ( v15 )
        std::default_delete<CExcludeVisualReference>::operator()(v9);
    }
    ++v2;
  }
  CResource::NotifyOnChanged((_DWORD *)a1, 0, 0LL);
  return 0LL;
}
