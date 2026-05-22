/*
 * XREFs of ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x18010BA24
 * Callers:
 *     ??1SipcServer@@EEAA@XZ @ 0x18010AF5C (--1SipcServer@@EEAA@XZ.c)
 *     ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x18010D940 (-OnDisposePublic@SipcServer@@EEAAXXZ.c)
 * Callees:
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x18010B048 (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall NtList<SipcServer::EndpointListEntry>::Clear(SipcServer::EndpointListEntry *a1)
{
  SipcServer::EndpointListEntry *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *(SipcServer::EndpointListEntry **)a1;
    if ( *(SipcServer::EndpointListEntry **)(*(_QWORD *)a1 + 8LL) != a1
      || (result = *(_QWORD *)v2, *(SipcServer::EndpointListEntry **)(*(_QWORD *)v2 + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)a1 = result;
    *(_QWORD *)(result + 8) = a1;
    if ( v2 == a1 )
      break;
    SipcServer::EndpointListEntry::`scalar deleting destructor'(v2);
    --*((_DWORD *)a1 + 4);
  }
  return result;
}
