/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x140904E70
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x14049EE30 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x140B63540 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x140905B50 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x140905BE0 (RtlUnicodeToUTF8N.c)
 */

ULONG __stdcall RtlxUnicodeStringToOemSize(PCUNICODE_STRING UnicodeString)
{
  ULONG UnicodeStringByteCount; // edi
  ULONG v2; // ebx
  wchar_t *Buffer; // rsi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  ULONG v5; // edx
  ULONG v6; // edi
  struct _LIST_ENTRY *Flink; // r8
  __int64 v8; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-38h] BYREF
  ULONG UTF8StringActualByteCount; // [rsp+40h] [rbp+8h] BYREF

  UnicodeStringByteCount = UnicodeString->Length;
  v2 = 0;
  Buffer = UnicodeString->Buffer;
  UTF8StringActualByteCount = 0;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    if ( UnicodeStringByteCount )
    {
      RtlUnicodeToUTF8N(0LL, 0, &UTF8StringActualByteCount, Buffer, UnicodeStringByteCount);
      v2 = UTF8StringActualByteCount;
    }
  }
  else
  {
    _InterlockedOr(v10, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v6 = UnicodeStringByteCount >> 1;
    Flink = CurrentServerSiloGlobals[67].Flink;
    if ( WORD2(CurrentServerSiloGlobals[65].Flink) )
    {
      for ( ; v6; --v6 )
      {
        v8 = *Buffer++;
        v5 += (HIBYTE(*((_WORD *)&Flink->Flink + v8)) != 0) + 1;
      }
      v2 = v5;
    }
    else
    {
      v2 = v6;
    }
  }
  return v2 + 1;
}
