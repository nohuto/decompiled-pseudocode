/*
 * XREFs of DbgkCreateMinimalProcess @ 0x1406FB318
 * Callers:
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     DbgkpSendApiMessage @ 0x140A60270 (DbgkpSendApiMessage.c)
 */

void *__fastcall DbgkCreateMinimalProcess(volatile signed __int32 *Object)
{
  void *result; // rax
  _DWORD v3[12]; // [rsp+20h] [rbp-128h] BYREF
  __int128 v4; // [rsp+50h] [rbp-F8h]
  __int128 v5; // [rsp+60h] [rbp-E8h]
  __int128 v6; // [rsp+70h] [rbp-D8h]

  result = memset_0(v3, 0, 0x110uLL);
  _InterlockedOr(Object + 125, 0x400001u);
  if ( *((_QWORD *)Object + 97) )
  {
    v3[0] = 6291512;
    v3[1] = 8;
    v3[10] = 2;
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    return (void *)DbgkpSendApiMessage((PVOID)Object);
  }
  return result;
}
