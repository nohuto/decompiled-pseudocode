/*
 * XREFs of ApiSetpSearchForSectionIndex_V7 @ 0x1406565B0
 * Callers:
 *     ApiSetQuerySchemaInfo_V7 @ 0x140654ACC (ApiSetQuerySchemaInfo_V7.c)
 *     ApiSetpResolveHost @ 0x1406551AC (ApiSetpResolveHost.c)
 *     ApiSetCompose_ProcessV7Extension_Phase0 @ 0x1406557CC (ApiSetCompose_ProcessV7Extension_Phase0.c)
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x140655A2C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase0 @ 0x140656E3C (ApiSetCompose_V7_ProcessV6Extension_Phase0.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x14065702C (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     ApiSetpGetSearchKeyHash @ 0x1406563B8 (ApiSetpGetSearchKeyHash.c)
 */

__int64 __fastcall ApiSetpSearchForSectionIndex_V7(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int SearchKeyHash; // eax
  int v6; // r8d
  int v7; // edx
  unsigned int v8; // r10d
  unsigned int v9; // r9d
  int v10; // r8d
  int v11; // ecx
  __int64 v12; // rax

  SearchKeyHash = ApiSetpGetSearchKeyHash(a2, a3);
  v6 = *(unsigned __int16 *)(a2 + 4);
  v7 = 0;
  v8 = SearchKeyHash;
  v9 = *(_DWORD *)a2 + v6 * *(unsigned __int8 *)(a2 + 8);
  v10 = v6 - 1;
  if ( v10 < 0 )
    return 0xFFFFLL;
  while ( 1 )
  {
    v11 = (v7 + v10) >> 1;
    v12 = v9 + 8LL * v11 - *(unsigned __int16 *)(a1 + 18);
    if ( v8 >= *(_DWORD *)(v12 + a1) )
      break;
    v10 = v11 - 1;
LABEL_6:
    if ( v7 > v10 )
      return 0xFFFFLL;
  }
  if ( v8 > *(_DWORD *)(v12 + a1) )
  {
    v7 = v11 + 1;
    goto LABEL_6;
  }
  return *(unsigned __int16 *)(v12 + a1 + 4);
}
