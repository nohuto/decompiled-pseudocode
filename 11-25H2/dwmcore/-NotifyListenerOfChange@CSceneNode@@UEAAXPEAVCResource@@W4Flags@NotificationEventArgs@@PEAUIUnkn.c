/*
 * XREFs of ?NotifyListenerOfChange@CSceneNode@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802AF550
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021130 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSceneNode::NotifyListenerOfChange(CMaskBrush *a1, CResource *a2)
{
  __int64 result; // rax

  if ( a2 != *((CResource **)a1 + 17) )
    return CResource::NotifyListenerOfChange((__int64)a1, a2, 0, a1);
  return result;
}
