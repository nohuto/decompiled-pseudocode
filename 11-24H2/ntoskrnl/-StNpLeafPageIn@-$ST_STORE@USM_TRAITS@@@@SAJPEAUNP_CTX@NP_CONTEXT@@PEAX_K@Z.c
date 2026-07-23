/*
 * XREFs of ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x14060AC30
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14060AA3C (-StDmSinglePageRetrieveSync@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z.c)
 *     StEtaIoTimeout @ 0x14060B5E8 (StEtaIoTimeout.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StNpLeafPageIn(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 128LL);
  v9 = a3 & 0xFFFFFFFC;
  while ( 1 )
  {
    result = ST_STORE<SM_TRAITS>::StDmSinglePageRetrieveSync((_QWORD *)v5, &v9, a2, 0);
    if ( (int)result >= 0 )
      break;
    if ( (*(_DWORD *)(v5 + 776) & 0x2000) == 0 || (_DWORD)result != -2147483626 || v4 >= 0x1C9C380 )
      return result;
    v4 += 500000LL;
    StEtaIoTimeout(*(_QWORD *)(v5 + 1384), v7, v8, v4);
    Interval.QuadPart = 500000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return 0LL;
}
