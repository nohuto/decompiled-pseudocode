/*
 * XREFs of ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14042A960
 * Callers:
 *     ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140609B78 (-StDmEtwPageRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14060A0A8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET(_DWORD *a1, __int64 a2)
{
  int v2; // r11d
  unsigned int v4; // r9d
  __int64 v5; // rdx
  unsigned int v6; // ebx
  int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rcx
  _DWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  v2 = a1[114];
  v4 = *(_DWORD *)(a2 + 4);
  v5 = v4 >> v2;
  v6 = a1[115];
  v7 = a1[116];
  v8 = (unsigned int)a1[118];
  _BitScanReverse((unsigned int *)&v9, v5);
  for ( result = (_DWORD *)(v8
                          + v7 * (v4 & v6)
                          + *(_QWORD *)(*(_QWORD *)&a1[2 * v9 + 48] + 16 * (v5 ^ (unsigned int)(1 << v9))));
        *result == -1;
        result = (_DWORD *)(v8
                          + v7 * (result[1] & v6)
                          + *(_QWORD *)(*(_QWORD *)&a1[2 * v12 + 48] + 16 * (v11 ^ (unsigned int)(1 << v12)))) )
  {
    v11 = (unsigned int)(result[1] >> v2);
    _BitScanReverse((unsigned int *)&v12, v11);
  }
  return result;
}
