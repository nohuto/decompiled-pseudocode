/*
 * XREFs of ?ndisOidPreMaxLookahead@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400813E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPreMaxLookahead(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r8
  unsigned __int8 result; // al

  v1 = *((_QWORD *)a1 + 4);
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 4u )
    {
      **(_DWORD **)(v1 + 40) = *(_DWORD *)(*(_QWORD *)a1 + 596LL);
      result = 1;
      *(_DWORD *)(v1 + 52) = 4;
      return result;
    }
    *(_DWORD *)(v1 + 56) = 4;
    *((_DWORD *)a1 + 10) = -1073676268;
  }
  return 0;
}
