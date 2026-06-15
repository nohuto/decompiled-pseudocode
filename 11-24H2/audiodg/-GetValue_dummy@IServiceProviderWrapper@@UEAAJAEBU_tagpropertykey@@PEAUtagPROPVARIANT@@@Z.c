/*
 * XREFs of ?GetValue_dummy@IServiceProviderWrapper@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x140063750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IServiceProviderWrapper::GetValue_dummy(
        IServiceProviderWrapper *this,
        const struct _tagpropertykey *a2,
        struct tagPROPVARIANT *a3)
{
  *(_OWORD *)&a3->vt = 0LL;
  a3->bstrblobVal.pData = 0LL;
  return 2147500033LL;
}
