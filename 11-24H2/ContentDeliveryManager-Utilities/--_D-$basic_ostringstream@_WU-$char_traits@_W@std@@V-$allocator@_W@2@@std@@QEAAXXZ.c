/*
 * XREFs of ??_D?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAXXZ @ 0x1800845B0
 * Callers:
 *     ??_G?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAAPEAXI@Z @ 0x180084690 (--_G-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAAPEAXI@Z.c)
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800878D8 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor$1 @ 0x1800BAEA0 (_Windows--Services--TargetedContent--Internal--SetTriggerStateTransitions_--_1_--dtor$1.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000568C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     ??1?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180083CA4 (--1-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 */

void __fastcall std::wostringstream::`vbase destructor'(__int64 a1)
{
  struct std::ios_base *v1; // rbx

  v1 = (struct std::ios_base *)(a1 + 136);
  std::wostringstream::~wostringstream(a1 + 136);
  *(_QWORD *)v1 = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(v1);
}
