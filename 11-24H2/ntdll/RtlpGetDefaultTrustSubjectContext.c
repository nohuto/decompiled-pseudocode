/*
 * XREFs of RtlpGetDefaultTrustSubjectContext @ 0x1800C90B0
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800C6F30 (RtlpSetSecurityObject.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800C8C40 (RtlpGetDefaultsSubjectContext.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1800C8840 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x1800C8B90 (RtlCopySid.c)
 *     NtQueryInformationToken @ 0x1801620B0 (NtQueryInformationToken.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetDefaultTrustSubjectContext(__int64 a1, unsigned __int64 *a2)
{
  __int64 *v2; // rsi
  void *ProcessHeap; // rbp
  __int64 result; // rax
  int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rdi
  _QWORD *Heap; // rax
  unsigned __int64 v11; // rbx
  unsigned int v12; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v13[3]; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v14[10]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15[10]; // [rsp+90h] [rbp-78h] BYREF

  v12 = 76;
  v13[0] = 76;
  v2 = v14;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
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
    if ( v14[0] && !RtlIsValidProcessTrustLabelSid(v14[0]) )
      return 3221225485LL;
    v9 = v15[0];
    if ( v15[0] )
    {
      if ( !RtlIsValidProcessTrustLabelSid(v15[0]) )
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
    v2 = v15;
    v12 = v13[0];
LABEL_7:
    v7 = 0;
LABEL_8:
    Heap = (_QWORD *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v12);
    v11 = (unsigned __int64)Heap;
    if ( !Heap )
      return 3221225495LL;
    if ( *v2 )
    {
      *Heap = Heap + 1;
      v7 = RtlCopySid(v12 - 8, Heap + 1, (unsigned __int8 *)*v2);
      if ( v7 < 0 )
      {
        RtlFreeHeap((__int64)ProcessHeap, 0, v11);
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
