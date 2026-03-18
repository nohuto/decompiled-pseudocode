/*
 * XREFs of SshpAlpcSendMessage @ 0x1407587C8
 * Callers:
 *     SshpAlpcOpenGracePeriodWorker @ 0x1407583A0 (SshpAlpcOpenGracePeriodWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14069C300 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall SshpAlpcSendMessage(__int64 a1, __int64 a2, unsigned int a3, const void *a4, char a5)
{
  HANDLE v5; // rbx
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v9[160]; // [rsp+90h] [rbp-70h] BYREF

  v5 = qword_140F05790;
  if ( qword_140F05790 )
  {
    v8 = 0LL;
    memmove(&v8, a4, a3);
    if ( a5 )
    {
      memset_0(v9, 0, sizeof(v9));
      v6 = 0x20000LL;
    }
    else
    {
      v6 = 0x10000LL;
    }
    return ZwAlpcSendWaitReceivePort((__int64)v5, v6);
  }
  return result;
}
