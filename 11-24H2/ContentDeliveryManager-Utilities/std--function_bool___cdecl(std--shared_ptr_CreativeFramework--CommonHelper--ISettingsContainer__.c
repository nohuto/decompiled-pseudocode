/*
 * XREFs of std::function_bool___cdecl(std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&)_::function_bool___cdecl(std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&)___lambda_06e77e5296b311cd39e114a3c1771c51___ @ 0x180082760
 * Callers:
 *     ?UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrwlock@wil@@V?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@W4TargetedContentTriggerState@2345@1@Z@std@@@Z @ 0x180087CBC (-UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrw.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004564 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004768 (-_Xbad_alloc@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function_bool___cdecl_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper____::function_bool___cdecl_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper______lambda_06e77e5296b311cd39e114a3c1771c51___(
        __int64 a1,
        __int64 a2)
{
  char *v4; // rax

  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = (char *)operator new(0x28uLL);
  if ( !v4 )
    std::_Xbad_alloc();
  *(_QWORD *)v4 = off_1800C7FB0;
  *(_OWORD *)(v4 + 8) = *(_OWORD *)a2;
  *((_QWORD *)v4 + 3) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = v4;
  return a1;
}
