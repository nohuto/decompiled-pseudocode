/*
 * XREFs of ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x140373F28
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031B4E8 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x140373DCC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1403E6FF0 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 * Callees:
 *     ?QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z @ 0x1400500D8 (-QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402CE078 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1403740C0 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x140374BE0 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveActiveTopology(
        __int64 (__fastcall ***this)(CCD_BTL *, int *),
        char a2,
        bool a3,
        struct D3DKMT_HASH **a4,
        unsigned __int16 *a5)
{
  __int64 result; // rax
  int ConnectedSetHash; // ebx
  struct D3DKMT_HASH *v11; // rax
  unsigned __int16 v12; // cx
  __int64 (__fastcall **v13)(CCD_BTL *, int *); // rax
  __int64 (__fastcall *v14)(CCD_BTL *, int *); // rax
  int v15; // eax
  struct D3DKMT_HASH *v16; // rcx
  struct CCD_TOPOLOGY *v17; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v18; // [rsp+38h] [rbp-48h]
  int v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+58h] [rbp-28h]
  __int16 v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+68h] [rbp-18h]

  CCD_TOPOLOGY::Clear((CCD_TOPOLOGY *)a4);
  v17 = (struct CCD_TOPOLOGY *)a4;
  v18 = 0;
  result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectActivePaths((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v17, a3);
  ConnectedSetHash = result;
  if ( (int)result >= 0 )
  {
    v11 = a4[8];
    if ( v11 )
      v12 = *((_WORD *)v11 + 10);
    else
      v12 = 0;
    if ( v18 > v12 )
      ConnectedSetHash = -1073741789;
    if ( a5 )
      *a5 = v18;
    if ( ConnectedSetHash < 0 || a2 )
      return (unsigned int)ConnectedSetHash;
    v13 = *this;
    v19 = 0;
    v21 = 0LL;
    v20 = 0LL;
    v14 = *v13;
    v22 = 0;
    v23 = 0LL;
    v15 = v14((CCD_BTL *)this, &v19);
    v16 = a4[8];
    ConnectedSetHash = v15;
    if ( v15 >= 0 )
    {
      if ( v16 )
      {
        ConnectedSetHash = CCD_SET_STRING_ID::QueryConnectedSetHash((CCD_SET_STRING_ID *)&v19, v16);
        if ( ConnectedSetHash >= 0 )
        {
LABEL_13:
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v19);
          return (unsigned int)ConnectedSetHash;
        }
      }
      else
      {
        WdLogSingleEntry3(1LL, a4, 0LL, &v19);
        WdLogGlobalForLineNumber = 3509;
        ConnectedSetHash = -1073741811;
      }
      WdLogSingleEntry4(2LL, ConnectedSetHash, &v19, a4, a4[8]);
      WdLogGlobalForLineNumber = 1215;
      goto LABEL_13;
    }
    WdLogSingleEntry4(2LL, v15, &v19, a4, a4[8]);
    WdLogGlobalForLineNumber = 1203;
    goto LABEL_13;
  }
  return result;
}
