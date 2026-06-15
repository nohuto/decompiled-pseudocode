/*
 * XREFs of ?Order@CAccessAce@CDacl@ATL@@SAHAEBV123@0@Z @ 0x1800AB380
 * Callers:
 *     ?PrepareAcesForACL@CDacl@ATL@@EEBAXXZ @ 0x1800AB440 (-PrepareAcesForACL@CDacl@ATL@@EEBAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CDacl::CAccessAce::Order(
        const struct ATL::CDacl::CAccessAce *a1,
        const struct ATL::CDacl::CAccessAce *a2)
{
  char v5; // al
  unsigned int v6; // ebx

  if ( (*((_BYTE *)a1 + 132) & 0x10) != 0 )
  {
    if ( (*((_BYTE *)a2 + 132) & 0x10) == 0 )
      return 0xFFFFFFFFLL;
  }
  else if ( (*((_BYTE *)a2 + 132) & 0x10) != 0 )
  {
    return 1LL;
  }
  v5 = *((_BYTE *)a2 + 144);
  v6 = 0;
  if ( *((_BYTE *)a1 + 144) )
  {
    if ( !v5 )
      return 0xFFFFFFFFLL;
  }
  else if ( v5 )
  {
    return 1LL;
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a1 + 32LL))(a1)
    && !(*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    return 0xFFFFFFFFLL;
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a1 + 32LL))(a1) )
    return 0LL;
  LOBYTE(v6) = (*(unsigned __int8 (__fastcall **)(const struct ATL::CDacl::CAccessAce *))(*(_QWORD *)a2 + 32LL))(a2) != 0;
  return v6;
}
