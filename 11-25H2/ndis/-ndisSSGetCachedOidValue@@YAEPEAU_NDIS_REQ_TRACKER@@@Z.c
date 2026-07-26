/*
 * XREFs of ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400611D0
 * Callers:
 *     ?ndisOidPreStatistics@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140060CA0 (-ndisOidPreStatistics@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreGenStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140060CF0 (-ndisOidPreGenStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     memmove @ 0x1400EE080 (memmove.c)
 */

unsigned __int8 __fastcall ndisSSGetCachedOidValue(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 i; // rdx
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // eax

  v1 = *((_QWORD *)a1 + 4);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 5 )
      return 0;
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 4448LL) + 600LL) + 24 * i;
    if ( *(_DWORD *)v4 == *(_DWORD *)(v1 + 32) )
      break;
  }
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 16);
    if ( v5 == -1073676265 || v5 == -1073741637 || v5 == 65537 )
    {
      *((_DWORD *)a1 + 10) = v5;
      return 1;
    }
    if ( *(_BYTE *)(v4 + 20) )
    {
      v6 = *(_DWORD *)(v4 + 4);
      if ( *(_DWORD *)(v1 + 48) >= v6 )
      {
        memmove(*(void **)(v1 + 40), *(const void **)(v4 + 8), v6);
        *(_DWORD *)(v1 + 52) = *(_DWORD *)(v4 + 4);
        *((_DWORD *)a1 + 10) = 0;
        return 1;
      }
    }
  }
  return 0;
}
