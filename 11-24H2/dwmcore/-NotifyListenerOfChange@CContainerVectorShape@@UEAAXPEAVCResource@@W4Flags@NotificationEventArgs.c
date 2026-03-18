/*
 * XREFs of ?NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180136420
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F3E0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180136530 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801368D0 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180136900 (-IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CContainerVectorShape::NotifyListenerOfChange(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 (__fastcall *v8)(__int64 *, __int64); // rax
  char v9; // al
  void (__fastcall *v10)(__int64 *, _QWORD, __int64); // rax

  v5 = a3;
  if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
  {
    v5 = 0;
    a4 = 0LL;
  }
  v8 = *(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 64);
  if ( (char *)v8 == (char *)CSurfaceBrush::IsOfType )
  {
    v9 = CSurfaceBrush::IsOfType(a2, 184LL);
  }
  else if ( (char *)v8 == (char *)CSpriteVisual::IsOfType )
  {
    v9 = CSpriteVisual::IsOfType(a2, 184LL);
  }
  else if ( (char *)v8 == (char *)CSpriteVectorShape::IsOfType )
  {
    v9 = CSpriteVectorShape::IsOfType(a2, 184LL);
  }
  else
  {
    v9 = v8(a2, 184LL);
  }
  if ( v9 && !v5 )
    CResource::NotifyListenerOfChange(a1, a2, 5u, 0LL);
  v10 = *(void (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 80);
  if ( (char *)v10 == (char *)CResource::NotifyOnChanged )
  {
    CResource::NotifyOnChanged(a2, v5, a4);
  }
  else if ( (char *)v10 == (char *)CBrush::NotifyOnChanged )
  {
    CBrush::NotifyOnChanged((__int64)a2, v5, a4);
  }
  else
  {
    v10(a2, v5, a4);
  }
}
