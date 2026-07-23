/*
 * XREFs of RtlQueryTokenHostIdAsUlong64 @ 0x18010C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySecurityAttributesToken @ 0x180165EF0 (ZwQuerySecurityAttributesToken.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlQueryTokenHostIdAsUlong64(HANDLE TokenHandle, PULONG64 HostId)
{
  NTSTATUS result; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp-348h] BYREF
  _BYTE Buffer[4]; // [rsp+38h] [rbp-340h] BYREF
  int v7; // [rsp+3Ch] [rbp-33Ch]
  __int64 v8; // [rsp+40h] [rbp-338h]

  memset_thunk_772440563353939046(Buffer, 0, 0x330uLL);
  ReturnLength = 0;
  result = ZwQuerySecurityAttributesToken(
             TokenHandle,
             (PUNICODE_STRING)&stru_180176038,
             1u,
             Buffer,
             0x330u,
             &ReturnLength);
  if ( result >= 0 )
  {
    if ( v7 )
    {
      *HostId = **(_QWORD **)(v8 + 32);
      return 0;
    }
    else
    {
      return -1073741275;
    }
  }
  return result;
}
