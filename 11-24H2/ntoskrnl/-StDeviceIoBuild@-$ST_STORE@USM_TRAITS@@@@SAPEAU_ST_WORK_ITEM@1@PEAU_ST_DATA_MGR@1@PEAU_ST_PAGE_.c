/*
 * XREFs of ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14060916C
 * Callers:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140609A7C (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14060AA3C (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     ?StRegionReadDereference@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1404F348C (-StRegionReadDereference@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StRegionReadReference@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14060AF90 (-StRegionReadReference@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     SmCalcIoWorkItemSize @ 0x14060D3C4 (SmCalcIoWorkItemSize.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::StDeviceIoBuild(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r11d
  _DWORD *v8; // rdi
  int v9; // r8d
  unsigned int v10; // r15d
  int v11; // r10d
  unsigned int v12; // ebp
  __int64 v13; // rsi
  unsigned int v14; // eax
  size_t v15; // r14
  int v16; // ecx

  v6 = *(_DWORD *)(a1 + 824) + *(unsigned __int16 *)(a2 + 4);
  v8 = 0LL;
  v9 = *(_DWORD *)(a1 + 792);
  v10 = *(_DWORD *)a2 >> *(_DWORD *)(a1 + 812);
  v11 = (v9 - 1) & (16 * (*(_DWORD *)a2 & *(_DWORD *)(a1 + 808)));
  v12 = v9 + v11 - ((v9 - 1) & (v11 + v9 + v6 - 1)) + v6 - 1;
  if ( (unsigned int)ST_STORE<SM_TRAITS>::StRegionReadReference(a1, v10) )
  {
    v13 = *(_QWORD *)(a1 + 2184);
    if ( v13 )
    {
      *(_DWORD *)(a1 + 2184) |= 1u;
    }
    else
    {
      v13 = SmAllocEx(v12 + *(_DWORD *)(a1 + 792) + 40, 0x74536D73u, -1);
      if ( !v13 )
        goto LABEL_14;
    }
    *(_OWORD *)v13 = 0LL;
    *(_OWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v13 + 32) = 0LL;
    *(_DWORD *)v13 = 1;
    *(_OWORD *)(v13 + 16) = *(_OWORD *)a2;
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(a2 + 16);
    v14 = SmCalcIoWorkItemSize(
            *(_QWORD *)(a1 + 800),
            -(__int64)*(unsigned int *)(a1 + 792) & (v13 + *(unsigned int *)(a1 + 792) + 39LL),
            v12);
    v8 = *(_DWORD **)(a1 + 2192);
    v15 = v14;
    if ( v8 )
    {
      *(_DWORD *)(a1 + 2192) |= 1u;
LABEL_8:
      memset_0(v8, 0, v15);
      *v8 |= 7u;
      *((_QWORD *)v8 + 1) = a4;
      *((_QWORD *)v8 + 2) = v13;
      v8[6] = *(_DWORD *)a2;
      v8[7] = (32 * v12) | ((unsigned __int8)v8[7] ^ (*(_BYTE *)(a1 + 832) ^ *((_BYTE *)v8 + 28)) & 2) & 0x1F;
      return v8;
    }
    v8 = (_DWORD *)SmAllocEx(v14, 0x74536D73u, -1);
    if ( v8 )
      goto LABEL_8;
    v8 = 0LL;
    v16 = *(_DWORD *)(a1 + 2184);
    if ( (v16 & 1) != 0 && (v13 | 1) == *(_QWORD *)(a1 + 2184) )
      *(_DWORD *)(a1 + 2184) = v16 & 0xFFFFFFFE;
    else
      ExFreePoolWithTag((PVOID)v13, 0);
LABEL_14:
    ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, v10);
  }
  return v8;
}
