/*
 * XREFs of IoCreateUnprotectedSymbolicLink @ 0x140713FB0
 * Callers:
 *     DifIoCreateUnprotectedSymbolicLinkWrapper @ 0x140627940 (DifIoCreateUnprotectedSymbolicLinkWrapper.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1406A7D10 (ZwCreateSymbolicLinkObject.c)
 */

NTSTATUS __stdcall IoCreateUnprotectedSymbolicLink(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName)
{
  NTSTATUS SymbolicLinkObject; // ebx
  HANDLE Handle; // [rsp+60h] [rbp+10h] BYREF

  Handle = 0LL;
  SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
  if ( SymbolicLinkObject >= 0 )
    ZwClose(Handle);
  return SymbolicLinkObject;
}
