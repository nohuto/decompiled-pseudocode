/*
 * XREFs of ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025EA10
 * Callers:
 *     ?DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025D6A4 (-DmmBuildDynamicVideoPresentTargetChildRelations@@YAJPEAXIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1400369D0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     _lambda_d3550799dafcb87631ec966092ee9b5d_::_lambda_d3550799dafcb87631ec966092ee9b5d_ @ 0x14025E7BC (_lambda_d3550799dafcb87631ec966092ee9b5d_--_lambda_d3550799dafcb87631ec966092ee9b5d_.c)
 *     _lambda_9913d0abb7c2ea8d45a858df1e180213_::operator() @ 0x14025E7D4 (_lambda_9913d0abb7c2ea8d45a858df1e180213_--operator().c)
 *     _lambda_9ff15276089a9b05610374d641210723_::operator() @ 0x14025E864 (_lambda_9ff15276089a9b05610374d641210723_--operator().c)
 *     _lambda_d3550799dafcb87631ec966092ee9b5d_::operator() @ 0x14025E8C0 (_lambda_d3550799dafcb87631ec966092ee9b5d_--operator().c)
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
  int v13; // r12d
  struct DMMVIDEOPRESENTTARGET *v14; // rbx
  __int64 v15; // rax
  int v16; // edi
  _QWORD *v17; // rdi
  _QWORD *v18; // rbx
  int v19; // esi
  unsigned int v20; // esi
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  unsigned int *v24; // r9
  int v25; // r8d
  __int64 v26; // rax
  unsigned int v27; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-3Dh] BYREF
  unsigned int v29; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v30[5]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v31[3]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v32[4]; // [rsp+88h] [rbp+Fh] BYREF
  char v33; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int *v34; // [rsp+F0h] [rbp+77h] BYREF

  v34 = a4;
  v5 = *a3;
  v27 = 0;
  v8 = a2;
  v29 = v5;
  v28 = v5;
  if ( v5 < 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1689;
  }
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)this, v8);
  if ( !TargetById )
  {
    *(_DWORD *)a5 = 1;
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, v8, ContainingAdapter, -1073741811LL, 1LL);
    WdLogGlobalForLineNumber = 1700;
    return 3221225485LL;
  }
  if ( !*((_QWORD *)TargetById + 59) )
  {
    *(_DWORD *)a5 = 5;
    v12 = VIDPN_MGR::GetContainingAdapter(this[11]);
    WdLogSingleEntry4(1LL, v8, v12, -1073741811LL, 2LL);
    WdLogGlobalForLineNumber = 1713;
    return 3221225485LL;
  }
  v33 = 0;
  v30[0] = &v27;
  v30[1] = &v33;
  v30[2] = &v34;
  v30[3] = &v28;
  v30[4] = &v29;
  lambda_d3550799dafcb87631ec966092ee9b5d_::_lambda_d3550799dafcb87631ec966092ee9b5d_(
    v31,
    (__int64)&v28,
    (__int64)&v27,
    (__int64)&v34);
  lambda_d3550799dafcb87631ec966092ee9b5d_::_lambda_d3550799dafcb87631ec966092ee9b5d_(
    v32,
    (__int64)&v28,
    (__int64)&v29,
    (__int64)&v34);
  lambda_9ff15276089a9b05610374d641210723_::operator()((__int64)v31, v8 | 0x80000000);
  if ( v28 >= v29 )
  {
    v22 = v27;
  }
  else
  {
    do
    {
      v13 = lambda_d3550799dafcb87631ec966092ee9b5d_::operator()((__int64)v32);
      v14 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)this, v13 & 0x7FFFFFFF);
      if ( !v14 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1794;
      }
      if ( !*((_QWORD *)v14 + 59) && v13 < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1798;
      }
      v15 = *((_QWORD *)v14 + 66);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v15 + 24);
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v30, v16) )
          lambda_9ff15276089a9b05610374d641210723_::operator()((__int64)v31, v16);
      }
      v17 = (_QWORD *)((char *)v14 + 440);
      v18 = (_QWORD *)*((_QWORD *)v14 + 55);
      while ( v18 != v17 )
      {
        v19 = *((_DWORD *)v18 - 108);
        v18 = (_QWORD *)*v18;
        v20 = v19 | 0x80000000;
        if ( !lambda_9913d0abb7c2ea8d45a858df1e180213_::operator()((__int64)v30, v20) )
          lambda_9ff15276089a9b05610374d641210723_::operator()((__int64)v31, v20);
      }
      v21 = v27;
      if ( v27 >= v28 )
      {
        WdLogSingleEntry0(1LL);
        v21 = v27;
        WdLogGlobalForLineNumber = 1834;
      }
      v34[v21] = v13;
      v22 = ++v27;
    }
    while ( v28 < v29 );
  }
  *a3 = 0;
  v23 = 0LL;
  if ( v22 )
  {
    v24 = v34;
    do
    {
      v25 = v24[v23];
      if ( v25 < 0 )
      {
        v26 = *a3;
        v24[v26] = v25 & 0x7FFFFFFF;
        v24 = v34;
        v22 = v27;
        *a3 = v26 + 1;
      }
      v23 = (unsigned int)(v23 + 1);
    }
    while ( (unsigned int)v23 < v22 );
  }
  return 0LL;
}
