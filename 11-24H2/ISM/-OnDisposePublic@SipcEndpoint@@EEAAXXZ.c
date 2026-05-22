/*
 * XREFs of ?OnDisposePublic@SipcEndpoint@@EEAAXXZ @ 0x18010F810
 * Callers:
 *     <none>
 * Callees:
 *     ?Disconnect@SipcEndpoint@@UEAAXXZ @ 0x18010EC70 (-Disconnect@SipcEndpoint@@UEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SipcEndpoint::OnDisposePublic(SipcEndpoint *this)
{
  __int64 v2; // rcx

  SipcEndpoint::Disconnect(this);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64, SipcEndpoint *))(*(_QWORD *)v2 + 16LL))(v2, this);
}
