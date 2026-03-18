/*
 * XREFs of ?NotifyListenerOfChange@CSceneComponent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180277D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSceneComponent::NotifyListenerOfChange(__int64 a1, __int64 *a2)
{
  return CResource::NotifyListenerOfChange(a1, a2, 0, a1);
}
