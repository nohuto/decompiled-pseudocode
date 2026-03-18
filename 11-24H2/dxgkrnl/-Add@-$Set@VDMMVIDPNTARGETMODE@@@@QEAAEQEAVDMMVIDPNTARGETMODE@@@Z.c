/*
 * XREFs of ?Add@?$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1400351C4
 * Callers:
 *     ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x14037170C (-AddMode@DMMVIDPNTARGETMODESET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1400352AC (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 */

char __fastcall Set<DMMVIDPNTARGETMODE>::Add(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  if ( Set<DMMVIDPNTARGETMODE>::FindByValue() )
    return 0;
  v4 = a1 + 3;
  if ( !a2 || (_QWORD *)*v4 == v4 || (v5 = *v4 - 8LL, *v4 == 8LL) )
  {
LABEL_9:
    v7 = (_QWORD *)a1[4];
    v8 = (_QWORD *)(a2 + 8);
    if ( (_QWORD *)*v7 != v4 )
      __fastfail(3u);
    *v8 = v4;
    *(_QWORD *)(a2 + 16) = v7;
    *v7 = v8;
    a1[4] = v8;
    ++a1[5];
  }
  else
  {
    while ( v5 != a2 )
    {
      v6 = *(_QWORD **)(v5 + 8);
      v5 = (__int64)(v6 - 1);
      if ( v6 == v4 )
        v5 = 0LL;
      if ( !v5 )
        goto LABEL_9;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 108;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"bInsertTailStatus == TRUE", 108LL, 0LL, 0LL, 0LL, 0LL);
  }
  return 1;
}
