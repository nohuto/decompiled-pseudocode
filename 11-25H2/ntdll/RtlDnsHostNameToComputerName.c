/*
 * XREFs of RtlDnsHostNameToComputerName @ 0x1800D7360
 * Callers:
 *     <none>
 * Callees:
 *     NLS_UPCASE @ 0x180069080 (NLS_UPCASE.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x18006BC00 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpIsUtf8Process @ 0x1800718D0 (RtlpIsUtf8Process.c)
 *     RtlOemStringToUnicodeString @ 0x1800AA940 (RtlOemStringToUnicodeString.c)
 *     RtlpDidUnicodeToOemWork @ 0x1800D7734 (RtlpDidUnicodeToOemWork.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1800D7860 (UpcaseUnicodeToSingleByteNHelper.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlDnsHostNameToComputerName(
        PUNICODE_STRING ComputerNameString,
        PUNICODE_STRING DnsHostNameString,
        BOOLEAN AllocateComputerNameString)
{
  NTSTATUS v3; // ebx
  BOOLEAN v4; // si
  _UNICODE_STRING *v5; // r14
  unsigned int v6; // ecx
  _UNICODE_STRING v7; // xmm0
  unsigned __int16 v8; // dx
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS result; // eax
  unsigned __int16 v13; // r10
  int v14; // eax
  wchar_t *Buffer; // rsi
  int v16; // r11d
  unsigned __int16 *MultiByteTable; // r12
  CHAR *v18; // r10
  _WORD *WideCharTable; // r14
  __int64 v20; // r13
  unsigned __int16 *DBCSOffsets; // r15
  __int64 v22; // rax
  unsigned __int16 v23; // dx
  unsigned __int64 v24; // rax
  unsigned __int16 v25; // dx
  __int64 v26; // r9
  unsigned int v27; // r11d
  __int16 v28; // dx
  unsigned int v29; // eax
  signed __int32 v30[8]; // [rsp+0h] [rbp-69h] BYREF
  BOOLEAN v31; // [rsp+40h] [rbp-29h]
  int v32; // [rsp+44h] [rbp-25h] BYREF
  _UNICODE_STRING v33; // [rsp+48h] [rbp-21h] BYREF
  _STRING SourceString; // [rsp+58h] [rbp-11h] BYREF
  PUNICODE_STRING v35; // [rsp+68h] [rbp-1h]
  CHAR UTF8StringDestination[16]; // [rsp+70h] [rbp+7h] BYREF

  v3 = 0;
  v31 = AllocateComputerNameString;
  v35 = ComputerNameString;
  v4 = AllocateComputerNameString;
  v32 = 0;
  SourceString = 0LL;
  v5 = ComputerNameString;
  v6 = 0;
  v7 = *DnsHostNameString;
  v8 = _mm_cvtsi128_si32(*(__m128i *)DnsHostNameString);
  v33 = v7;
  while ( v6 < v8 >> 1 )
  {
    if ( v7.Buffer[v6] == 46 )
    {
      v8 = 2 * v6;
      v33.Length = 2 * v6;
      break;
    }
    ++v6;
  }
  if ( v8 < 2u )
    return -1073741534;
  v9 = v8 >> 1;
  if ( RtlpIsUtf8Process() )
  {
    result = UpcaseUnicodeToUTF8NHelper(UTF8StringDestination, 0xFu, &v32, v11, v9);
  }
  else
  {
    _InterlockedOr(v30, 0);
    if ( CodePageTable.DBCSCodePage )
    {
      Buffer = v33.Buffer;
      v16 = 15;
      MultiByteTable = GlobalRtlNlsState.MultiByteTable;
      v18 = UTF8StringDestination;
      WideCharTable = GlobalRtlNlsState.WideCharTable;
      v20 = qword_1801CF020;
      if ( v9 )
      {
        DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
        do
        {
          if ( !v16 )
            break;
          v22 = *Buffer;
          Buffer = (wchar_t *)((char *)Buffer + v10);
          v23 = WideCharTable[v22];
          v24 = (unsigned __int64)v23 >> 8;
          if ( *(_WORD *)(v20 + 2 * v24) )
            v25 = DBCSOffsets[(unsigned __int8)v23 + (unsigned __int64)*(unsigned __int16 *)(v20 + 2 * v24)];
          else
            v25 = MultiByteTable[(unsigned __int8)v23];
          v26 = NLS_UPCASE(qword_1801CF038, v25);
          v10 = 2LL;
          v28 = WideCharTable[v26];
          if ( HIBYTE(v28) )
          {
            v29 = v27--;
            if ( v29 < 2 )
              break;
            *v18++ = HIBYTE(v28);
          }
          *v18 = v28;
          v16 = v27 - 1;
          LOWORD(v18) = (_WORD)v18 + 1;
          --v9;
        }
        while ( v9 );
      }
      v4 = v31;
      v5 = v35;
      v13 = (_WORD)v18 - (unsigned __int16)UTF8StringDestination;
      goto LABEL_11;
    }
    result = UpcaseUnicodeToSingleByteNHelper(
               (unsigned int)UTF8StringDestination,
               15,
               (unsigned int)&v32,
               v33.Buffer,
               v9,
               (__int64)CodePageTable.WideCharTable,
               (__int64)CodePageTable.MultiByteTable);
  }
  if ( result < 0 && result != -2147483643 )
    return result;
  v13 = v32;
LABEL_11:
  SourceString.Length = v13;
  SourceString.Buffer = UTF8StringDestination;
  SourceString.MaximumLength = 16;
  if ( !(unsigned __int8)RtlpDidUnicodeToOemWork(&SourceString, &v33) )
    return -1073741534;
  v14 = RtlOemStringToUnicodeString(v5, &SourceString, v4);
  if ( v14 < 0 )
    return v14;
  return v3;
}
