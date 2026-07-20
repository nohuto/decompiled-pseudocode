/*
 * XREFs of SmpParseSwapOrPageFileArguments @ 0x1400115CC
 * Callers:
 *     SmpCreatePagingFileDescriptor @ 0x14000FE40 (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14001078C (SmpCreateWorkingSetSwapPagingFile.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 */

__int64 __fastcall SmpParseSwapOrPageFileArguments(PCUNICODE_STRING String, PULONG Value, PULONG a3)
{
  PWSTR Buffer; // r9
  USHORT Length; // r8
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // r8
  __int64 v9; // r10
  NTSTATUS v10; // edi
  int v11; // edx
  WCHAR *v13; // rsi
  WCHAR *v14; // rcx
  WCHAR v15; // ax
  NTSTATUS v16; // eax

  *Value = 0;
  *a3 = 0;
  Buffer = String->Buffer;
  if ( Buffer )
  {
    Length = String->Length;
    v7 = 0;
    v8 = Length >> 1;
    while ( v7 < v8 )
    {
      if ( Buffer[v7] > 0x30u || (v9 = 0x1000100000200LL, !_bittest64(&v9, Buffer[v7])) )
      {
        v10 = RtlUnicodeStringToInteger(String, 0, Value);
        if ( v10 < 0 )
        {
          v11 = 4884;
LABEL_9:
          SmpLogFailure((__int64)"SmpParseSwapOrPageFileArguments", v11, v10);
          return (unsigned int)v10;
        }
        v13 = String->Buffer;
        v14 = v13;
        while ( 1 )
        {
          v15 = *v14;
          if ( !*v14 )
            return 0LL;
          ++v14;
          if ( v15 == 32 )
          {
            String->Buffer = v14;
            String->Length += (_WORD)v13 - (_WORD)v14;
            String->MaximumLength = String->Length;
            v16 = RtlUnicodeStringToInteger(String, 0, a3);
            String->Buffer = v13;
            v10 = v16;
            if ( v16 >= 0 )
              return 0LL;
            v11 = 4906;
            goto LABEL_9;
          }
        }
      }
      ++v7;
    }
  }
  return 0LL;
}
