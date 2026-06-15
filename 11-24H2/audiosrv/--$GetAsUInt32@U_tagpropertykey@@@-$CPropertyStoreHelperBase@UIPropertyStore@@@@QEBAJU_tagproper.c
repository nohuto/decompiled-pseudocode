/*
 * XREFs of ??$GetAsUInt32@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x180063D3C
 * Callers:
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x180063CF8 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        ULONG *a3)
{
  HRESULT v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+30h] [rbp-38h]
  PROPVARIANT pvar[5]; // [rsp+40h] [rbp-28h] BYREF

  *a3 = 0;
  LOWORD(pvar[0]) = 0;
  v6 = *a2;
  v7 = *((_DWORD *)a2 + 4);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(*(_QWORD *)*a1 + 40LL))(*a1, &v6, pvar);
  if ( v4 >= 0 )
  {
    if ( LOWORD(pvar[0]) )
    {
      *a3 = 0;
      v4 = PropVariantToUInt32(pvar, a3);
    }
    else
    {
      v4 = -2147023728;
    }
  }
  PropVariantClear(pvar);
  return (unsigned int)v4;
}
