/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x140697A48
 * Callers:
 *     AslpPathWildcardAllocMatchNode @ 0x14080B8D0 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_1 @ 0x1404968D0 (RtlUnicodeStringValidateWorker_1.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCbCatStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cbToAppend)
{
  NTSTRSAFE_PCWSTR v3; // rdi
  NTSTATUS v5; // eax
  unsigned __int16 *v6; // rcx
  unsigned __int64 v7; // r11
  NTSTATUS v8; // r10d
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r11
  __int16 v13; // dx
  unsigned __int64 v14; // r8
  __int64 v15; // r9

  v3 = pszSrc;
  v5 = RtlUnicodeStringValidateWorker_1(DestinationString, (const size_t)pszSrc, cbToAppend);
  v8 = v5;
  if ( v5 >= 0 && v6 )
  {
    v9 = *((_QWORD *)v6 + 1);
    v10 = (unsigned __int64)v6[1] >> 1;
    v11 = (unsigned __int64)*v6 >> 1;
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    if ( v5 < 0 )
      return v8;
  }
  v12 = v7 >> 1;
  if ( v12 > 0x7FFF )
    return -1073741811;
  v8 = 0;
  v13 = 0;
  v14 = v10 - v11;
  if ( v14 )
  {
    v15 = 2 * v11 - (_QWORD)v3 + v9;
    while ( v12 )
    {
      if ( *v3 )
      {
        *(NTSTRSAFE_PCWSTR)((char *)v3 + v15) = *v3;
        --v12;
        ++v3;
        ++v13;
        if ( --v14 )
          continue;
      }
      if ( v14 )
        break;
      goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    if ( v12 && *v3 )
      v8 = -2147483643;
  }
  DestinationString->Length = 2 * (v13 + v11);
  return v8;
}
