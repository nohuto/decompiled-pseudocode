/*
 * XREFs of ?ndisOidPreGenReceiveScale@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C2040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreGenReceiveScale(struct _NDIS_REQ_TRACKER *a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL) != 1 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  if ( *(_QWORD *)a1 && (*(_DWORD *)(*(_QWORD *)a1 + 120LL) & 0x80u) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    return 1;
  }
  return v1;
}
