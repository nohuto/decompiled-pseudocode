/*
 * XREFs of ?RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z @ 0x180110350
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180062490 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x18010CF58 (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 */

void __fastcall SipcServer::RemoveEndpoint(SipcServer *this, struct SipcEndpoint *a2)
{
  char *v2; // r8
  __int64 *i; // rcx
  __int64 *v5; // rax
  __int64 **v6; // rdx

  v2 = (char *)this + 96;
  for ( i = (__int64 *)*((_QWORD *)this + 12); i != (__int64 *)v2; i = (__int64 *)*i )
  {
    v5 = (__int64 *)*i;
    if ( (struct SipcEndpoint *)i[2] == a2 )
    {
      if ( (__int64 *)v5[1] != i || (v6 = (__int64 **)i[1], *v6 != i) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = (__int64)v6;
      --*((_DWORD *)this + 28);
      SipcServer::EndpointListEntry::`scalar deleting destructor'((SipcServer::EndpointListEntry *)i);
      return;
    }
  }
}
