/*
 * XREFs of ?OnEndpointStateChanged@CMulticastSessionManager@@UEAAXPEBG_N@Z @ 0x1800FD400
 * Callers:
 *     _lambda_db7e7b73629c8ec0784d00519493d49e_::operator() @ 0x1800FC588 (_lambda_db7e7b73629c8ec0784d00519493d49e_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMulticastSessionManager::OnEndpointStateChanged(
        CMulticastSessionManager *this,
        const unsigned __int16 *a2,
        char a3)
{
  __int64 **i; // rbx
  __int64 v6; // r8

  for ( i = (__int64 **)*((_QWORD *)this + 3); i; i = (__int64 **)*i )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*i[1] + 24))(i[1]) )
    {
      LOBYTE(v6) = a3;
      (*(void (__fastcall **)(__int64 *, const unsigned __int16 *, __int64))(*i[1] + 48))(i[1], a2, v6);
    }
  }
}
