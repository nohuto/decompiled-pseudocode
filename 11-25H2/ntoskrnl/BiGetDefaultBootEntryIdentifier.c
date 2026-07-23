/*
 * XREFs of BiGetDefaultBootEntryIdentifier @ 0x14080278C
 * Callers:
 *     BiGetAliasedIdentifier @ 0x140802710 (BiGetAliasedIdentifier.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BcdGetElementData @ 0x140A25774 (BcdGetElementData.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
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
