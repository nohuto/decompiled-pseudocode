/*
 * XREFs of ?ResolveTriggerName@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180081B40
 * Callers:
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18008082C (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x18007FD08 (--$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::WRL::Wrappers::HString *__fastcall Windows::Services::TargetedContent::Internal::ResolveTriggerName(
        Microsoft::WRL::Wrappers::HString *a1,
        int a2)
{
  const wchar_t **i; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)a1 = 0LL;
  for ( i = (const wchar_t **)&unk_1800D29C0; i != (const wchar_t **)off_1800D2A30; i += 2 )
  {
    if ( *(_DWORD *)i == a2 )
    {
      v5 = Microsoft::WRL::Wrappers::HString::Set<wchar_t const *>(a1, i + 1);
      if ( v5 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x5B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
          (const char *)(unsigned int)v5,
          1);
      return a1;
    }
  }
  return a1;
}
