/*
 * XREFs of ?NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021130 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021400 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022620 (-IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D700 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D720 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CContainerVectorShape::NotifyListenerOfChange(__int64 a1, CResource *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  bool (__fastcall *v8)(__int64, int); // rax
  char v9; // al
  void (__fastcall *v10)(CResource *, _QWORD, __int64); // rax

  v4 = a4;
  v5 = a3;
  if ( (((_DWORD)a3 - 2) & 0xFFFFFFFD) == 0 )
  {
    v5 = 0;
    v4 = 0LL;
  }
  v8 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 64LL);
  if ( (char *)v8 == (char *)CSurfaceBrush::IsOfType )
  {
    v9 = CSurfaceBrush::IsOfType(a2, 182LL);
  }
  else if ( (char *)v8 == (char *)CSpriteVisual::IsOfType )
  {
    v9 = CSpriteVisual::IsOfType(a2, 182LL, a3, a4);
  }
  else if ( v8 == CSpriteVectorShape::IsOfType )
  {
    v9 = CSpriteVectorShape::IsOfType((__int64)a2, 182);
  }
  else
  {
    v9 = v8((__int64)a2, 182);
  }
  if ( v9 && !v5 )
    CResource::NotifyListenerOfChange(a1, a2, 5u, 0LL);
  v10 = *(void (__fastcall **)(CResource *, _QWORD, __int64))(*(_QWORD *)a2 + 80LL);
  if ( (char *)v10 == (char *)CResource::NotifyOnChanged )
  {
    CResource::NotifyOnChanged(a2, v5, v4);
  }
  else if ( (char *)v10 == (char *)CBrush::NotifyOnChanged )
  {
    CBrush::NotifyOnChanged((__int64)a2, v5, v4);
  }
  else
  {
    v10(a2, v5, v4);
  }
}
