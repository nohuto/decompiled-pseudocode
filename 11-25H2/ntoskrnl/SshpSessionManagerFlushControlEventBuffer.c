/*
 * XREFs of SshpSessionManagerFlushControlEventBuffer @ 0x140757944
 * Callers:
 *     SshpSessionManagerControlSessionCallback @ 0x1407578E0 (SshpSessionManagerControlSessionCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     SSHSupportEtwWrite @ 0x1404A3BCC (SSHSupportEtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SshpAlpcCloseTraceSession @ 0x1407581C8 (SshpAlpcCloseTraceSession.c)
 */

LONG __fastcall SshpSessionManagerFlushControlEventBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  char *v4; // rax
  unsigned int v5; // ebx
  const EVENT_DESCRIPTOR *v6; // rdx
  struct _EVENT_DATA_DESCRIPTOR i; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  for ( i = 0LL; v3 < (unsigned int)dword_140F059C8; v3 += v5 + 12 )
  {
    v4 = (char *)&unk_140F059CC + v3;
    v5 = *(_DWORD *)v4;
    v6 = *(const EVENT_DESCRIPTOR **)(v4 + 4);
    i.Ptr = (ULONGLONG)(v4 + 12);
    *(_QWORD *)&i.Size = v5;
    SSHSupportEtwWrite((__int64)&unk_140F059CC, v6, a3, 1u, &i);
  }
  LODWORD(dword_140F059C8) = 0;
  byte_140F05960 = 0;
  SshpAlpcCloseTraceSession();
  return KeSetEvent(&stru_140F059B0, 0, 0);
}
