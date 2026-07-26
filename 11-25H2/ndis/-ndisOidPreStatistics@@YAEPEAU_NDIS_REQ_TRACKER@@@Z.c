/*
 * XREFs of ?ndisOidPreStatistics@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140060CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400611D0 (-ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreStatistics(struct _NDIS_REQ_TRACKER *a1)
{
  unsigned __int8 result; // al
  __int64 v2; // r9

  result = 0;
  v2 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  else if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 4448) )
      return ndisSSGetCachedOidValue(a1);
  }
  return result;
}
