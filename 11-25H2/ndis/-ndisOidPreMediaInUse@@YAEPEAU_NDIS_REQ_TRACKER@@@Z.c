/*
 * XREFs of ?ndisOidPreMediaInUse@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400774C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreMediaInUse(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // r8

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 2);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 32);
  }
  else
  {
    v4 = 0LL;
    if ( *(_QWORD *)a1 )
      v4 = *(_QWORD *)a1;
  }
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 4u )
    {
      **(_DWORD **)(v1 + 40) = *(_DWORD *)(v4 + 464);
      *(_DWORD *)(v1 + 52) = 4;
      return 1;
    }
    *(_DWORD *)(v1 + 56) = 4;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  return 0;
}
