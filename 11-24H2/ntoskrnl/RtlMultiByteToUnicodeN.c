/*
 * XREFs of RtlMultiByteToUnicodeN @ 0x140905510
 * Callers:
 *     mbstowcs @ 0x1404FC410 (mbstowcs.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x140905B50 (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x140906050 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  ULONG UTF8StringByteCount; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  ULONG v11; // r10d
  const CHAR *v12; // r9
  PWCH v13; // rdx
  _CPTABLEINFO *p_Blink; // r8
  ULONG v15; // edi
  unsigned __int16 *MultiByteTable; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  NTSTATUS result; // eax
  unsigned __int16 *DBCSOffsets; // r11
  __int64 v21; // rcx
  __int64 v22; // rax
  ULONG *p_BytesInMultiByteString; // r8
  signed __int32 v24[8]; // [rsp+0h] [rbp-38h] BYREF

  UTF8StringByteCount = BytesInMultiByteString;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    p_Blink = &Utf8TableInfo;
    v13 = UnicodeString;
    v11 = UTF8StringByteCount;
    v12 = MultiByteString;
  }
  else
  {
    _InterlockedOr(v24, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v11 = UTF8StringByteCount;
    v12 = MultiByteString;
    v13 = UnicodeString;
    p_Blink = (_CPTABLEINFO *)&CurrentServerSiloGlobals[64].Blink;
    if ( CurrentServerSiloGlobals == (struct _LIST_ENTRY *)-1032LL )
      goto LABEL_22;
  }
  if ( p_Blink->CodePage != 0xFDE9 )
  {
    v15 = MaxBytesInUnicodeString >> 1;
    if ( p_Blink->DBCSCodePage )
    {
      DBCSOffsets = p_Blink->DBCSOffsets;
      while ( v15 && v11 )
      {
        --v15;
        --v11;
        v21 = *(unsigned __int8 *)v12;
        v22 = DBCSOffsets[v21];
        if ( (_WORD)v22 )
        {
          if ( !v11 )
          {
            *v13 = 0;
            LODWORD(v13) = (_DWORD)v13 + 2;
            break;
          }
          --v11;
          *v13++ = DBCSOffsets[v22 + *((unsigned __int8 *)v12 + 1)];
          v12 += 2;
        }
        else
        {
          *v13++ = p_Blink->MultiByteTable[v21];
          ++v12;
        }
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)v13 - (_DWORD)UnicodeString;
    }
    else
    {
      if ( v15 < UTF8StringByteCount )
        UTF8StringByteCount = v15;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * UTF8StringByteCount;
      MultiByteTable = p_Blink->MultiByteTable;
      if ( UTF8StringByteCount )
      {
        v17 = UTF8StringByteCount;
        do
        {
          v18 = *(unsigned __int8 *)MultiByteString;
          ++UnicodeString;
          ++MultiByteString;
          *(UnicodeString - 1) = MultiByteTable[v18];
          --v17;
        }
        while ( v17 );
      }
    }
    return 0;
  }
LABEL_22:
  p_BytesInMultiByteString = &BytesInMultiByteString;
  if ( BytesInUnicodeString )
    p_BytesInMultiByteString = BytesInUnicodeString;
  if ( UTF8StringByteCount )
  {
    RtlUTF8ToUnicodeN(
      UnicodeString,
      MaxBytesInUnicodeString,
      p_BytesInMultiByteString,
      MultiByteString,
      UTF8StringByteCount);
    return 0;
  }
  result = 0;
  *p_BytesInMultiByteString = 0;
  return result;
}
