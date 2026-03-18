/*
 * XREFs of ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x140282914
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1402827F8 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ @ 0x140282A74 (-CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402CE078 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x14036B178 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x140374BE0 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveAllPaths(
        __int64 (__fastcall ***this)(CCD_BTL *, int *),
        struct CCD_TOPOLOGY *a2,
        unsigned __int16 *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int16 v8; // dx
  __int64 (__fastcall **v9)(CCD_BTL *, int *); // rax
  __int64 (__fastcall *v10)(CCD_BTL *, int *); // rax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  struct CCD_TOPOLOGY *v14; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v15; // [rsp+38h] [rbp-48h]
  int v16; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+58h] [rbp-28h]
  __int16 v19; // [rsp+60h] [rbp-20h]
  __int128 v20; // [rsp+68h] [rbp-18h]

  CCD_TOPOLOGY::Clear(a2);
  v14 = a2;
  v15 = 0;
  result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectAllPaths((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v14);
  if ( (int)result >= 0 )
  {
    v7 = *((_QWORD *)a2 + 8);
    if ( v7 )
      v8 = *(_WORD *)(v7 + 20);
    else
      v8 = 0;
    if ( v15 > v8 )
      result = 3221225507LL;
    if ( a3 )
      *a3 = v15;
    if ( (int)result >= 0 )
    {
      v9 = *this;
      v16 = 0;
      v18 = 0LL;
      v17 = 0LL;
      v10 = *v9;
      v19 = 0;
      v20 = 0LL;
      v11 = v10((CCD_BTL *)this, &v16);
      v12 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry4(2LL, v11, &v16, a2, *((_QWORD *)a2 + 8));
        WdLogGlobalForLineNumber = 1268;
      }
      else
      {
        v13 = CCD_TOPOLOGY::SetConnectivityHash(a2, (const struct CCD_SET_STRING_ID *)&v16);
        v12 = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry4(2LL, v13, &v16, a2, *((_QWORD *)a2 + 8));
          WdLogGlobalForLineNumber = 1280;
        }
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v16);
      return v12;
    }
  }
  return result;
}
