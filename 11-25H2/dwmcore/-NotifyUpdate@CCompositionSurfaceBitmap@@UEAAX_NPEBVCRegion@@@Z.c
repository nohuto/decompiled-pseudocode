/*
 * XREFs of ?NotifyUpdate@CCompositionSurfaceBitmap@@UEAAX_NPEBVCRegion@@@Z @ 0x1801EF660
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompositionSurfaceBitmap::NotifyUpdate(
        CCompositionSurfaceBitmap *this,
        char a2,
        const struct CRegion *a3)
{
  _DWORD *v4; // rcx
  __int64 (__fastcall *v5)(_DWORD *, unsigned int, __int64); // rax

  v4 = (_DWORD *)((char *)this - 80);
  v5 = *(__int64 (__fastcall **)(_DWORD *, unsigned int, __int64))(*(_QWORD *)v4 + 80LL);
  if ( a2 )
  {
    v5(v4, 0, (__int64)v4);
  }
  else
  {
    *((_QWORD *)this + 3) = a3;
    if ( v5 == CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(v4, 1u, (__int64)v4);
    else
      v5(v4, 1u, (__int64)v4);
    *((_QWORD *)this + 3) = 0LL;
  }
}
