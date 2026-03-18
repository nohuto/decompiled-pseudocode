/*
 * XREFs of PopPowerRequestTableLookupEntry @ 0x140A5F1B4
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14046D61C (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1403F7C80 (RtlLookupElementGenericTableAvl.c)
 */

__int64 __fastcall PopPowerRequestTableLookupEntry(int a1)
{
  PVOID v1; // rcx
  __int64 result; // rax
  __int128 Buffer; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  DWORD2(Buffer) = a1;
  v1 = RtlLookupElementGenericTableAvl(&PopPowerRequestTable, &Buffer);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)v1;
  return result;
}
