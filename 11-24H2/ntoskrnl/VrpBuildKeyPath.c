/*
 * XREFs of VrpBuildKeyPath @ 0x14092ADC0
 * Callers:
 *     VrpPreOpenOrCreate @ 0x1409292F4 (VrpPreOpenOrCreate.c)
 *     VrpPostEnumerateKey @ 0x14092A618 (VrpPostEnumerateKey.c)
 *     VrpCreateNamespaceNode @ 0x14092BCA8 (VrpCreateNamespaceNode.c)
 *     VrpPreLoadKey @ 0x140A6D8DC (VrpPreLoadKey.c)
 *     VrpPostOpenOrCreate @ 0x140AEB874 (VrpPostOpenOrCreate.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall VrpBuildKeyPath(PCUNICODE_STRING SourceString, PCUNICODE_STRING Source, PUNICODE_STRING Destination)
{
  unsigned int v3; // ebx
  PCUNICODE_STRING v4; // rsi
  unsigned __int16 Length; // ax
  unsigned __int16 v8; // cx
  wchar_t *Pool2; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v4 = (PCUNICODE_STRING)v11;
  Destination->Length = 0;
  v11[0] = 0LL;
  if ( SourceString )
    v4 = SourceString;
  v11[1] = 0LL;
  Length = v4->Length;
  Destination->MaximumLength = v4->Length;
  v8 = Source->Length + Length;
  if ( v8 < Length || (unsigned __int16)(v8 + 2) < v8 )
  {
    Destination->MaximumLength = -1;
    return (unsigned int)-1073741811;
  }
  else
  {
    Destination->MaximumLength = v8 + 2;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned __int16)(v8 + 2), 0x67655256u);
    Destination->Buffer = Pool2;
    if ( Pool2 )
    {
      RtlCopyUnicodeString(Destination, v4);
      if ( Source->Length )
      {
        if ( *Source->Buffer != 92 && (!v4->Length || v4->Buffer[((unsigned __int64)v4->Length >> 1) - 1] != 92) )
          RtlAppendUnicodeToString(Destination, L"\\");
        RtlAppendUnicodeStringToString(Destination, Source);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v3;
}
