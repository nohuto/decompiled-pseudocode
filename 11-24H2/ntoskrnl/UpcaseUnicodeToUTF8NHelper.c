/*
 * XREFs of UpcaseUnicodeToUTF8NHelper @ 0x140325D78
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x140904C60 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140905750 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1409064C0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlUnicodeToUTF8N @ 0x140905BE0 (RtlUnicodeToUTF8N.c)
 */

__int64 __fastcall UpcaseUnicodeToUTF8NHelper(
        PCHAR UTF8StringDestination,
        __int64 UTF8StringMaxByteCount,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // r15d
  int v6; // esi
  _DWORD *v8; // r12
  ULONG v9; // ebp
  CHAR *v10; // r13
  unsigned int v12; // ebx
  __int64 v13; // r12
  __int64 v14; // r11
  WCHAR *v15; // r9
  unsigned __int64 v16; // r8
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+38h] [rbp-E0h]
  _DWORD *v20; // [rsp+40h] [rbp-D8h]
  WCHAR UnicodeStringSource[64]; // [rsp+50h] [rbp-C8h] BYREF

  v5 = 0;
  v20 = a3;
  v6 = 0;
  v8 = a3;
  v9 = UTF8StringMaxByteCount;
  v10 = UTF8StringDestination;
  v19 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(UTF8StringDestination, UTF8StringMaxByteCount) + 1200);
  while ( a5 && v9 )
  {
    UTF8StringActualByteCount = 0;
    if ( a5 >= 0x40 )
    {
      v12 = 64;
      if ( a5 != 64 && (unsigned int)*(unsigned __int16 *)(a4 + 126) - 55296 <= 0x3FF )
        v12 = 63;
    }
    else
    {
      v12 = a5;
    }
    v13 = v19;
    v14 = v12;
    v15 = UnicodeStringSource;
    do
    {
      v16 = *(WCHAR *)((char *)v15 + a4 - (_QWORD)UnicodeStringSource);
      if ( (unsigned int)v16 >= 0x61 )
      {
        if ( (unsigned int)v16 > 0x7A )
        {
          if ( v13 && (unsigned __int16)v16 >= 0xC0u )
            LOWORD(v16) = *(_WORD *)(v13
                                   + 2
                                   * ((v16 & 0xF)
                                    + *(unsigned __int16 *)(v13
                                                          + 2LL
                                                          * (((unsigned __int8)v16 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v13 + 2 * (v16 >> 8))))))
                        + v16;
        }
        else
        {
          LOWORD(v16) = v16 - 32;
        }
      }
      *v15++ = v16;
      --v14;
    }
    while ( v14 );
    v8 = v20;
    if ( RtlUnicodeToUTF8N(v10, v9, &UTF8StringActualByteCount, UnicodeStringSource, 2 * v12) < 0 )
    {
      v6 += UTF8StringActualByteCount;
      v5 = -2147483643;
      break;
    }
    v10 += UTF8StringActualByteCount;
    v9 -= UTF8StringActualByteCount;
    v6 += UTF8StringActualByteCount;
    a5 -= v12;
    a4 += 2LL * v12;
  }
  if ( v8 )
    *v8 = v6;
  return v5;
}
