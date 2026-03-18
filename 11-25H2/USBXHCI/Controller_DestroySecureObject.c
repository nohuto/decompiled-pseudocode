/*
 * XREFs of Controller_DestroySecureObject @ 0x140076704
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x140043C80 (Controller_WdfEvtCleanupCallback.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

__int64 __fastcall Controller_DestroySecureObject(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]

  result = *(_QWORD *)(a1 + 1024);
  if ( result )
  {
    v3 = *(_QWORD *)(a1 + 112);
    v4 = 0LL;
    v8 = 0;
    v5 = 0LL;
    v7 = 2;
    v6 = result;
    result = SecureChannel_SendRequestSynchronously(v3, (GUID *)&v4, 40, 0LL, 0);
    *(_QWORD *)(a1 + 1024) = 0LL;
  }
  return result;
}
