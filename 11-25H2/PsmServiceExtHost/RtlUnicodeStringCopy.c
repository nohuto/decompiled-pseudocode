/*
 * XREFs of RtlUnicodeStringCopy @ 0x1800A5F30
 * Callers:
 *     AslpPathWildcardAllocMatchNode @ 0x1800A5734 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1800A5FF8 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x1800A6064 (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCopy(_WORD *a1, unsigned __int16 *a2)
{
  __int16 v3; // bx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // r9d
  int v9; // eax
  _WORD *v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int16 v13; // r10
  __int64 v14; // r11
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v17 = 0LL;
  v16 = 0LL;
  v5 = RtlUnicodeStringValidateDestWorker(a1, &v17, &v16, 0LL);
  v8 = v5;
  if ( v5 >= 0 )
  {
    v9 = RtlUnicodeStringValidateWorker(a2, v6, v7, (unsigned int)v5);
    v8 = v9;
    if ( v9 >= 0 && a2 )
    {
      v10 = (_WORD *)*((_QWORD *)a2 + 1);
      v11 = (unsigned __int64)*a2 >> 1;
    }
    else
    {
      v10 = 0LL;
      v11 = 0LL;
      if ( v9 < 0 )
      {
LABEL_13:
        *a1 = 2 * v3;
        return v8;
      }
    }
    v12 = v16;
    v8 = 0;
    v13 = 0;
    if ( v16 )
    {
      v14 = v17 - (_QWORD)v10;
      while ( v11 )
      {
        --v11;
        *(_WORD *)((char *)v10 + v14) = *v10;
        ++v13;
        ++v10;
        if ( !--v12 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      if ( v11 )
        v8 = -2147483643;
    }
    v3 = v13;
    goto LABEL_13;
  }
  return v8;
}
