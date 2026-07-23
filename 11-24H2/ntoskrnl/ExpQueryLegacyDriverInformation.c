/*
 * XREFs of ExpQueryLegacyDriverInformation @ 0x1407B5438
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IoGetLegacyVetoList @ 0x14099F770 (IoGetLegacyVetoList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpQueryLegacyDriverInformation(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  size_t Length; // rdx
  unsigned int v7; // edi
  PCWSTR SourceString[2]; // [rsp+28h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+20h]

  v10 = 0;
  SourceString[0] = 0LL;
  DestinationString = 0LL;
  result = IoGetLegacyVetoList(SourceString, &v10);
  v5 = result;
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString[0]);
    Length = DestinationString.Length;
    v7 = DestinationString.Length + 24;
    v11 = v7;
    if ( v7 <= *a2 )
    {
      *(_DWORD *)a1 = v10;
      *(_WORD *)(a1 + 8) = Length;
      *(_QWORD *)(a1 + 16) = a1 + 24;
      memmove((void *)(a1 + 24), DestinationString.Buffer, Length);
    }
    else
    {
      v5 = -2147483643;
    }
    if ( SourceString[0] )
      ExFreePoolWithTag((PVOID)SourceString[0], 0);
    *a2 = v7;
    return v5;
  }
  return result;
}
