/*
 * XREFs of RtlIsValidOemCharacter @ 0x180145A88
 * Callers:
 *     GetNextWchar @ 0x180145284 (GetNextWchar.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180070CD0 (RtlpIsUtf8Process.c)
 *     NLS_UPCASE @ 0x1800AF6C0 (NLS_UPCASE.c)
 */

char RtlIsValidOemCharacter()
{
  bool IsUtf8Process; // al
  unsigned __int16 *v1; // rcx
  unsigned __int16 *v2; // r9
  unsigned __int16 v3; // ax
  unsigned __int16 *v4; // r9
  __int64 v5; // rdx
  unsigned __int16 *v6; // r9
  unsigned __int16 v7; // r10
  __int64 v8; // r11
  __int16 v9; // ax
  unsigned __int64 v10; // rax
  unsigned __int16 v11; // dx
  __int64 v12; // r11
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  IsUtf8Process = RtlpIsUtf8Process();
  _InterlockedOr(v14, 0);
  if ( !IsUtf8Process )
  {
    v5 = *v2;
    if ( word_1801CCFDC )
    {
      v10 = (unsigned __int64)*(unsigned __int16 *)(qword_1801CCFF8 + 2 * v5) >> 8;
      if ( *(_WORD *)(qword_1801CD028 + 2 * v10) )
        v11 = *(_WORD *)(qword_1801CD008
                       + 2
                       * (*(unsigned __int16 *)(qword_1801CD028 + 2 * v10)
                        + (unsigned __int64)*(unsigned __int8 *)(qword_1801CCFF8 + 2 * v5)));
      else
        v11 = *(_WORD *)(qword_1801CCFF0 + 2LL * *(unsigned __int8 *)(qword_1801CCFF8 + 2 * v5));
      v7 = NLS_UPCASE(qword_1801CD038, v11);
      v9 = *(_WORD *)(v12 + 2LL * v7);
    }
    else
    {
      v7 = NLS_UPCASE(qword_1801CD038, *(_WORD *)(qword_1801CCFF0 + 2LL * *(unsigned __int8 *)(v5 + qword_1801CCFF8)));
      v9 = *(char *)(v7 + v8);
    }
    if ( v9 != word_1801CCFD4 )
    {
      *v6 = v7;
      return 1;
    }
    return 0;
  }
  if ( *v1 > 0x7Fu )
    return 0;
  v3 = NLS_UPCASE(qword_1801CD038, *v1);
  *v4 = v3;
  return 1;
}
