/*
 * XREFs of ?OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18008DEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@@Z @ 0x18008DF38 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::OnAccessLost(ExecutionModel::ExternalResourceSet *this)
{
  if ( (*((_BYTE *)this + 1352) & 2) != 0 )
    return 1LL;
  ExecutionModel::ExternalResourceSet::QueueMessage(this, 2LL);
  return 0LL;
}
