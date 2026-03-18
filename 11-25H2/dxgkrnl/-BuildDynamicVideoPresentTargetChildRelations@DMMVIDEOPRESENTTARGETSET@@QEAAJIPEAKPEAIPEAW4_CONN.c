/*
 * XREFs of ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x140257AF0
 * Callers:
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x140256804 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     _lambda_1de22fea6e4b508a2f6c43f4d270f633_::operator() @ 0x140257944 (_lambda_1de22fea6e4b508a2f6c43f4d270f633_--operator().c)
 *     _lambda_9913d0abb7c2ea8d45a858df1e180213_::operator() @ 0x1402579A0 (_lambda_9913d0abb7c2ea8d45a858df1e180213_--operator().c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::BuildDynamicVideoPresentTargetChildRelations(
        VIDPN_MGR **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a5)
{
  unsigned int v5; // eax
  __int64 v8; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DXGADAPTER *v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // r8d
  unsigned int *v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // r15d
  __int64 v19; // r10
  unsigned int v20; // eax
  struct DMMVIDEOPRESENTTARGET *v21; // rbx
  __int64 v22; // rax
  int v23; // edi
  _QWORD *v24; // rdi
  _QWORD *v25; // rbx
  int v26; // esi
  unsigned int v27; // esi
  unsigned int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  unsigned int *v31; // r9
  int v32; // r8d
  __int64 v33; // rax
  unsigned int v34; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v35; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned int v36; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v37[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v38[5]; // [rsp+58h] [rbp-28h] BYREF
  char v39; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int *v40; // [rsp+C8h] [rbp+48h] BYREF

  v40 = a4;
  v5 = *a3;
  v35 = 0;
  v8 = a2;
  v36 = v5;
  v34 = v5;
  if ( v5 < 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1675;
  }
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)this, v8);
  if ( !TargetById )
  {
    *(_DWORD *)a5 = 1;
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, v8, ContainingAdapter, -1073741811LL, 1LL);
    WdLogGlobalForLineNumber = 1686;
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 59) )
  {
    *(_DWORD *)a5 = 5;
    v12 = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, v8, v12, -1073741811LL, 2LL);
    WdLogGlobalForLineNumber = 1699;
    return 3221225485LL;
  }
  v39 = 0;
  v38[0] = &v35;
  v38[1] = &v39;
  v38[2] = &v40;
  v38[3] = &v34;
  v38[4] = &v36;
  v37[0] = &v34;
  v37[1] = &v35;
  v37[2] = &v40;
  lambda_1de22fea6e4b508a2f6c43f4d270f633_::operator()((__int64)v37, v8 | 0x80000000);
  v13 = v34;
  v14 = v36;
  if ( v34 >= v36 )
  {
    v29 = v35;
  }
  else
  {
    do
    {
      v15 = v40;
      v16 = v14 - 1;
      v17 = v14 - 2;
      v18 = v40[v16];
      if ( (unsigned int)v17 >= v13 )
      {
        v19 = (unsigned int)(v17 + 1);
        while ( 1 )
        {
          v20 = v15[v17];
          v17 = (unsigned int)(v17 - 1);
          v15[v19] = v20;
          v19 = (unsigned int)(v19 - 1);
          v13 = v34;
          if ( (unsigned int)v17 < v34 )
            break;
          v15 = v40;
        }
      }
      v34 = v13 + 1;
      v21 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)this, v18 & 0x7FFFFFFF);
      if ( !v21 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1780;
      }
      if ( !*((_QWORD *)v21 + 59) && v18 < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1784;
      }
      v22 = *((_QWORD *)v21 + 66);
      if ( v22 )
      {
        v23 = *(_DWORD *)(v22 + 24);
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v38, v23) )
          lambda_1de22fea6e4b508a2f6c43f4d270f633_::operator()((__int64)v37, v23);
      }
      v24 = (_QWORD *)((char *)v21 + 440);
      v25 = (_QWORD *)*((_QWORD *)v21 + 55);
      while ( v25 != v24 )
      {
        v26 = *((_DWORD *)v25 - 108);
        v25 = (_QWORD *)*v25;
        v27 = v26 | 0x80000000;
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v38, v27) )
          lambda_1de22fea6e4b508a2f6c43f4d270f633_::operator()((__int64)v37, v27);
      }
      v28 = v35;
      if ( v35 >= v34 )
      {
        WdLogSingleEntry0(1LL);
        v28 = v35;
        WdLogGlobalForLineNumber = 1820;
      }
      v40[v28] = v18;
      v13 = v34;
      v29 = v35 + 1;
      v14 = v36;
      ++v35;
    }
    while ( v34 < v36 );
  }
  *a3 = 0;
  v30 = 0LL;
  if ( v29 )
  {
    v31 = v40;
    do
    {
      v32 = v31[v30];
      if ( v32 < 0 )
      {
        v33 = *a3;
        v31[v33] = v32 & 0x7FFFFFFF;
        v31 = v40;
        v29 = v35;
        *a3 = v33 + 1;
      }
      v30 = (unsigned int)(v30 + 1);
    }
    while ( (unsigned int)v30 < v29 );
  }
  return 0LL;
}
