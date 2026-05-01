/*
 * XREFs of ?GetRuntimeClassName@?$implements@VSnapLayoutProvider@@UIInspectable@@@winrt@@EEBA?AUhstring@2@XZ @ 0x180500520
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$runtime_class_name@UIInspectable@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x180508B78 (-get@-$runtime_class_name@UIInspectable@@X@impl@winrt@@SA-AUhstring@3@XZ.c)
 */

__int64 __fastcall winrt::implements<SnapLayoutProvider,IInspectable>::GetRuntimeClassName(__int64 a1, __int64 a2)
{
  winrt::impl::runtime_class_name<IInspectable,void>::get(a2);
  return a2;
}
