/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x18004BE00
 * Callers:
 *     LdrpReportError @ 0x180008910 (LdrpReportError.c)
 *     RtlGetVersion @ 0x180039460 (RtlGetVersion.c)
 *     LdrpLoadForwardedDll @ 0x18004A820 (LdrpLoadForwardedDll.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18004ADB0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     RtlpComputeLangListCheckSum @ 0x18005CCE0 (RtlpComputeLangListCheckSum.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180071520 (LdrpSnapKernelBaseExtensions.c)
 *     RtlIntegerToUnicodeString @ 0x1800DEC50 (RtlIntegerToUnicodeString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1800E9DE0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlIsApiSetImplemented @ 0x1800EE0F0 (RtlIsApiSetImplemented.c)
 *     ApiSetResolveToHost2 @ 0x180136CD0 (ApiSetResolveToHost2.c)
 *     RtlInt64ToUnicodeString @ 0x18013F740 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlUTF8ToUnicodeN @ 0x18004B290 (RtlUTF8ToUnicodeN.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG Length; // eax
  char *Buffer; // r9
  ULONG v8; // edx
  ULONG v9; // ebx
  wchar_t *Atom; // rax
  NTSTATUS result; // eax
  ULONG UTF8StringByteCount; // r9d
  char *v13; // rsi
  ULONG v14; // edx
  WCHAR *v15; // r11
  unsigned __int16 CodePage; // cx
  unsigned __int16 **p_MultiByteTable; // r10
  unsigned __int16 DBCSCodePage; // ax
  unsigned __int16 *MultiByteTable; // rbx
  unsigned __int16 *DBCSOffsets; // r14
  ULONG v21; // edx
  ULONG v22; // r10d
  ULONG v23; // r8d
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rax
  char *v27; // rsi
  __int64 v29; // rcx
  signed __int32 v30[8]; // [rsp+0h] [rbp-98h] BYREF
  NTSTATUS v31; // [rsp+30h] [rbp-68h]
  ULONG v32; // [rsp+34h] [rbp-64h]
  ULONG v33; // [rsp+38h] [rbp-60h]
  ULONG v34; // [rsp+40h] [rbp-58h]
  int v35; // [rsp+48h] [rbp-50h]
  WCHAR *v36; // [rsp+50h] [rbp-48h]
  char *v37; // [rsp+58h] [rbp-40h]
  ULONG UnicodeStringActualByteCount; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v39; // [rsp+B0h] [rbp+18h]
  ULONG v40; // [rsp+B8h] [rbp+20h] BYREF

  v39 = AllocateDestinationString;
  v40 = 0;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  _InterlockedOr(v30, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    if ( Length )
      RtlUTF8ToUnicodeN(0LL, 0, &v40, Buffer, Length);
  }
  else
  {
    _InterlockedOr(v30, 0);
    v8 = 0;
    if ( GlobalRtlNlsState.DBCSCodePage )
    {
      while ( Length-- )
      {
        v29 = (unsigned __int8)*Buffer++;
        if ( *(_WORD *)(qword_1801CF020 + 2 * v29) )
        {
          if ( !Length )
          {
            v8 += 2;
            break;
          }
          --Length;
          ++Buffer;
        }
        v8 += 2;
      }
      v40 = v8;
    }
    else
    {
      v40 = 2 * Length;
    }
  }
  v9 = v40 + 2;
  UnicodeStringActualByteCount = v40 + 2;
  if ( v40 + 2 > 0xFFFE )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    Atom = (wchar_t *)RtlpAllocateAtom(v9);
    DestinationString->Buffer = Atom;
    if ( Atom )
    {
      DestinationString->MaximumLength = v9;
      result = 0;
    }
    else
    {
      DestinationString->MaximumLength = 0;
      result = -1073741801;
      LOWORD(v9) = 0;
    }
  }
  else
  {
    if ( v9 <= DestinationString->MaximumLength && DestinationString->Buffer )
      result = 0;
    else
      result = -2147483643;
    LOWORD(v9) = DestinationString->MaximumLength;
  }
  v31 = result;
  if ( result >= 0 )
  {
    UTF8StringByteCount = SourceString->Length;
    v13 = SourceString->Buffer;
    v14 = (unsigned __int16)v9;
    v15 = DestinationString->Buffer;
    _InterlockedOr(v30, 0);
    if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
    {
      CodePage = Utf8TableInfo;
      p_MultiByteTable = (unsigned __int16 **)&xmmword_1801CF070;
      DBCSCodePage = WORD6(Utf8TableInfo);
      MultiByteTable = (unsigned __int16 *)xmmword_1801CF070;
      DBCSOffsets = (unsigned __int16 *)qword_1801CF088;
    }
    else
    {
      _InterlockedOr(v30, 0);
      CodePage = GlobalRtlNlsState.CodePage;
      p_MultiByteTable = &GlobalRtlNlsState.MultiByteTable;
      DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
      MultiByteTable = GlobalRtlNlsState.MultiByteTable;
      DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
    }
    v34 = UTF8StringByteCount;
    v37 = v13;
    v36 = v15;
    v32 = 0;
    v33 = 0;
    if ( CodePage == 0xFDE9 )
    {
      v35 = 0;
      if ( UTF8StringByteCount )
      {
        RtlUTF8ToUnicodeN(v15, v14, &UnicodeStringActualByteCount, v13, UTF8StringByteCount);
        v22 = UnicodeStringActualByteCount;
      }
      else
      {
        v22 = 0;
        UnicodeStringActualByteCount = 0;
      }
    }
    else
    {
      v21 = v14 >> 1;
      v33 = v21;
      if ( DBCSCodePage )
      {
        v24 = (int)v15;
        while ( v21 && UTF8StringByteCount )
        {
          v33 = --v21;
          v34 = --UTF8StringByteCount;
          v25 = (unsigned __int8)*v13;
          v26 = DBCSOffsets[v25];
          v36 = v15 + 1;
          if ( (_WORD)v26 )
          {
            if ( !UTF8StringByteCount )
            {
              *v15 = 0;
              LODWORD(v15) = (_DWORD)v15 + 2;
              break;
            }
            v27 = v13 + 1;
            v37 = v27;
            *v15 = DBCSOffsets[(unsigned __int8)*v27 + v26];
            v13 = v27 + 1;
            v34 = --UTF8StringByteCount;
          }
          else
          {
            *v15 = (*p_MultiByteTable)[v25];
            ++v13;
          }
          v37 = v13;
          ++v15;
        }
        UnicodeStringActualByteCount = (_DWORD)v15 - v24;
        v22 = (_DWORD)v15 - v24;
      }
      else
      {
        if ( v21 < UTF8StringByteCount )
          UTF8StringByteCount = v21;
        v22 = 2 * UTF8StringByteCount;
        UnicodeStringActualByteCount = 2 * UTF8StringByteCount;
        v23 = 0;
        v32 = 0;
        while ( v23 < UTF8StringByteCount )
        {
          v15[v23] = MultiByteTable[(unsigned __int8)v13[v23]];
          v32 = ++v23;
        }
      }
    }
    v31 = 0;
    DestinationString->Length = v22;
    DestinationString->Buffer[(unsigned __int64)v22 >> 1] = 0;
    return 0;
  }
  return result;
}
