/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x1408E6E00
 * Callers:
 *     wcstombs @ 0x1404FDD50 (wcstombs.c)
 *     _wctomb_s_l @ 0x1404FE084 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x140502C58 (_safecrt_wctomb_s.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1408E7140 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x1408E71D0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rcx
  PCWCH v10; // r10
  ULONG v11; // eax
  PCHAR v12; // r8
  _CPTABLEINFO *p_Blink; // rcx
  ULONG v14; // r11d
  _WORD *WideCharTable; // rbx
  __int64 v16; // rcx
  __int16 v17; // r9
  unsigned int v19; // ecx
  _BYTE *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  ULONG *v23; // r8
  signed __int32 v24[8]; // [rsp+0h] [rbp-38h] BYREF
  char v25; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    p_Blink = &Utf8TableInfo;
    v12 = MultiByteString;
    v10 = UnicodeString;
    v11 = MaxBytesInMultiByteString;
  }
  else
  {
    _InterlockedOr(v24, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v10 = UnicodeString;
    v11 = MaxBytesInMultiByteString;
    v12 = MultiByteString;
    p_Blink = (_CPTABLEINFO *)&CurrentServerSiloGlobals[64].Blink;
    if ( !p_Blink )
    {
LABEL_22:
      v23 = (ULONG *)&v25;
      if ( BytesInMultiByteString )
        v23 = BytesInMultiByteString;
      if ( BytesInUnicodeString )
        RtlUnicodeToUTF8N(MultiByteString, MaxBytesInMultiByteString, v23, UnicodeString, BytesInUnicodeString);
      else
        *v23 = 0;
      return 0;
    }
  }
  if ( p_Blink->CodePage == 0xFDE9 )
    goto LABEL_22;
  v14 = BytesInUnicodeString >> 1;
  if ( p_Blink->DBCSCodePage )
  {
    WideCharTable = p_Blink->WideCharTable;
    if ( v14 )
    {
      while ( v11 )
      {
        v16 = *v10++;
        v17 = WideCharTable[v16];
        if ( HIBYTE(v17) )
        {
          v19 = v11--;
          if ( v19 < 2 )
            break;
          *v12++ = HIBYTE(v17);
        }
        *v12 = v17;
        --v11;
        ++v12;
        if ( !--v14 )
          break;
      }
    }
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = (_DWORD)v12 - (_DWORD)MultiByteString;
  }
  else
  {
    if ( v14 < MaxBytesInMultiByteString )
      MaxBytesInMultiByteString = BytesInUnicodeString >> 1;
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = MaxBytesInMultiByteString;
    v20 = p_Blink->WideCharTable;
    if ( MaxBytesInMultiByteString )
    {
      v21 = MaxBytesInMultiByteString;
      do
      {
        v22 = *UnicodeString;
        ++MultiByteString;
        ++UnicodeString;
        *(MultiByteString - 1) = v20[v22];
        --v21;
      }
      while ( v21 );
    }
  }
  return 0;
}
