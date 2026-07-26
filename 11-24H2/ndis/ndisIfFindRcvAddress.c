/*
 * XREFs of ndisIfFindRcvAddress @ 0x1401483A4
 * Callers:
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400CC9E0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400CCCD0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     memcmp @ 0x1400E7A20 (memcmp.c)
 */

__int64 __fastcall ndisIfFindRcvAddress(__int64 a1, const void *a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rbx
  unsigned int i; // edi
  __int64 v7; // rsi

  v2 = *(_DWORD *)(a1 + 1288);
  v3 = 0LL;
  for ( i = 0; i < v2; ++i )
  {
    v7 = *(_QWORD *)(a1 + 1280) + 40LL * i;
    if ( !memcmp(a2, (const void *)(v7 + 8), *(unsigned __int16 *)(v7 + 4)) )
      return v7;
  }
  return v3;
}
