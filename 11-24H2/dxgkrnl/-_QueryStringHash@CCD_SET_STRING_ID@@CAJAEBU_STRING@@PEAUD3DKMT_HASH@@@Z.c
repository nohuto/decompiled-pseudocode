/*
 * XREFs of ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x14033F5E4
 * Callers:
 *     ?QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z @ 0x14004FB58 (-QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x14033F588 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 * Callees:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x14033F6C0 (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_QueryStringHash(PCANSI_STRING SourceString, struct D3DKMT_HASH *a2)
{
  NTSTATUS v4; // eax
  __int64 Md5Checksum; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+40h] [rbp-18h]

  *(_OWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  v9 = 0;
  v8 = 0LL;
  DestinationString = 0LL;
  v4 = RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 1u);
  LODWORD(Md5Checksum) = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(2LL, v4, SourceString);
    WdLogGlobalForLineNumber = 2035;
  }
  else
  {
    Md5Checksum = (int)CcdCreateMd5Checksum(
                         (const unsigned __int8 *)DestinationString.Buffer,
                         DestinationString.Length,
                         (unsigned __int8 *)a2 + 4);
    RtlFreeUnicodeString(&DestinationString);
    if ( (int)Md5Checksum < 0 )
    {
      WdLogSingleEntry2(2LL, Md5Checksum, SourceString);
      WdLogGlobalForLineNumber = 2049;
    }
    else
    {
      *(_DWORD *)a2 = 1;
    }
  }
  return (unsigned int)Md5Checksum;
}
