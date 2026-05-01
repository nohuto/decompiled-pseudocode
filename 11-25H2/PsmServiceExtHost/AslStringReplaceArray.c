/*
 * XREFs of AslStringReplaceArray @ 0x18009E710
 * Callers:
 *     SdbpExpandSummaryMsg @ 0x180095658 (SdbpExpandSummaryMsg.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     AslStringDuplicate @ 0x18009E218 (AslStringDuplicate.c)
 *     AslStringReplace @ 0x18009E4BC (AslStringReplace.c)
 */

__int64 __fastcall AslStringReplaceArray(_QWORD *a1, __int64 a2, const wchar_t **a3, __int64 a4)
{
  void *v4; // rax
  const wchar_t **v5; // rdi
  unsigned __int64 v8; // rbp
  void *v9; // r12
  __int64 v10; // r15
  int v11; // ebx
  void *v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  *a1 = 0LL;
  v5 = a3;
  v13 = 0LL;
  if ( a3 && a4 )
  {
    v8 = 0LL;
    v9 = (void *)a2;
    v10 = a4 - (_QWORD)a3;
    while ( v8 < 3 )
    {
      v11 = AslStringReplace(&v13, (__int64)v9, *v5, *(const wchar_t **)((char *)v5 + v10));
      if ( (void *)a2 != v9 )
        AslFree(NtCurrentPeb()->ProcessHeap, v9);
      if ( v11 < 0 )
        goto LABEL_14;
      v4 = v13;
      ++v8;
      v9 = v13;
      ++v5;
    }
    *a1 = v4;
  }
  else
  {
    v11 = AslStringDuplicate(a1, a2);
    if ( v11 < 0 )
    {
LABEL_14:
      AslLogCallPrintf(1LL);
      return (unsigned int)v11;
    }
  }
  return 0;
}
