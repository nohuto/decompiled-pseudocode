/*
 * XREFs of PspIumAlertMultipleThreadByThreadId @ 0x1405E3764
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     KeAlertMultipleThreadByThreadId @ 0x1405B50C0 (KeAlertMultipleThreadByThreadId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PspIumAlertMultipleThreadByThreadId(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _BYTE v7[96]; // [rsp+20h] [rbp-78h] BYREF

  memset_0(v7, 0, sizeof(v7));
  v2 = 0;
  v3 = a1 - (_QWORD)v7;
  v4 = v7;
  do
  {
    v5 = *(_QWORD *)((char *)v4 + v3 + 8);
    if ( !v5 )
      break;
    *v4 = v5;
    ++v2;
    ++v4;
  }
  while ( v2 < 0xC );
  KeAlertMultipleThreadByThreadId((__int64)v7, v2, 0LL);
  return 0LL;
}
