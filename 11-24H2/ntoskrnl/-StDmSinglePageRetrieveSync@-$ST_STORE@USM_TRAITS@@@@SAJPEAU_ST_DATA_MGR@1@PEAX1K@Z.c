/*
 * XREFs of ?StDmSinglePageRetrieveSync@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAX1K@Z @ 0x14060AA3C
 * Callers:
 *     ?StNpLeafPageIn@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z @ 0x14060AC30 (-StNpLeafPageIn@-$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@PEAX_K@Z.c)
 * Callees:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x1402F7E00 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404ABFD4 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14060916C (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x140609350 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     SmWaitForSyncIo @ 0x14060DA28 (SmWaitForSyncIo.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageRetrieveSync(_QWORD *a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  int v5; // esi
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  _DWORD *v14; // [rsp+40h] [rbp-20h]
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp-8h]

  v13 = a3;
  v12 = 0LL;
  HIDWORD(v14) = 0;
  v5 = a4 & 2;
  if ( (a4 & 2) != 0 )
    v14 = a2;
  else
    LODWORD(v14) = *a2;
  v16 = 0LL;
  a1[166] = &v12;
  v15 = 0LL;
  result = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve((__int64)a1, a1 + 114, a4, (__int64)&v15);
  if ( (int)result >= 1 )
  {
    v8 = (__int64)ST_STORE<SM_TRAITS>::StDeviceIoBuild((__int64)a1, (__int64)&v15, v7, v13);
    v9 = v8;
    if ( v8 )
    {
      *(_DWORD *)(v8 + 28) = *(_DWORD *)(v8 + 28) & 0xFFFFFFEF | (v5 != 0 ? 0x10 : 0) | 0xC;
      v11 = &v10;
      v10 = 0LL;
      *(_QWORD *)v8 = *(_DWORD *)v8 & 7 | 8LL;
      *v11 = v8 | *(_DWORD *)v11 & 7;
      v11 = (__int64 *)v8;
      if ( (int)ST_STORE<SM_TRAITS>::StDeviceIoIssue((__int64)a1, &v10) >= 0 )
        SmWaitForSyncIo(a1[100]);
      result = ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion((__int64)a1, v9);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
