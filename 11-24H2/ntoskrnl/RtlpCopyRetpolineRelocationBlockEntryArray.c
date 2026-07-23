/*
 * XREFs of RtlpCopyRetpolineRelocationBlockEntryArray @ 0x14043B284
 * Callers:
 *     RtlCreateRetpolineRelocationInformation @ 0x14043B354 (RtlCreateRetpolineRelocationInformation.c)
 * Callees:
 *     RtlSizeOfRetpolineRelocationEntry @ 0x14043B6F0 (RtlSizeOfRetpolineRelocationEntry.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

_DWORD *__fastcall RtlpCopyRetpolineRelocationBlockEntryArray(
        char *a1,
        unsigned int a2,
        _WORD *a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  int v8; // r15d
  _WORD *v9; // rbx
  char *v10; // rdi
  size_t v11; // r14
  __int16 v12; // ax
  _DWORD *result; // rax

  v6 = (unsigned __int64)a3 + a4;
  v7 = a2;
  v8 = (int)a1;
  v9 = a3;
  v10 = a1;
  if ( (unsigned __int64)a3 < v6 )
  {
    v11 = (unsigned int)RtlSizeOfRetpolineRelocationEntry(a2);
    while ( v7 != 3 && v7 != 4 && v7 != 5 )
    {
      if ( v7 == 8 )
      {
        v12 = 4 * (*v9 & 0x3FF);
        goto LABEL_5;
      }
LABEL_6:
      memmove(v10, v9, v11);
      v10 += v11;
LABEL_7:
      v9 = (_WORD *)((char *)v9 + v11);
      if ( (unsigned __int64)v9 >= v6 )
        goto LABEL_8;
    }
    v12 = *v9 & 0xFFF;
LABEL_5:
    if ( !v12 && v9 != a3 )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_8:
  result = a5;
  *a5 = (_DWORD)v10 - v8;
  return result;
}
