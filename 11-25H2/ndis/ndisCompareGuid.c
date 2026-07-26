/*
 * XREFs of ndisCompareGuid @ 0x140049A00
 * Callers:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1400499A0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfCreateNetworkBlock @ 0x1400D45DC (ndisIfCreateNetworkBlock.c)
 *     ?ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400D52C0 (-ndisNsiGetNetworkInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCompareGuid(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax
  SIZE_T v6; // rax
  unsigned int v8; // r8d

  if ( *(_DWORD *)a1 > *(_DWORD *)a2 )
    return 1LL;
  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    return 0xFFFFFFFFLL;
  v4 = *(_WORD *)(a1 + 4);
  if ( v4 > *(_WORD *)(a2 + 4) )
    return 1LL;
  if ( v4 < *(_WORD *)(a2 + 4) )
    return 0xFFFFFFFFLL;
  v5 = *(_WORD *)(a1 + 6);
  if ( v5 > *(_WORD *)(a2 + 6) )
    return 1LL;
  if ( v5 < *(_WORD *)(a2 + 6) )
    return 0xFFFFFFFFLL;
  v6 = RtlCompareMemory((const void *)(a1 + 8), (const void *)(a2 + 8), 8uLL);
  if ( v6 == 8 )
    return 0LL;
  v8 = -1;
  if ( *(_BYTE *)(v6 + a1 + 8) > *(_BYTE *)(v6 + a2 + 8) )
    return 1;
  return v8;
}
