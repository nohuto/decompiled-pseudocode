/*
 * XREFs of CcUninitializeAsyncLazywriteForNodeHelper @ 0x1404B9970
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall CcUninitializeAsyncLazywriteForNodeHelper(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rcx
  _QWORD **v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD **v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  v3 = *(void **)(a3 + 352);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x71576343u);
  v5 = (_QWORD **)(a3 + 288);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
LABEL_13:
      __fastfail(3u);
    *v5 = v7;
    v7[1] = v5;
    ExFreePoolWithTag(v6, 0x71576343u);
  }
  v8 = (_QWORD **)(a3 + 360);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == v8 )
      return 1;
    if ( (_QWORD **)v9[1] != v8 )
      goto LABEL_13;
    v10 = (_QWORD *)*v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_13;
    *v8 = v10;
    v10[1] = v8;
    ExFreePoolWithTag(v9, 0x71576343u);
  }
}
