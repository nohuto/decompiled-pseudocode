/*
 * XREFs of SshpSessionManagerFlushControlEventBuffer @ 0x140766D64
 * Callers:
 *     SshpSessionManagerControlSessionCallback @ 0x140766D00 (SshpSessionManagerControlSessionCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     SSHSupportEtwWrite @ 0x14049EA8C (SSHSupportEtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SshpAlpcCloseTraceSession @ 0x140767DA8 (SshpAlpcCloseTraceSession.c)
 */

LONG __fastcall SshpSessionManagerFlushControlEventBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  char *v4; // rax
  unsigned int v5; // ebx
  const EVENT_DESCRIPTOR *v6; // rdx
  struct _EVENT_DATA_DESCRIPTOR i; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  for ( i = 0LL; v3 < (unsigned int)dword_140F060C8; v3 += v5 + 12 )
  {
    v4 = (char *)&unk_140F060CC + v3;
    v5 = *(_DWORD *)v4;
    v6 = *(const EVENT_DESCRIPTOR **)(v4 + 4);
    i.Ptr = (ULONGLONG)(v4 + 12);
    *(_QWORD *)&i.Size = v5;
    SSHSupportEtwWrite((__int64)&unk_140F060CC, v6, a3, 1u, &i);
  }
  LODWORD(dword_140F060C8) = 0;
  byte_140F06060 = 0;
  SshpAlpcCloseTraceSession();
  return KeSetEvent(&stru_140F060B0, 0, 0);
}
