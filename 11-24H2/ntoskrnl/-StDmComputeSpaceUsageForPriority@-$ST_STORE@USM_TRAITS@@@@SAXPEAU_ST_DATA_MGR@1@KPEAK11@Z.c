/*
 * XREFs of ?StDmComputeSpaceUsageForPriority@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAK11@Z @ 0x140406250
 * Callers:
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@KPEAK@Z @ 0x1406094F4 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmComputeSpaceUsageForPriority(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 v6; // r8
  int v7; // edi
  unsigned int v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // esi
  int v11; // ebp
  __int64 result; // rax
  __int64 v13; // rdx

  v6 = a2;
  v7 = *(_DWORD *)(a1 + 8LL * a2 + 2208);
  v8 = *(_DWORD *)(a1 + 8LL * a2 + 2212);
  if ( *(_BYTE *)(a1 + 776) )
    v9 = v7 << *(_DWORD *)(a1 + 812);
  else
    v9 = v8;
  v10 = *(_DWORD *)(a1 + 816);
  v11 = *(_DWORD *)(a1 + 820);
  result = v7 * (v10 - v11 + 1) - v8;
  if ( (unsigned int)result < v10
    || v7 * (*(_DWORD *)(a1 + 816) - v11 + 1) < v8
    || (v13 = *(unsigned int *)(a1 + 16 * (v6 + 102)), (_DWORD)v13 != -1)
    && (result = v11 + (*(_WORD *)(*(_QWORD *)(a1 + 1416) + 2 * v13) & 0x1FFF) - v10 + (_DWORD)result - 1,
        (unsigned int)result < v10) )
  {
    result = 0LL;
  }
  *a3 += v7;
  *a4 += v9;
  *a5 += result;
  return result;
}
