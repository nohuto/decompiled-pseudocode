/*
 * XREFs of ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14060C008
 * Callers:
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14060C37C (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140385D30 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmEtwEnabled @ 0x140387420 (SmEtwEnabled.c)
 *     qsort @ 0x1404FED20 (qsort.c)
 *     ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x14060C1AC (-StDmRegionGetKeys@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKK.c)
 *     SmEtwLogRegionOp @ 0x14060D37C (SmEtwLogRegionOp.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionEvict(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  ULONGLONG *v7; // rax
  int v8; // r9d
  __int64 v9; // rcx
  char v10; // dl
  void *v11; // rsp
  int Keys; // esi
  __int64 v13; // rbx
  __int64 v14; // r8
  int v15; // eax
  int *v16; // rbx
  int v17; // edx
  int *v18; // rdi
  int v19; // ecx
  _DWORD Base[240]; // [rsp+20h] [rbp-400h] BYREF
  size_t NumOfElements; // [rsp+420h] [rbp+0h] BYREF
  __int64 v23; // [rsp+428h] [rbp+8h]
  __int128 v24; // [rsp+430h] [rbp+10h] BYREF
  __int128 v25; // [rsp+440h] [rbp+20h]

  v5 = a3;
  v24 = 0LL;
  v23 = a2;
  v25 = 0LL;
  LODWORD(v25) = _mm_cvtsi128_si32((__m128i)0LL) | 1;
  LODWORD(v24) = 1;
  v7 = SmEtwEnabled(0);
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 1432);
    if ( v9 )
      v10 = *(_BYTE *)(v9 + v5);
    else
      v10 = 0;
    SmEtwLogRegionOp((_DWORD)v7, 3, a1, v5, 0, *(_WORD *)(*(_QWORD *)(a1 + 1416) + 2 * v5), v10);
    v8 = v23;
  }
  v11 = alloca(1024LL);
LABEL_7:
  LODWORD(NumOfElements) = 256;
  Keys = ST_STORE<SM_TRAITS>::StDmRegionGetKeys(a1, v8, v5, v8, a5, (__int64)Base, (__int64)&NumOfElements);
  if ( Keys < 0 || !(_DWORD)NumOfElements )
    return (unsigned int)Keys;
  v13 = (unsigned int)NumOfElements;
  qsort(Base, (unsigned int)NumOfElements, 4uLL, ST_STORE<SM_TRAITS>::StpKeyCompare);
  v15 = Base[0];
  v16 = &Base[v13];
  DWORD2(v24) = Base[0];
  v17 = Base[0];
  v18 = Base;
  v19 = 0;
LABEL_10:
  if ( v15 == v17 )
    goto LABEL_13;
  while ( 1 )
  {
    HIDWORD(v24) = v19;
    Keys = ST_STORE<SM_TRAITS>::StDmPageRemove((_DWORD *)a1, (__int64)&v24, v14);
    if ( Keys < 0 )
      return (unsigned int)Keys;
    v15 = *v18;
    v19 = 0;
    DWORD2(v24) = *v18;
LABEL_13:
    ++v19;
    if ( ++v18 < v16 )
    {
      v17 = *v18;
      ++v15;
      goto LABEL_10;
    }
    if ( v18 != v16 )
    {
      v8 = v23;
      if ( (unsigned int)NumOfElements < 0x100 )
        return (unsigned int)Keys;
      goto LABEL_7;
    }
  }
}
