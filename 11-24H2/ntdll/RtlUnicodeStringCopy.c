/*
 * XREFs of RtlUnicodeStringCopy @ 0x1800D7530
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180071600 (RtlGetFullPathName_Ustr.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18015C894 (RtlpEnsureTailingSlashAndAddToList.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x1800D75F0 (RtlUnicodeStringValidateWorker_0.c)
 */

__int64 __fastcall RtlUnicodeStringCopy(__int64 a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  _WORD *v5; // r11
  __int16 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int16 v10; // ax
  _WORD *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // r10

  result = RtlUnicodeStringValidateWorker_0(a1);
  v6 = 0;
  if ( (int)result >= 0 && v4 )
  {
    v7 = *(_QWORD *)(v4 + 8);
    v8 = (unsigned __int64)*(unsigned __int16 *)(v4 + 2) >> 1;
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
    if ( (int)result < 0 )
      return result;
  }
  v9 = *a2;
  if ( (v9 & 1) != 0
    || (v10 = a2[1], (v10 & 1) != 0)
    || (unsigned __int16)v9 > v10
    || v10 == 0xFFFF
    || !*((_QWORD *)a2 + 1) && ((_WORD)v9 || v10) )
  {
    v13 = -1073741811;
  }
  else
  {
    v11 = (_WORD *)*((_QWORD *)a2 + 1);
    v12 = v9 >> 1;
    v13 = 0;
    if ( v8 )
    {
      v14 = v7 - (_QWORD)v11;
      while ( v12 )
      {
        --v12;
        *(_WORD *)((char *)v11 + v14) = *v11;
        ++v6;
        ++v11;
        if ( !--v8 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      if ( v12 )
        v13 = -2147483643;
    }
  }
  result = v13;
  *v5 = 2 * v6;
  return result;
}
