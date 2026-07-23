/*
 * XREFs of ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x140609350
 * Callers:
 *     ?StDmEtaPerformIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140609A7C (-StDmEtaPerformIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14060AA3C (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     StEtaIoStart @ 0x14060B4EC (StEtaIoStart.c)
 *     SmIssueIo @ 0x14060D540 (SmIssueIo.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDeviceIoIssue(__int64 a1, __int64 *a2)
{
  int v4; // r8d
  __int64 *v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned int *v7; // r15
  unsigned int v8; // eax
  unsigned int v9; // r13d
  unsigned __int64 v10; // rax

  v4 = -2147483634;
  while ( 1 )
  {
    v5 = (__int64 *)a2[1];
    if ( v5 == a2 )
      break;
    v6 = *a2;
    *a2 = *(_QWORD *)*a2 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (__int64 *)v6 == v5 )
    {
      *a2 = 0LL;
      a2[1] = (__int64)a2;
    }
    else
    {
      *v5 = *v5 & 7 | (8 * ((unsigned __int64)*v5 >> 3) - 8);
    }
    v7 = *(unsigned int **)(v6 + 16);
    v8 = *(_DWORD *)(v6 + 28);
    v9 = v8 >> 5;
    if ( *(_QWORD *)(a1 + 2200) && (v8 & 4) == 0 )
      *(LARGE_INTEGER *)(v7 + 1) = KeQueryPerformanceCounter(0LL);
    StEtaIoStart(*(_QWORD *)(a1 + 1384), v9, 0LL, (v6 + 8) | (*(_DWORD *)(v6 + 28) >> 3) & 1);
    *(_DWORD *)(v6 + 28) |= 8u;
    v4 = SmIssueIo(
           *(void **)(a1 + 800),
           -(__int64)*(unsigned int *)(a1 + 792) & ((unsigned __int64)&v7[6 * *v7 + 3] + *(unsigned int *)(a1 + 792) + 3),
           (union _LARGE_INTEGER)(v6 | 1));
    if ( v4 < 0 )
    {
      *(_DWORD *)(v6 + 28) |= 1u;
      v10 = *(_QWORD *)(v6 + 16);
      if ( v10 )
        *(_DWORD *)(v10 + 4) = v4;
      else
        *(_DWORD *)(v6 + 8) = v4;
      *(_QWORD *)v6 = *(_DWORD *)v6 & 7 | ((*(_QWORD *)a2[1] & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      *(_QWORD *)a2[1] = v6 | *(_DWORD *)a2[1] & 7;
      a2[1] = v6;
      return (unsigned int)v4;
    }
  }
  return (unsigned int)v4;
}
