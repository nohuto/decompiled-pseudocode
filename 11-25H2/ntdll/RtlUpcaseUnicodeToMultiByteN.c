/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x18006B330
 * Callers:
 *     toupper @ 0x180129050 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x18013DAD0 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x18006B850 (RtlUnicodeToUTF8N.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // esi
  PULONG v7; // r14
  ULONG v8; // ebp
  CHAR *v9; // rdi
  unsigned __int16 *MultiByteTable; // r11
  _BYTE *v11; // r9
  __int64 v12; // r12
  ULONG v13; // eax
  __int64 v14; // r10
  unsigned __int64 v15; // rax
  NTSTATUS v17; // r15d
  ULONG v18; // r12d
  unsigned int v19; // r13d
  __int64 v20; // r10
  PULONG v21; // r13
  WCHAR *v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // r13
  _WORD *WideCharTable; // r10
  PCHAR v26; // r8
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  unsigned __int16 v30; // cx
  __int64 v31; // rdx
  unsigned __int16 v32; // r9
  __int16 v33; // dx
  unsigned int v34; // eax
  signed __int32 v35[8]; // [rsp+0h] [rbp-108h] BYREF
  ULONG v36; // [rsp+30h] [rbp-D8h]
  ULONG UTF8StringActualByteCount; // [rsp+34h] [rbp-D4h] BYREF
  PULONG v38; // [rsp+38h] [rbp-D0h]
  WCHAR UnicodeStringSource[64]; // [rsp+40h] [rbp-C8h] BYREF

  v6 = BytesInUnicodeString >> 1;
  v7 = BytesInMultiByteString;
  v38 = BytesInMultiByteString;
  v8 = MaxBytesInMultiByteString;
  v36 = MaxBytesInMultiByteString;
  v9 = MultiByteString;
  _InterlockedOr(v35, 0);
  if ( CodePageTable.CodePage == 0xFDE9 || GlobalRtlNlsState.CodePage == 0xFDE9 )
  {
    v17 = 0;
    v18 = 0;
    v38 = (PULONG)qword_1801CF038;
    while ( 1 )
    {
      if ( !v6 || !v8 )
      {
LABEL_22:
        if ( v7 )
          *v7 = v18;
        return v17;
      }
      UTF8StringActualByteCount = 0;
      if ( v6 >= 0x40 )
      {
        v19 = 64;
        v36 = 64;
        if ( v6 != 64 )
        {
          if ( (unsigned int)UnicodeString[63] - 55296 > 0x3FF )
            goto LABEL_27;
          v19 = 63;
        }
        v36 = v19;
      }
      else
      {
        v19 = v6;
        v36 = v6;
      }
LABEL_27:
      v20 = v19;
      v21 = v38;
      v22 = UnicodeStringSource;
      do
      {
        v23 = *(WCHAR *)((char *)v22 + (char *)UnicodeString - (char *)UnicodeStringSource);
        if ( (unsigned int)v23 >= 0x61 )
        {
          if ( (unsigned int)v23 > 0x7A )
          {
            if ( v21 && (unsigned __int16)v23 >= 0xC0u )
              LOWORD(v23) = *((_WORD *)v21
                            + (v23 & 0xF)
                            + *((unsigned __int16 *)v21
                              + ((unsigned __int8)v23 >> 4)
                              + (unsigned int)*((unsigned __int16 *)v21 + (v23 >> 8))))
                          + v23;
          }
          else
          {
            LOWORD(v23) = v23 - 32;
          }
        }
        *v22++ = v23;
        --v20;
      }
      while ( v20 );
      v24 = v36;
      if ( RtlUnicodeToUTF8N(v9, v8, &UTF8StringActualByteCount, UnicodeStringSource, 2 * v36) < 0 )
      {
        v18 += UTF8StringActualByteCount;
        v17 = -2147483643;
        goto LABEL_22;
      }
      UnicodeString += v24;
      v9 += UTF8StringActualByteCount;
      v8 -= UTF8StringActualByteCount;
      v18 += UTF8StringActualByteCount;
      v6 -= v24;
    }
  }
  _InterlockedOr(v35, 0);
  MultiByteTable = GlobalRtlNlsState.MultiByteTable;
  if ( GlobalRtlNlsState.DBCSCodePage )
  {
    WideCharTable = GlobalRtlNlsState.WideCharTable;
    v26 = MultiByteString;
    v27 = qword_1801CF020;
    v28 = qword_1801CF038;
    if ( v6 )
    {
      do
      {
        if ( !v8 )
          break;
        v29 = *UnicodeString++;
        v30 = WideCharTable[v29];
        v31 = *(unsigned __int16 *)(v27 + 2 * ((unsigned __int64)v30 >> 8));
        if ( (_WORD)v31 )
          v32 = GlobalRtlNlsState.DBCSOffsets[v31 + (unsigned __int8)v30];
        else
          v32 = MultiByteTable[(unsigned __int8)v30];
        if ( v32 >= 0x61u )
        {
          if ( v32 > 0x7Au )
          {
            if ( v28 && v32 >= 0xC0u )
              v32 += *(_WORD *)(v28
                              + 2LL
                              * ((v32 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(v28
                                                                   + 2LL
                                                                   * (((v32 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(v28 + 2 * ((unsigned __int64)v32 >> 8))))));
          }
          else
          {
            v32 -= 32;
          }
        }
        v33 = WideCharTable[v32];
        if ( HIBYTE(v33) )
        {
          v34 = v8--;
          if ( v34 < 2 )
            break;
          *v26++ = HIBYTE(v33);
        }
        *v26 = v33;
        --v8;
        ++v26;
        --v6;
      }
      while ( v6 );
      v7 = v38;
    }
    if ( v7 )
      *v7 = (_DWORD)v26 - (_DWORD)v9;
    return v8 < v6 ? 0x80000005 : 0;
  }
  else
  {
    v11 = GlobalRtlNlsState.WideCharTable;
    v12 = qword_1801CF038;
    v13 = MaxBytesInMultiByteString;
    if ( v6 < MaxBytesInMultiByteString )
      v13 = BytesInUnicodeString >> 1;
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = v13;
    if ( v13 )
    {
      v14 = v13;
      do
      {
        v15 = MultiByteTable[(unsigned __int8)v11[*UnicodeString]];
        if ( (unsigned int)v15 >= 0x61 )
        {
          if ( (unsigned int)v15 > 0x7A )
          {
            if ( v12 )
            {
              if ( (unsigned __int16)v15 >= 0xC0u )
                LOWORD(v15) = *(_WORD *)(v12
                                       + 2
                                       * ((v15 & 0xF)
                                        + *(unsigned __int16 *)(v12
                                                              + 2LL
                                                              * (((unsigned __int8)v15 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(v12 + 2 * (v15 >> 8))))))
                            + v15;
            }
          }
          else
          {
            LOWORD(v15) = v15 - 32;
          }
        }
        ++UnicodeString;
        *v9++ = v11[(unsigned __int16)v15];
        --v14;
      }
      while ( v14 );
      v8 = v36;
    }
    return v8 < v6 ? 0x80000005 : 0;
  }
}
