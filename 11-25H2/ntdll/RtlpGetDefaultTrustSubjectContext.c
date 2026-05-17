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

__int64 __fastcall RtlpGetDefaultTrustSubjectContext(__int64 a1, _QWORD *a2)
{
  unsigned __int8 **v2; // rsi
  char *ProcessHeap; // rbp
  __int64 result; // rax
  int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rdi
  _QWORD *Heap; // rax
  _QWORD *v11; // rbx
  unsigned int v12; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v13[3]; // [rsp+34h] [rbp-D4h] BYREF
  _QWORD v14[10]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v15[10]; // [rsp+90h] [rbp-78h] BYREF

  v12 = 76;
  v13[0] = 76;
  v2 = (unsigned __int8 **)v14;
  ProcessHeap = (char *)NtCurrentPeb()->ProcessHeap;
  result = NtQueryInformationToken(-4LL, 41LL, v14, 76LL, &v12);
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( !a1 )
      goto LABEL_8;
    result = NtQueryInformationToken(a1, 41LL, v15, v13[0], v13);
    if ( (int)result < 0 )
      return result;
    v8 = v14[0];
    if ( v14[0] && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v14[0]) )
      return 3221225485LL;
    v9 = v15[0];
    if ( v15[0] )
    {
      if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v15[0]) )
        return 3221225485LL;
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 8) < *(_DWORD *)(v9 + 8) || *(_DWORD *)(v8 + 12) < *(_DWORD *)(v9 + 12) )
          goto LABEL_7;
      }
      else if ( *(_DWORD *)(v9 + 8) )
      {
        goto LABEL_7;
      }
    }
    v2 = (unsigned __int8 **)v15;
    v12 = v13[0];
LABEL_7:
    v7 = 0;
LABEL_8:
    Heap = (_QWORD *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v12);
    v11 = Heap;
    if ( !Heap )
      return 3221225495LL;
    if ( *v2 )
    {
      *Heap = Heap + 1;
      v7 = RtlCopySid(v12 - 8, Heap + 1, *v2);
      if ( v7 < 0 )
      {
        RtlFreeHeap(ProcessHeap, 0LL, v11);
        return (unsigned int)v7;
      }
    }
    else
    {
      *Heap = 0LL;
    }
    *a2 = v11;
    return (unsigned int)v7;
  }
  return result;
}
