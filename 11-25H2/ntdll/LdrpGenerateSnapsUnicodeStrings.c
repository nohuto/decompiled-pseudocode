/*
 * XREFs of LdrpGenerateSnapsUnicodeStrings @ 0x18007B010
 * Callers:
 *     LdrpEtwLogLoaderSnaps @ 0x18011AC60 (LdrpEtwLogLoaderSnaps.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18004B290 (RtlUTF8ToUnicodeN.c)
 *     RtlStringCchPrintfExW @ 0x18007B880 (RtlStringCchPrintfExW.c)
 *     _vsnprintf @ 0x180124560 (_vsnprintf.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpGenerateSnapsUnicodeStrings(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char *Format,
        va_list ArgList)
{
  int Args; // ecx
  __int64 result; // rax
  int v13; // eax
  int v14; // ecx
  ULONG v15; // edx
  ULONG UTF8StringByteCount; // ebx
  WCHAR *v17; // r10
  unsigned __int16 CodePage; // ax
  unsigned __int16 **p_MultiByteTable; // r11
  unsigned __int16 DBCSCodePage; // cx
  unsigned __int16 *MultiByteTable; // r9
  unsigned __int16 *DBCSOffsets; // rdi
  char *v23; // r8
  ULONG v24; // edx
  ULONG v25; // eax
  char *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int UniqueProcess; // r8d
  signed __int32 v32[8]; // [rsp+0h] [rbp-1B8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-180h]
  char *v34; // [rsp+40h] [rbp-178h]
  __int64 v35; // [rsp+48h] [rbp-170h]
  char *v36; // [rsp+50h] [rbp-168h]
  __int64 v37; // [rsp+60h] [rbp-158h]
  ULONG UnicodeStringActualByteCount; // [rsp+68h] [rbp-150h] BYREF
  char Buffer[256]; // [rsp+70h] [rbp-148h] BYREF

  v37 = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x100uLL);
  Args = (int)NtCurrentTeb()->ClientId.UniqueThread;
  if ( a1 )
  {
    UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
    v36 = (&off_180176098)[2 * a5];
    v35 = a4;
    LODWORD(v34) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    LODWORD(v33) = Args;
    result = RtlStringCchPrintfExW(*(wchar_t **)(a2 + 8), 0, (wchar_t *)L"%04x:%04x @ %08d - %S - %S", UniqueProcess);
  }
  else
  {
    v34 = (&off_1801753A8)[2 * a5];
    v33 = a4;
    result = RtlStringCchPrintfExW(*(wchar_t **)(a2 + 8), 0, (wchar_t *)L"%x-%S-%S-", Args);
  }
  if ( !(_DWORD)result || (_DWORD)result == -2147483643 )
  {
    *(_WORD *)a2 = *(_WORD *)(a2 + 2) - 2 * v37;
    v13 = vsnprintf(Buffer, 0xFFuLL, Format, ArgList);
    if ( v13 < 0 || (unsigned __int64)v13 > 0xFE )
    {
      v14 = 1;
      Buffer[255] = 0;
    }
    else
    {
      v14 = 256 - v13;
    }
    v15 = *(unsigned __int16 *)(a3 + 2);
    UTF8StringByteCount = 256 - v14;
    v17 = *(WCHAR **)(a3 + 8);
    *(_WORD *)a3 = 2 * (256 - v14);
    _InterlockedOr(v32, 0);
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
      _InterlockedOr(v32, 0);
      CodePage = GlobalRtlNlsState.CodePage;
      p_MultiByteTable = &GlobalRtlNlsState.MultiByteTable;
      DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
      MultiByteTable = GlobalRtlNlsState.MultiByteTable;
      DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
    }
    v23 = Buffer;
    if ( CodePage == 0xFDE9 )
    {
      if ( UTF8StringByteCount )
        RtlUTF8ToUnicodeN(v17, v15, &UnicodeStringActualByteCount, Buffer, UTF8StringByteCount);
    }
    else
    {
      v24 = v15 >> 1;
      v25 = v24;
      if ( DBCSCodePage )
      {
        while ( v24 && UTF8StringByteCount )
        {
          --v24;
          --UTF8StringByteCount;
          v29 = (unsigned __int8)*v23;
          v30 = DBCSOffsets[v29];
          if ( (_WORD)v30 )
          {
            if ( !UTF8StringByteCount )
            {
              *v17 = 0;
              return 0LL;
            }
            --UTF8StringByteCount;
            *v17++ = DBCSOffsets[v30 + (unsigned __int8)v23[1]];
            v23 += 2;
          }
          else
          {
            *v17++ = (*p_MultiByteTable)[v29];
            ++v23;
          }
        }
      }
      else
      {
        if ( v24 >= UTF8StringByteCount )
          v25 = UTF8StringByteCount;
        if ( v25 )
        {
          v26 = Buffer;
          v27 = v25;
          do
          {
            v28 = (unsigned __int8)*v26;
            ++v17;
            ++v26;
            *(v17 - 1) = MultiByteTable[v28];
            --v27;
          }
          while ( v27 );
        }
      }
    }
    return 0LL;
  }
  return result;
}
