/*
 * XREFs of ?ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentTriggerState@1234@PEB_W@Z @ 0x180081C68
 * Callers:
 *     _lambda_06e77e5296b311cd39e114a3c1771c51_::operator() @ 0x180083BA8 (_lambda_06e77e5296b311cd39e114a3c1771c51_--operator().c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x180085184 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(const WCHAR *a1)
{
  LPCWCH *i; // rbx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = (LPCWCH *)&unk_1800D2A40; ; i += 2 )
  {
    if ( i == (LPCWCH *)&unk_1800D2A80 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2B2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070490LL,
        bIgnoreCase);
    if ( CompareStringOrdinal(i[1], -1, a1, -1, 1) == 2 )
      break;
  }
  return *(unsigned int *)i;
}
