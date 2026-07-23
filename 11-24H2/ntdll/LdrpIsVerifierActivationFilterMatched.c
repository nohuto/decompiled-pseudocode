/*
 * XREFs of LdrpIsVerifierActivationFilterMatched @ 0x1800A3254
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800A4268 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlQueryImageFileKeyOption @ 0x1800A5610 (RtlQueryImageFileKeyOption.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     LdrpIsSubstringFound @ 0x18015D258 (LdrpIsSubstringFound.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpIsVerifierActivationFilterMatched(__int64 a1, void *a2, void *a3)
{
  int ImageFileKeyOption; // eax
  int v6; // edx
  unsigned int v7; // edi
  WCHAR *v8; // rbx
  __int64 v9; // rax
  WCHAR *v10; // rsi
  WCHAR v11; // ax
  const WCHAR *v12; // rdx
  const char *v13; // rax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-248h] BYREF
  WCHAR SourceString[256]; // [rsp+40h] [rbp-238h] BYREF

  SourceString[0] = 0;
  DestinationString = 0LL;
  if ( (a2
     && ((ImageFileKeyOption = RtlQueryImageFileKeyOption(a2, (wchar_t *)L"VerifierActivationFilter", 512, 0LL),
          v6 = ImageFileKeyOption,
          ((ImageFileKeyOption + 0x80000000) & 0x80000000) != 0)
      || ImageFileKeyOption == -2147483643)
     || a3
     && ((v6 = RtlQueryImageFileKeyOption(a3, (wchar_t *)L"VerifierActivationFilter", 512, 0LL),
          ((v6 + 0x80000000) & 0x80000000) != 0)
      || v6 == -2147483643))
    && v6 >= 0 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      9076,
      (__int64)"LdrpIsVerifierActivationFilterMatched",
      2,
      "VerifierActivationFilter found, contents = \"%ws\"\n",
      SourceString,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer);
    v7 = 0;
    if ( SourceString[0] == 42 || !SourceString[0] )
    {
      v7 = 1;
    }
    else
    {
      v8 = SourceString;
      v9 = -1LL;
      do
        ++v9;
      while ( SourceString[v9] );
      v10 = &SourceString[v9];
      while ( !v7 && v8 < v10 )
      {
        while ( 1 )
        {
          v11 = *v8;
          if ( *v8 != 32 && v11 != 9 )
            break;
          ++v8;
        }
        v12 = v8;
        if ( !v11 )
          break;
        do
        {
          if ( v11 == 32 )
            break;
          if ( v11 == 9 )
            break;
          v11 = *++v8;
        }
        while ( *v8 );
        if ( v12 == v8 )
          break;
        *v8 = 0;
        RtlInitUnicodeString(&DestinationString, v12);
        if ( (unsigned int)LdrpIsSubstringFound(*(_QWORD *)(a1 + 32) + 112LL, &DestinationString) )
          v7 = 1;
        ++v8;
      }
    }
    v13 = (const char *)&Flags;
    if ( !v7 )
      v13 = "not ";
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      9130,
      (__int64)"LdrpIsVerifierActivationFilterMatched",
      2,
      "VerifierActivationFilter match %sfound.\n",
      v13);
  }
  else
  {
    return 1;
  }
  return v7;
}
