/*
 * XREFs of CmpVEAddHiveToSIDMappingTable @ 0x140A86400
 * Callers:
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpAddStringToMapping @ 0x140A8649C (CmpAddStringToMapping.c)
 */

__int64 __fastcall CmpVEAddHiveToSIDMappingTable(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // rax
  unsigned __int16 MaximumLength; // cx
  unsigned __int64 v6; // r8
  _WORD *v7; // rax
  unsigned __int16 Length; // dx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = *(unsigned __int16 **)(a2 + 16);
  MaximumLength = DestinationString.MaximumLength;
  v6 = *((_QWORD *)v4 + 1);
  v7 = (_WORD *)(v6 + 2 * (((unsigned __int64)*v4 - 2) >> 1));
  Length = DestinationString.Length;
  do
  {
    if ( *v7 == 92 )
      break;
    --v7;
    Length += 2;
    MaximumLength += 2;
  }
  while ( (unsigned __int64)v7 >= v6 );
  DestinationString.MaximumLength = MaximumLength;
  DestinationString.Length = Length;
  DestinationString.Buffer = v7 + 1;
  result = CmpAddStringToMapping(&DestinationString, a1);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 4112) |= 2u;
    return 0LL;
  }
  return result;
}
