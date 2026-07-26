/*
 * XREFs of ndisIfFindNextRcvAddress @ 0x140148318
 * Callers:
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400CC9E0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400CCCD0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     memcmp @ 0x1400E7A20 (memcmp.c)
 */

__int64 __fastcall ndisIfFindNextRcvAddress(__int64 a1, const void *a2)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  unsigned int i; // ebx
  __int64 v7; // r14

  v2 = *(_DWORD *)(a1 + 1288);
  v3 = 0LL;
  for ( i = 0; i < v2; ++i )
  {
    v7 = *(_QWORD *)(a1 + 1280);
    if ( !memcmp(a2, (const void *)(v7 + 8 * (5LL * i + 1)), *(unsigned __int16 *)(v7 + 40LL * i + 4)) )
    {
      if ( i < v2 - 1 )
        return v7 + 40LL * (i + 1);
      return v3;
    }
  }
  return v3;
}
