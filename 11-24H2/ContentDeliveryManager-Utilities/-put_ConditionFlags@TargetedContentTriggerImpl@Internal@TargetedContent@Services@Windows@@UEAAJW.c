/*
 * XREFs of ?put_ConditionFlags@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJW4TargetedContentTriggerConditionFlags@2345@@Z @ 0x180077BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::put_ConditionFlags(
        __int64 a1,
        int a2)
{
  *(_DWORD *)(a1 + 200) = a2;
  return 0LL;
}
