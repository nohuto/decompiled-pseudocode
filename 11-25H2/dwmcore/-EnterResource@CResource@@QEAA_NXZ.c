/*
 * XREFs of ?EnterResource@CResource@@QEAA_NXZ @ 0x1800213D0
 * Callers:
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021130 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800217B0 (-NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@.c)
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021DE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x1800AF200 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CResource::EnterResource(CResource *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 10) = v1 ^ ((unsigned __int8)v1 ^ (unsigned __int8)(v1 + 2)) & 6;
  return (((unsigned __int8)v1 ^ ((unsigned __int8)v1 ^ (unsigned __int8)(v1 + 2)) & 6) & 6) == 2;
}
