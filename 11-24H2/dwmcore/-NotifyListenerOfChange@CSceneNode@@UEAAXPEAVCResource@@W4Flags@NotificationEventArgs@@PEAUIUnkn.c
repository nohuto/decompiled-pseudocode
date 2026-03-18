/*
 * XREFs of ?NotifyListenerOfChange@CSceneNode@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802A5A10
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F3E0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSceneNode::NotifyListenerOfChange(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  if ( a2 != *(__int64 **)(a1 + 136) )
    return CResource::NotifyListenerOfChange(a1, a2, 0, a1);
  return result;
}
