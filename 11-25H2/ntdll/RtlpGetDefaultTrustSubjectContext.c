/*
 * XREFs of RtlpGetDefaultTrustSubjectContext @ 0x180061230
 * Callers:
 *     RtlpGetDefaultsSubjectContext @ 0x180060DC0 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlCopySid @ 0x180060CD0 (RtlCopySid.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1800E88C0 (RtlIsValidProcessTrustLabelSid.c)
 *     NtQueryInformationToken @ 0x180163640 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpGetDefaultTrustSubjectContext(HANDLE TokenHandle, _QWORD *a2)
{
  PSID *v2; // rsi
  void *ProcessHeap; // rbp
  NTSTATUS result; // eax
  NTSTATUS v7; // edi
  _DWORD *v8; // rbx
  _DWORD *v9; // rdi
  _QWORD *Heap; // rax
  void *v11; // rbx
  ULONG ReturnLength; // [rsp+30h] [rbp-D8h] BYREF
  ULONG TokenInformationLength[3]; // [rsp+34h] [rbp-D4h] BYREF
  PSID TokenInformation[10]; // [rsp+40h] [rbp-C8h] BYREF
  PSID Sid[10]; // [rsp+90h] [rbp-78h] BYREF

  ReturnLength = 76;
  TokenInformationLength[0] = 76;
  v2 = TokenInformation;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0x29u, TokenInformation, 0x4Cu, &ReturnLength);
  v7 = result;
  if ( result >= 0 )
  {
    if ( !TokenHandle )
      goto LABEL_8;
    result = NtQueryInformationToken(TokenHandle, 0x29u, Sid, TokenInformationLength[0], TokenInformationLength);
    if ( result < 0 )
      return result;
    v8 = TokenInformation[0];
    if ( TokenInformation[0] && !RtlIsValidProcessTrustLabelSid(TokenInformation[0]) )
      return -1073741811;
    v9 = Sid[0];
    if ( Sid[0] )
    {
      if ( !RtlIsValidProcessTrustLabelSid(Sid[0]) )
        return -1073741811;
      if ( v8 )
      {
        if ( v8[2] < v9[2] || v8[3] < v9[3] )
          goto LABEL_7;
      }
      else if ( v9[2] )
      {
        goto LABEL_7;
      }
    }
    v2 = Sid;
    ReturnLength = TokenInformationLength[0];
LABEL_7:
    v7 = 0;
LABEL_8:
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, ReturnLength);
    v11 = Heap;
    if ( !Heap )
      return -1073741801;
    if ( *v2 )
    {
      *Heap = Heap + 1;
      v7 = RtlCopySid(ReturnLength - 8, Heap + 1, *v2);
      if ( v7 < 0 )
      {
        RtlFreeHeap(ProcessHeap, 0, v11);
        return v7;
      }
    }
    else
    {
      *Heap = 0LL;
    }
    *a2 = v11;
    return v7;
  }
  return result;
}
