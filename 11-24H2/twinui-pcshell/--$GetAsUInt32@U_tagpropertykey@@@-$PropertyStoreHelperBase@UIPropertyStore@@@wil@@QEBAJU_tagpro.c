/*
 * XREFs of ??$GetAsUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x1802B32C8
 * Callers:
 *     ?IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z @ 0x1806C9374 (-IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::GetAsUInt32<_tagpropertykey>(
        __int64 *a1,
        __int128 *a2,
        ULONG *a3)
{
  __int64 v4; // rcx
  HRESULT v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  int v8; // [rsp+30h] [rbp-38h]
  PROPVARIANT propvarIn[5]; // [rsp+40h] [rbp-28h] BYREF

  v7 = *a2;
  *a3 = 0;
  v4 = *a1;
  LOWORD(propvarIn[0]) = 0;
  v8 = *((_DWORD *)a2 + 4);
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v4 + 40LL))(v4, &v7, propvarIn);
  if ( v5 >= 0 )
  {
    if ( LOWORD(propvarIn[0]) )
    {
      *a3 = 0;
      v5 = PropVariantToUInt32(propvarIn, a3);
    }
    else
    {
      v5 = -2147023728;
    }
  }
  PropVariantClear(propvarIn);
  return (unsigned int)v5;
}
