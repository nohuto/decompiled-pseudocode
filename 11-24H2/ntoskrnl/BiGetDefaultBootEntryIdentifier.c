/*
 * XREFs of BiGetDefaultBootEntryIdentifier @ 0x140812A44
 * Callers:
 *     BiGetAliasedIdentifier @ 0x1408129C8 (BiGetAliasedIdentifier.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BcdGetElementData @ 0x1409A5F00 (BcdGetElementData.c)
 */

__int64 __fastcall BiGetDefaultBootEntryIdentifier(void *a1, _OWORD *a2)
{
  NTSTATUS ElementData; // ebx
  ULONG BufferSize; // [rsp+20h] [rbp-38h] BYREF
  HANDLE BcdObjectHandle; // [rsp+28h] [rbp-30h] BYREF
  __int128 Buffer; // [rsp+30h] [rbp-28h] BYREF

  BcdObjectHandle = 0LL;
  Buffer = 0LL;
  ElementData = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
  if ( ElementData >= 0 )
  {
    BufferSize = 16;
    ElementData = BcdGetElementData(BcdObjectHandle, 0x23000003u, &Buffer, &BufferSize);
    if ( ElementData >= 0 )
      *a2 = Buffer;
  }
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  return (unsigned int)ElementData;
}
