/*
 * XREFs of ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180172728
 * Callers:
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180171A70 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Matches@CDDisplayCachedScanout@@QEAA_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180172920 (-Matches@CDDisplayCachedScanout@@QEAA_NIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplaySca.c)
 *     ?CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180172B9C (-CreateScanout@CDDisplaySwapChain@@IEAAJIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAPEAUIDisplaySc.c)
 *     ?erase@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801737C0 (-erase@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_delete@VCDDisplayAgedCachedS.c)
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x180174D0C (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
 *     ?Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1801C7268 (-Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Cor.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802C7258 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDD.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDisplayCachedScanout@@PEAV1@_KAEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x1802C7474 (--$_Uninitialized_value_construct_n@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAPEAVCDDi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::FindCachedDesktopScanout(
        CDDisplaySwapChain *this,
        char a2,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a3,
        struct Windows::Devices::Display::Core::IDisplayScanout **a4)
{
  char *v4; // rdi
  __int64 v6; // rcx
  unsigned int v7; // ebp
  unsigned int v11; // edx
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  CDDisplayCachedScanout *v14; // rdi
  unsigned int v15; // r9d
  struct Windows::Devices::Display::Core::IDisplayScanout *v16; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rdi
  struct Windows::Devices::Display::Core::IDisplayScanout *v20; // rcx
  struct Windows::Devices::Display::Core::IDisplayScanout *v22; // rcx
  int v23; // eax
  unsigned int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-38h]
  unsigned int v26; // [rsp+20h] [rbp-38h]
  unsigned int v27; // [rsp+20h] [rbp-38h]
  struct Windows::Devices::Display::Core::IDisplayScanout *v28; // [rsp+60h] [rbp+8h] BYREF

  v4 = (char *)this + 296;
  v6 = *((_QWORD *)this + 37);
  v7 = 0;
  if ( *((_QWORD *)v4 + 1) == v6 && *((_DWORD *)this + 128) )
  {
    if ( *((unsigned int *)this + 128) <= 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)v4 + 2) - v6) >> 3) )
      *((_QWORD *)v4 + 1) = std::_Uninitialized_value_construct_n<std::allocator<CDDisplayCachedScanout>>(*((CDDisplayCachedScanout **)v4 + 1));
    else
      std::vector<CDDisplayCachedScanout>::_Resize_reallocate<std::_Value_init_tag>(v4);
  }
  v11 = *((_DWORD *)this + 131);
  if ( a2 )
    v11 = (*((_DWORD *)this + 128) + v11 - 1) % *((_DWORD *)this + 128);
  v28 = 0LL;
  v12 = (_QWORD *)((char *)this + 320);
  v13 = (_QWORD *)**((_QWORD **)this + 40);
  v14 = (CDDisplayCachedScanout *)(*(_QWORD *)v4 + 40LL * v11);
  if ( CDDisplayCachedScanout::Matches(v14, 1u, a3, (unsigned int)a4, v25, &v28) )
  {
    v16 = v28;
LABEL_6:
    while ( v13 != (_QWORD *)*v12 )
    {
      v17 = v13[2];
      v18 = (_QWORD *)*v13;
      if ( (*(_DWORD *)(v17 + 40))-- == 1 )
        std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::erase(v12, &v28, v13);
      v13 = v18;
    }
    v20 = 0LL;
    *a4 = v16;
    goto LABEL_11;
  }
  v22 = v28;
  v28 = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = CDDisplaySwapChain::CreateScanout(this, 1u, a3, v15, v26, &v28);
  v7 = v23;
  if ( v23 >= 0 )
  {
    v16 = v28;
    CDDisplayCachedScanout::Set(v14, 1u, a3, v24, v27, v28);
    goto LABEL_6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x52Fu, 0LL);
  v20 = v28;
LABEL_11:
  if ( v20 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v20 + 16LL))(v20);
  return v7;
}
