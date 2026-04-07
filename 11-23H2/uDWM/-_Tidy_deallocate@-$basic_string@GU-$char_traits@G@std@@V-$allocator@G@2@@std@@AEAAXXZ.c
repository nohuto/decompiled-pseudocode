/*
 * XREFs of ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031AE8
 * Callers:
 *     ??1CDWriteText@@UEAA@XZ @ 0x18003082C (--1CDWriteText@@UEAA@XZ.c)
 *     ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x1800316C4 (-CreateTextFormat@CDWriteText@@AEAAJXZ.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800BF8F0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x1800F0028 (--$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@.c)
 *     ?EndAnimationFrameStats@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4FF8 (-EndAnimationFrameStats@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transit.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18006B8CC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall std::wstring::_Tidy_deallocate(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax
  void *v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 >= 8 )
  {
    v5 = 2 * v2 + 2;
    v4 = *(void **)a1;
    if ( v5 >= 0x1000 )
      std::_Adjust_manually_vector_aligned(&v4, &v5);
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  }
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  return result;
}
