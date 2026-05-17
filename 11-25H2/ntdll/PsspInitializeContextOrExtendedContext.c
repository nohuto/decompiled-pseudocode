/*
 * XREFs of PsspInitializeContextOrExtendedContext @ 0x1800C7AF8
 * Callers:
 *     PsspDumpThread @ 0x1800C77C4 (PsspDumpThread.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x180074950 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1800C7C00 (RtlInitializeExtendedContext.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

char *__fastcall PsspInitializeContextOrExtendedContext(char *a1, size_t Size, int a3)
{
  unsigned int v3; // ebx
  size_t v5; // rsi
  __int64 v6; // r9
  char *result; // rax
  int ExtendedContextLength; // eax
  unsigned int v9; // ecx
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF
  _DWORD *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0;
  v3 = a3;
  v11 = 0LL;
  v5 = (unsigned int)Size;
  if ( (_DWORD)Size == 1232 )
    goto LABEL_8;
  if ( (int)RtlGetExtendedContextLength(a3, &v10) < 0 || (unsigned int)v5 < v10 )
  {
    if ( (v3 & 0x10000) != 0 )
    {
      v3 &= 0x1003Fu;
    }
    else if ( (v3 & 0x100000) != 0 )
    {
      v3 &= 0x10001Fu;
    }
    ExtendedContextLength = RtlGetExtendedContextLength(v3, &v10);
    v9 = v10;
    if ( ExtendedContextLength < 0 )
      v9 = -1;
    if ( (unsigned int)v5 < v9 )
      goto LABEL_8;
  }
  if ( (int)RtlInitializeExtendedContext(a1, v3, &v11) < 0
    || (v6 = (int)v11[2], *v11 > (int)v6)
    || v11[1] + *v11 < (int)v6 + v11[3]
    || (result = (char *)v11 + v6) == 0LL )
  {
LABEL_8:
    if ( (v3 & 0x10000) != 0 )
    {
      v3 &= 0x1003Fu;
    }
    else if ( (v3 & 0x100000) != 0 )
    {
      v3 &= 0x10001Fu;
    }
    memset_thunk_772440563353939046(a1, 0, v5);
    result = a1;
    *((_DWORD *)a1 + 12) = v3;
  }
  return result;
}
