/*
 * XREFs of ?get_ConditionFlags@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAW4TargetedContentTriggerConditionFlags@2345@@Z @ 0x180076EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::get_ConditionFlags(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this,
        enum Windows::Services::TargetedContent::Internal::TargetedContentTriggerConditionFlags *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 50);
  return 0LL;
}
