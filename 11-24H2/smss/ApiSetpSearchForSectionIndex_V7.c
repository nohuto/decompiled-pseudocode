/*
 * XREFs of ApiSetpSearchForSectionIndex_V7 @ 0x14001AB08
 * Callers:
 *     ApiSetpResolveHost @ 0x14001990C (ApiSetpResolveHost.c)
 * Callees:
 *     ApiSetpGetSearchKeyHash @ 0x14001A950 (ApiSetpGetSearchKeyHash.c)
 */

__int64 __fastcall ApiSetpSearchForSectionIndex_V7(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int SearchKeyHash; // eax
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // r10d
  int v9; // r8d
  __int64 v10; // r9
  int v11; // ecx
  __int64 v12; // rax

  SearchKeyHash = ApiSetpGetSearchKeyHash(
                    a3,
                    (*(_BYTE *)(a2 + 9) & 2) != 0,
                    (*(_BYTE *)(a1 + 2) & 8) != 0,
                    (*(_BYTE *)(a1 + 2) & 0x10) != 0,
                    *(_BYTE *)(a2 + 10));
  v6 = *(unsigned __int16 *)(a2 + 4);
  v7 = 0;
  v8 = SearchKeyHash;
  v9 = v6 - 1;
  v10 = *(_DWORD *)a2 + v6 * (unsigned int)*(unsigned __int8 *)(a2 + 8);
  if ( v6 - 1 < 0 )
    return 0xFFFFLL;
  while ( 1 )
  {
    v11 = (v7 + v9) >> 1;
    v12 = v10 + 8LL * v11 - *(unsigned __int16 *)(a1 + 18);
    if ( v8 >= *(_DWORD *)(v12 + a1) )
      break;
    v9 = v11 - 1;
LABEL_6:
    if ( v7 > v9 )
      return 0xFFFFLL;
  }
  if ( v8 > *(_DWORD *)(v12 + a1) )
  {
    v7 = v11 + 1;
    goto LABEL_6;
  }
  return *(unsigned __int16 *)(v12 + a1 + 4);
}
