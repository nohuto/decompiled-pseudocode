/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x140905970
 * Callers:
 *     _safecrt_mbtowc @ 0x1404FC4D0 (_safecrt_mbtowc.c)
 *     toupper @ 0x1404FD460 (toupper.c)
 *     _mbstrlen @ 0x1404FF9BC (_mbstrlen.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x140905B50 (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x140906050 (RtlUTF8ToUnicodeN.c)
 */

WCHAR __cdecl RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  int v2; // esi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  const CHAR *v4; // rbx
  ULONG UTF8StringByteCount; // edi
  struct _LIST_ENTRY *v6; // rax
  WCHAR *p_UnicodeStringDestination; // r8
  ULONG v8; // r10d
  const CHAR *v9; // r9
  _CPTABLEINFO *p_Blink; // rdx
  unsigned __int16 *MultiByteTable; // r9
  __int64 v12; // r8
  WCHAR *v13; // rdx
  __int64 v14; // rax
  unsigned __int16 *DBCSOffsets; // r11
  __int64 v17; // rcx
  __int64 v18; // rax
  UCHAR v19; // al
  unsigned __int8 *v20; // r9
  signed __int32 v21[8]; // [rsp+0h] [rbp-48h] BYREF
  WCHAR UnicodeStringDestination; // [rsp+50h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  UnicodeStringDestination = 32;
  v2 = 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    v4 = (const CHAR *)*SourceCharacter;
    v19 = **SourceCharacter;
    if ( v19 < 0xC0u )
      goto LABEL_3;
    if ( v19 < 0xE0u )
    {
      UTF8StringByteCount = 2;
    }
    else if ( v19 < 0xF0u )
    {
      UTF8StringByteCount = 3;
    }
    else
    {
      UTF8StringByteCount = 1;
      if ( v19 < 0xF8u )
        UTF8StringByteCount = 4;
    }
  }
  else
  {
    _InterlockedOr(v21, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v4 = (const CHAR *)*SourceCharacter;
    if ( !*((_WORD *)&CurrentServerSiloGlobals[73].Blink->Flink + **SourceCharacter) )
    {
LABEL_3:
      UTF8StringByteCount = 1;
      goto LABEL_4;
    }
    UTF8StringByteCount = 2;
  }
LABEL_4:
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    p_Blink = &Utf8TableInfo;
    v8 = UTF8StringByteCount;
    p_UnicodeStringDestination = &UnicodeStringDestination;
    v9 = v4;
  }
  else
  {
    _InterlockedOr(v21, 0);
    v6 = PsGetCurrentServerSiloGlobals();
    p_UnicodeStringDestination = &UnicodeStringDestination;
    v8 = UTF8StringByteCount;
    v9 = v4;
    p_Blink = (_CPTABLEINFO *)&v6[64].Blink;
    if ( v6 == (struct _LIST_ENTRY *)-1032LL )
    {
LABEL_18:
      RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v4, UTF8StringByteCount);
      goto LABEL_11;
    }
  }
  if ( p_Blink->CodePage == 0xFDE9 )
    goto LABEL_18;
  if ( p_Blink->DBCSCodePage )
  {
    DBCSOffsets = p_Blink->DBCSOffsets;
    while ( v2 && v8 )
    {
      --v2;
      --v8;
      v17 = *(unsigned __int8 *)v9;
      v18 = DBCSOffsets[v17];
      if ( (_WORD)v18 )
      {
        if ( !v8 )
        {
          *p_UnicodeStringDestination = 0;
          break;
        }
        v20 = (unsigned __int8 *)(v9 + 1);
        --v8;
        *p_UnicodeStringDestination++ = DBCSOffsets[*v20 + v18];
        v9 = (const CHAR *)(v20 + 1);
      }
      else
      {
        *p_UnicodeStringDestination++ = p_Blink->MultiByteTable[v17];
        ++v9;
      }
    }
  }
  else
  {
    MultiByteTable = p_Blink->MultiByteTable;
    v12 = UTF8StringByteCount;
    v13 = &UnicodeStringDestination;
    if ( UTF8StringByteCount > 1 )
      v12 = 1LL;
    do
    {
      v14 = *(unsigned __int8 *)v4;
      ++v13;
      ++v4;
      *(v13 - 1) = MultiByteTable[v14];
      --v12;
    }
    while ( v12 );
  }
LABEL_11:
  *SourceCharacter += UTF8StringByteCount;
  return UnicodeStringDestination;
}
