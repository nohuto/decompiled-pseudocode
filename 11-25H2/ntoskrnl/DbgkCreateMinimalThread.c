/*
 * XREFs of DbgkCreateMinimalThread @ 0x14090B610
 * Callers:
 *     PspUserThreadStartup @ 0x14090AF50 (PspUserThreadStartup.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     DbgkpSendApiMessage @ 0x140A60270 (DbgkpSendApiMessage.c)
 */

void *__fastcall DbgkCreateMinimalThread(__int64 a1)
{
  void *result; // rax
  _QWORD *v3; // rdi
  _DWORD v4[14]; // [rsp+20h] [rbp-128h] BYREF
  __int64 v5; // [rsp+58h] [rbp-F0h]
  _BYTE v6[208]; // [rsp+60h] [rbp-E8h] BYREF

  result = memset_0(v6, 0, sizeof(v6));
  v3 = *(_QWORD **)(a1 + 184);
  if ( v3[97] )
  {
    memset_0(v4, 0, 0x40uLL);
    v5 = *(_QWORD *)(a1 + 1376);
    v4[10] = 1;
    v4[0] = 4194328;
    v4[1] = 8;
    return (void *)DbgkpSendApiMessage(v3);
  }
  return result;
}
