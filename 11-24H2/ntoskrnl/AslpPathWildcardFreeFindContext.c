/*
 * XREFs of AslpPathWildcardFreeFindContext @ 0x14080BAF4
 * Callers:
 *     AslPathWildcardFindClose @ 0x14080A7A0 (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 * Callees:
 *     ULongLongMult @ 0x140437FD0 (ULongLongMult.c)
 *     AslpPathWildcardFreeMatchNode @ 0x14080BBC8 (AslpPathWildcardFreeMatchNode.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall AslpPathWildcardFreeFindContext(__int64 *a1)
{
  __int64 v1; // rbx
  ULONGLONG v3; // rcx
  ULONGLONG i; // rsi
  ULONGLONG v5; // rax
  ULONGLONG v6; // rcx
  ULONGLONG v7; // rcx
  void *v8; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      v3 = *(_QWORD *)(v1 + 32);
      for ( i = 0LL; i < v3; ++i )
      {
        v5 = 0LL;
        if ( i < v3 )
        {
          v6 = *(_QWORD *)(v1 + 24);
          pullResult = 0LL;
          if ( ULongLongMult(v6, i, &pullResult) < 0
            || (v7 = *(_QWORD *)(v1 + 56), v5 = v7 + pullResult, v7 + pullResult < v7) )
          {
            v5 = 0LL;
          }
        }
        AslpPathWildcardFreeMatchNode(v5);
        v3 = *(_QWORD *)(v1 + 32);
      }
      v8 = *(void **)(v1 + 56);
      if ( v8 )
        ExFreePoolWithTag(v8, 0x72615452u);
      *(_OWORD *)(v1 + 16) = 0LL;
      *(_OWORD *)(v1 + 32) = 0LL;
      *(_OWORD *)(v1 + 48) = 0LL;
      if ( *(_QWORD *)(v1 + 8) )
      {
        AslFree(v8);
        *(_QWORD *)(v1 + 8) = 0LL;
      }
      AslFree(v8);
      *a1 = 0LL;
    }
  }
}
