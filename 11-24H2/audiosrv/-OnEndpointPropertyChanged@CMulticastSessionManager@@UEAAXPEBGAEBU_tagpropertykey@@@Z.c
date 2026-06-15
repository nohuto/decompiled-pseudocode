/*
 * XREFs of ?OnEndpointPropertyChanged@CMulticastSessionManager@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x180100800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMulticastSessionManager::OnEndpointPropertyChanged(
        CMulticastSessionManager *this,
        const unsigned __int16 *a2,
        const struct _tagpropertykey *a3)
{
  __int64 **i; // rbx

  for ( i = (__int64 **)*((_QWORD *)this + 3); i; i = (__int64 **)*i )
    (*(void (__fastcall **)(__int64 *, const unsigned __int16 *, const struct _tagpropertykey *))(*i[1] + 40))(
      i[1],
      a2,
      a3);
}
