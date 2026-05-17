/*
 * XREFs of LdrpGenerateSnapsUnicodeStrings @ 0x180013A00
 * Callers:
 *     LdrpEtwLogLoaderSnaps @ 0x180117A20 (LdrpEtwLogLoaderSnaps.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18000C3F0 (RtlUTF8ToUnicodeN.c)
 *     RtlStringCchPrintfExW @ 0x180014270 (RtlStringCchPrintfExW.c)
 *     _vsnprintf @ 0x180122A80 (_vsnprintf.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
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
  unsigned int v15; // edx
  unsigned int v16; // ebx
  _WORD *v17; // r10
  __int16 v18; // ax
  __int64 *v19; // r11
  __int16 v20; // cx
  __int64 v21; // r9
  __int64 v22; // rdi
  char *v23; // r8
  unsigned int v24; // edx
  unsigned int v25; // eax
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
  int v38; // [rsp+68h] [rbp-150h] BYREF
  char Buffer[256]; // [rsp+70h] [rbp-148h] BYREF

  v37 = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x100uLL);
  Args = (int)NtCurrentTeb()->ClientId.UniqueThread;
  if ( a1 )
  {
    UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
    v36 = (&off_180174088)[2 * a5];
    v35 = a4;
    LODWORD(v34) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    LODWORD(v33) = Args;
    result = RtlStringCchPrintfExW(*(wchar_t **)(a2 + 8), 0, (wchar_t *)L"%04x:%04x @ %08d - %S - %S", UniqueProcess);
  }
  else
  {
    v34 = (&off_180173018)[2 * a5];
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
    v16 = 256 - v14;
    v17 = *(_WORD **)(a3 + 8);
    *(_WORD *)a3 = 2 * (256 - v14);
    _InterlockedOr(v32, 0);
    if ( word_1801CCFD0 == -535 || GlobalRtlNlsState == -535 )
    {
      v18 = Utf8TableInfo;
      v19 = (__int64 *)&xmmword_1801CD070;
      v20 = WORD6(Utf8TableInfo);
      v21 = xmmword_1801CD070;
      v22 = qword_1801CD088;
    }
    else
    {
      _InterlockedOr(v32, 0);
      v18 = GlobalRtlNlsState;
      v19 = &qword_1801CCFB0;
      v20 = word_1801CCF9C;
      v21 = qword_1801CCFB0;
      v22 = qword_1801CCFC8;
    }
    v23 = Buffer;
    if ( v18 == -535 )
    {
      if ( v16 )
        RtlUTF8ToUnicodeN(v17, v15, &v38, Buffer, v16);
    }
    else
    {
      v24 = v15 >> 1;
      v25 = v24;
      if ( v20 )
      {
        while ( v24 && v16 )
        {
          --v24;
          --v16;
          v29 = 2LL * (unsigned __int8)*v23;
          v30 = *(unsigned __int16 *)(v29 + v22);
          if ( (_WORD)v30 )
          {
            if ( !v16 )
            {
              *v17 = 0;
              return 0LL;
            }
            --v16;
            *v17++ = *(_WORD *)(v22 + 2 * (v30 + (unsigned __int8)v23[1]));
            v23 += 2;
          }
          else
          {
            *v17++ = *(_WORD *)(v29 + *v19);
            ++v23;
          }
        }
      }
      else
      {
        if ( v24 >= v16 )
          v25 = v16;
        if ( v25 )
        {
          v26 = Buffer;
          v27 = v25;
          do
          {
            v28 = (unsigned __int8)*v26;
            ++v17;
            ++v26;
            *(v17 - 1) = *(_WORD *)(v21 + 2 * v28);
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
