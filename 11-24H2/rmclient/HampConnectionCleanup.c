/*
 * XREFs of HampConnectionCleanup @ 0x180004ECC
 * Callers:
 *     HampConnectionDestroy @ 0x180004D70 (HampConnectionDestroy.c)
 * Callees:
 *     HamFreeBuffer @ 0x1800091E0 (HamFreeBuffer.c)
 */

void __fastcall HampConnectionCleanup(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *(_QWORD *)a1 )
  {
    if ( *(_BYTE *)(a1 + 156) )
    {
      switch ( *(_BYTE *)(a1 + 156) )
      {
        case 1:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EFA0, 1u, 0LL, a1);
          break;
        case 2:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EFD0, 1u, 0LL, a1);
          break;
        case 3:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021CA0, 1u, 0LL, a1, 0LL);
          break;
        case 4:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001F000, 1u, 0LL, a1);
          break;
        case 5:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EA50, 1u, 0LL, a1);
          break;
        case 6:
          NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EDF8, 1u, 0LL, a1);
          break;
      }
    }
    else
    {
      NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 2u, 0LL, a1);
    }
  }
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
    HamFreeBuffer(v2);
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
    HamFreeBuffer(v3);
}
