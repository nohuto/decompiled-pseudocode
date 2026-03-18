/*
 * XREFs of ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180208190
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompositionLight::NotifyOnChanged(_DWORD *a1, unsigned int a2, __int64 a3)
{
  char v3; // si
  char v7; // al
  _BYTE *v8; // rcx

  v3 = 0;
  if ( a2 == 11 || a2 == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 256LL))(a1);
    v8 = a1 + 42;
    if ( !v7 || !*v8 )
      v3 = 1;
    *v8 = v7;
    if ( v3 )
      goto LABEL_5;
  }
  else if ( a2 == 5 )
  {
LABEL_5:
    CResource::NotifyOnChanged(a1, a2, a3);
  }
}
