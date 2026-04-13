/*
 * XREFs of ??$make_shared@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@XZ @ 0x1800AB5CC
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800AE428 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x18005B5EC (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<CreativeFramework::TargetedContentLayoutHelpers::Item>(_QWORD *a1)
{
  _DWORD *v2; // rax

  v2 = operator new(0x48uLL);
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<CreativeFramework::TargetedContentLayoutHelpers::Item>::`vftable';
    *((_OWORD *)v2 + 1) = 0LL;
    *((_OWORD *)v2 + 2) = 0LL;
    *((_OWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 8) = 0LL;
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(a1, (__int64)(v2 + 4), (__int64)v2);
  return a1;
}
