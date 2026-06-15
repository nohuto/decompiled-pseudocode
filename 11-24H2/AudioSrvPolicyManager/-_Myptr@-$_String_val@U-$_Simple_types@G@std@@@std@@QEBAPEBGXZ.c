/*
 * XREFs of ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAPEBGXZ @ 0x180008B40
 * Callers:
 *     ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x180008900 (-UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@P.c)
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x18001E538 (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Has_ea_18001E538.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18002C0E4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x18002C3FC (--4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18002D770 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?HasDuckedStream@CProcess@@QEAAHXZ @ 0x1800327C0 (-HasDuckedStream@CProcess@@QEAAHXZ.c)
 *     std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call @ 0x180039AE0 (std--_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_::_Do_call @ 0x18003AB00 (std--_Func_impl_no_alloc__lambda_7fa36116be3e294e551541c666ff9548__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_::_Do_call @ 0x18003AE00 (std--_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_--_Do_call.c)
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x18003C4CC (--1CAastPreStartContext@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003C6AC (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180046684 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 * Callees:
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B348 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 */

__int64 __fastcall std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(__int64 a1)
{
  __int64 v1; // rcx

  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(a1) )
    return *(_QWORD *)v1;
  else
    return v1;
}
