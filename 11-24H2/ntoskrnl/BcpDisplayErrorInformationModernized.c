/*
 * XREFs of BcpDisplayErrorInformationModernized @ 0x14069A4D4
 * Callers:
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069B730 (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     BcpConvertBugDataToString @ 0x1406998DC (BcpConvertBugDataToString.c)
 *     BcpDisplayCriticalString @ 0x140699B4C (BcpDisplayCriticalString.c)
 *     BcpDisplayCriticalStringCentered @ 0x140699EB0 (BcpDisplayCriticalStringCentered.c)
 *     BcpSanitizeDriverName @ 0x14069B094 (BcpSanitizeDriverName.c)
 *     BcpSetCursorPosition @ 0x14069B148 (BcpSetCursorPosition.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall BcpDisplayErrorInformationModernized(
        int a1,
        unsigned int a2,
        unsigned __int64 *a3,
        __int64 a4,
        const UNICODE_STRING *a5,
        char a6)
{
  const UNICODE_STRING *v6; // r14
  int *v11; // rbx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  unsigned int v14; // eax
  _WORD *v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  __int64 v22; // rdi
  int v23; // edx
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v27; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+28h] [rbp-D8h] BYREF
  UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+50h] [rbp-B0h]
  int v32; // [rsp+58h] [rbp-A8h]
  __int64 v33; // [rsp+5Ch] [rbp-A4h] BYREF
  UNICODE_STRING v34; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+78h] [rbp-88h] BYREF
  const UNICODE_STRING *v36; // [rsp+88h] [rbp-78h]
  _WORD v37[16]; // [rsp+90h] [rbp-70h] BYREF
  char v38; // [rsp+B0h] [rbp-50h] BYREF

  v6 = a5;
  v36 = a5;
  v30 = 0LL;
  v27 = *(_QWORD *)&BcpCursor;
  v33 = 0LL;
  *(_QWORD *)&Destination.Length = 0x4000000LL;
  *(_DWORD *)(&v34.MaximumLength + 1) = 0;
  *(_DWORD *)(&Source.MaximumLength + 1) = 0;
  v11 = (int *)((char *)&unk_140E0EFA0 + 84 * a1);
  v31 = dword_140EEFD38;
  v28 = dword_140EEFD38;
  Source.MaximumLength = 18;
  Source.Buffer = v37;
  Destination.Buffer = (wchar_t *)qword_140E3EBE8;
  if ( RtlAppendUnicodeStringToString(&Destination, &stru_140E3EB70) >= 0
    && RtlAppendUnicodeToString(&Destination, L" ") >= 0
    && RtlAppendUnicodeStringToString(&Destination, a5 + 1) >= 0 )
  {
    v12 = a2;
    LODWORD(v13) = 0;
    v14 = a2;
    do
    {
      v14 >>= 4;
      v13 = (unsigned int)(v13 + 1);
    }
    while ( v14 );
    if ( 2 * (unsigned __int64)(unsigned int)(v13 + 1) > 0x12 )
      goto LABEL_15;
    v15 = &v37[v13];
    *v15 = 0;
    for ( Source.Length = 2 * v13; (_DWORD)v13; LODWORD(v13) = v13 - 1 )
    {
      v16 = v12 & 0xF;
      v12 >>= 4;
      *--v15 = a0123456789abcd[v16];
    }
    if ( RtlAppendUnicodeToString(&Destination, L" (0x") >= 0
      && RtlAppendUnicodeStringToString(&Destination, &Source) >= 0
      && RtlAppendUnicodeToString(&Destination, L")") >= 0 )
    {
LABEL_15:
      if ( !a4
        || (*(_DWORD *)&v34.Length = 0x800000,
            v34.Buffer = (wchar_t *)&v38,
            BcpSanitizeDriverName(a4, &v34),
            *(_QWORD *)&v30.Length = 0LL,
            v30.MaximumLength = word_140E3EC08,
            v30.Buffer = (wchar_t *)qword_140E3EC00,
            RtlAppendUnicodeStringToString(&v30, &stru_140E3EB60) >= 0)
        && RtlAppendUnicodeToString(&v30, L" ") >= 0
        && RtlAppendUnicodeStringToString(&v30, &v34) >= 0 )
      {
        v17 = v11[1];
        dword_140EF0270 |= 0x1000000u;
        BcpDisplayCriticalStringCentered(&Destination, v17, v12, a1);
        if ( a4 )
        {
          BcpSetCursorPosition((unsigned int)v27, (unsigned int)dword_140EEFD38, 0LL);
          BcpDisplayCriticalStringCentered(&v30, v11[1], v18, a1);
        }
        v19 = (unsigned int)(v31 + v11[5] + v11[7] - dword_140EEFD38);
        dword_140EF0270 &= ~0x1000000u;
        BcpSetCursorPosition((unsigned int)v27, v19, 0LL);
        BcpDisplayCriticalStringCentered(&Destination, v11[1], v20, a1);
        if ( a4 )
        {
          BcpSetCursorPosition((unsigned int)v27, (unsigned int)dword_140EEFD38, 0LL);
          BcpDisplayCriticalStringCentered(&v30, v11[1], v21, a1);
        }
        v32 = 0;
        v33 = 0LL;
        v27 = *(_QWORD *)&BcpCursor;
        v28 = dword_140EEFD38;
        BcpSetCursorPosition(0LL, 0LL, (char *)&v33 + 4);
        v22 = 0LL;
        v24 = (unsigned int)(v23 + 4);
        do
        {
          BcpConvertBugDataToString(*a3, (__int64)&v6[v22 + 2]);
          if ( BcpDisplayParameters || (a6 & 8) != 0 && a2 == 317 )
          {
            BcpDisplayCriticalString(&v6[v22 + 2].Length, *v11, v25, a1);
            BcpSetCursorPosition(0LL, (unsigned int)dword_140EEFD38, 0LL);
          }
          v6 = v36;
          ++v22;
          ++a3;
          --v24;
        }
        while ( v24 );
      }
    }
  }
  return BcpSetCursorPosition((unsigned int)v27, HIDWORD(v27), &v28);
}
