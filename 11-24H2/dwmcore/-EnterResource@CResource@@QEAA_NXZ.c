/*
 * XREFs of ?EnterResource@CResource@@QEAA_NXZ @ 0x18007F3B0
 * Callers:
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x18007D1C0 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007EFE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F3E0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180136550 (-NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@.c)
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
