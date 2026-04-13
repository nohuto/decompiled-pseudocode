/*
 * XREFs of ?DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z @ 0x1800801F4
 * Callers:
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x180085184 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A434 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DecodeBase64ToBtyeArray@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x1800802A0 (-DecodeBase64ToBtyeArray@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$uniq.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::DecodeBase64String(HSTRING *a1, __int64 a2)
{
  UINT32 v3; // ebx
  HRESULT String; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF
  PCNZWCH sourceString; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  sourceString = 0LL;
  Windows::Services::TargetedContent::Internal::DecodeBase64ToBtyeArray(a2, &sourceString, &v7);
  v3 = v7 >> 1;
  *a1 = 0LL;
  WindowsDeleteString(0LL);
  *a1 = 0LL;
  String = WindowsCreateString(sourceString, v3, a1);
  if ( String < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x142,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)String,
      1);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&sourceString);
  return a1;
}
