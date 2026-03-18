/*
 * XREFs of ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1402C58F0
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1402C532C (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1402D0358 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A948 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETSET::AddTarget(_QWORD *a1, _QWORD *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // r10
  _QWORD *v7; // r9
  _QWORD *v8; // r8
  _QWORD *v9; // r9
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rax

  if ( !*a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1005;
  }
  v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*a2;
  v5 = a1 + 3;
  v6 = (_QWORD *)a1[3];
  if ( v6 == a1 + 3 )
  {
    v8 = v6 - 1;
LABEL_12:
    if ( v4 && v6 != v5 )
    {
      while ( v8 )
      {
        if ( v8 == v4 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 108;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_16;
        }
        v15 = (_QWORD *)v8[1];
        v8 = v15 - 1;
        if ( v15 == v5 )
          v8 = 0LL;
      }
    }
    v11 = (_QWORD *)a1[4];
    v12 = v4 + 1;
    if ( (_QWORD *)*v11 != v5 )
      __fastfail(3u);
    *v12 = v5;
    v12[1] = v11;
    *v11 = v12;
    a1[4] = v12;
    ++a1[5];
LABEL_16:
    *a2 = 0LL;
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
    return 0LL;
  }
  v7 = v6 - 1;
  v8 = v6 - 1;
  if ( v6 == (_QWORD *)8 )
  {
LABEL_5:
    v9 = v6 - 1;
    while ( v9 )
    {
      if ( v9 == v4 )
        goto LABEL_30;
      v10 = (_QWORD *)v9[1];
      v9 = v10 - 1;
      if ( v10 == v5 )
        v9 = 0LL;
    }
    goto LABEL_12;
  }
  while ( *((_DWORD *)v7 + 6) != *((_DWORD *)v4 + 6) )
  {
    v14 = (_QWORD *)v7[1];
    v7 = v14 - 1;
    if ( v14 == v5 )
      v7 = 0LL;
    if ( !v7 )
      goto LABEL_5;
  }
  if ( v7 == v4 )
  {
LABEL_30:
    WdLogSingleEntry2(2LL, v4, a1);
    WdLogGlobalForLineNumber = 1027;
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
    return 3223192344LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, *((unsigned int *)v4 + 6), *a2, a1);
    WdLogGlobalForLineNumber = 1036;
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
    return 3223192370LL;
  }
}
