/*
 * XREFs of ndisValidateAndConvertWcharStringToUnicodeString @ 0x1401666D0
 * Callers:
 *     ndisValidateNdisOffsetAndLengthInputString @ 0x140135E00 (ndisValidateNdisOffsetAndLengthInputString.c)
 *     ndisValidateNdisVarDataDesc32InputString @ 0x140139374 (ndisValidateNdisVarDataDesc32InputString.c)
 *     ndisValidateNdisVarDataDescInputString @ 0x1401393FC (ndisValidateNdisVarDataDescInputString.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateAndConvertWcharStringToUnicodeString(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  __int64 v5; // rax
  __int16 v6; // r10
  char result; // al

  if ( (a2 & 1) == 0 )
  {
    if ( !a2 )
    {
      a1 = 0LL;
      v6 = 0;
      LOWORD(a2) = 0;
LABEL_13:
      result = 1;
      *(_WORD *)(a5 + 2) = a2;
      *(_QWORD *)(a5 + 8) = a1;
      *(_WORD *)a5 = v6;
      return result;
    }
    if ( a2 <= 0x1000 )
    {
      if ( !a4 )
        goto LABEL_9;
      if ( !*(_WORD *)(a1 + 2LL * ((a2 >> 1) - 1)) )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( *(_WORD *)(a1 + 2 * v5) );
        if ( v5 == (a2 >> 1) - 1 )
        {
LABEL_9:
          v6 = a2;
          if ( a4 )
            v6 = a2 - 2;
          goto LABEL_13;
        }
      }
    }
  }
  return 0;
}
