/*
 * XREFs of ?OnEndpointPropertyChanged@CMulticastSessionManager@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800FD390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMulticastSessionManager::OnEndpointPropertyChanged(
        CMulticastSessionManager *this,
        const unsigned __int16 *a2,
        const struct _tagpropertykey *a3)
{
  __int64 **i; // rbx

  for ( i = (__int64 **)*((_QWORD *)this + 3); i; i = (__int64 **)*i )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*i[1] + 24))(i[1]) )
      (*(void (__fastcall **)(__int64 *, const unsigned __int16 *, const struct _tagpropertykey *))(*i[1] + 40))(
        i[1],
        a2,
        a3);
  }
}
