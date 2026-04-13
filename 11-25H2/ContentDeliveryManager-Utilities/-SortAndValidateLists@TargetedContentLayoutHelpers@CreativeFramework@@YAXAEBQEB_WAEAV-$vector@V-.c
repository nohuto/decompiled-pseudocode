/*
 * XREFs of ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x1800B2338
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800ADC3C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180028838 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180090154 (-Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800985D8 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800B161C (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0PEA_J0Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B1778 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0PEA_J0Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800B18E4 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramewo_ea_1800B18E4.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@AEBU012@@Z @ 0x1800B1CBC (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@AEBU012@@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::SortAndValidateLists(
        const char **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rbx
  double v15; // xmm6_8
  double v16; // xmm7_8
  unsigned int v17; // eax
  int v18; // edx
  int v19; // r8d
  int v20; // [rsp+38h] [rbp-79h]
  int v21; // [rsp+40h] [rbp-71h]
  char v22; // [rsp+48h] [rbp-69h]
  _QWORD v23[4]; // [rsp+50h] [rbp-61h] BYREF
  double v24; // [rsp+70h] [rbp-41h]
  double v25; // [rsp+78h] [rbp-39h]
  char v26; // [rsp+80h] [rbp-31h]
  _QWORD v27[4]; // [rsp+88h] [rbp-29h] BYREF
  double v28; // [rsp+A8h] [rbp-9h]
  double v29; // [rsp+B0h] [rbp-1h]
  char v30; // [rsp+B8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(
    *a4,
    a4[1],
    0x6DB6DB6DB6DB6DB7LL * ((a4[1] - *a4) >> 3));
  v10 = a3[1];
  if ( *a3 != v10 )
    std::_Stable_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
      *a3,
      v10,
      v8,
      v9,
      v22);
  v11 = a2[1];
  if ( *a2 != v11 )
    std::_Stable_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
      *a2,
      v11,
      v8,
      v9,
      v22);
  CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(
    (CreativeFramework::TargetedContentLayoutHelpers::Tile *)v27,
    (const struct CreativeFramework::TargetedContentLayoutHelpers::Tile *)*a4);
  v12 = 1LL;
  v13 = *a4;
  if ( (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((a4[1] - *a4) >> 3)) > 1 )
  {
    v14 = 56LL;
    v15 = v29;
    v16 = v28;
    do
    {
      CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(
        (CreativeFramework::TargetedContentLayoutHelpers::Tile *)v23,
        (const struct CreativeFramework::TargetedContentLayoutHelpers::Tile *)(v14 + v13));
      if ( v24 == v16 && v25 == v15 )
      {
        v17 = wil::verify_hresult<long>(0x8007139F);
        v21 = v18;
        v20 = v19;
        wil::details::in1diag3::Throw_HrMsg(
          retaddr,
          (void *)0x57,
          (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
          (const char *)v17,
          (__int64)"Duplicate found. SubscriptionId: %ls Collection:%ul Index:%ul",
          *a1,
          v20,
          v21);
      }
      std::wstring::operator=(v27, v23);
      v16 = v24;
      v28 = v24;
      v15 = v25;
      v29 = v25;
      v30 = v26;
      std::wstring::_Tidy(v23, 1, 0LL);
      ++v12;
      v14 += 56LL;
      v13 = *a4;
    }
    while ( v12 < 0x6DB6DB6DB6DB6DB7LL * ((a4[1] - *a4) >> 3) );
  }
  std::wstring::_Tidy(v27, 1, 0LL);
}
