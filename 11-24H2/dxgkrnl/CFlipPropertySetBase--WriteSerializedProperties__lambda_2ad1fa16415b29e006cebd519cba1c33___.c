/*
 * XREFs of CFlipPropertySetBase::WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___ @ 0x14009DC3C
 * Callers:
 *     NtFlipObjectReadNextMessageToProducer @ 0x14001A080 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x14004CA70 (NtFlipObjectConsumerAcquirePresent.c)
 * Callees:
 *     RtlCopyToUser @ 0x14018D054 (RtlCopyToUser.c)
 */

_UNKNOWN **__fastcall CFlipPropertySetBase::WriteSerializedProperties__lambda_2ad1fa16415b29e006cebd519cba1c33___(
        __int64 a1,
        __int64 a2,
        char *a3)
{
  _UNKNOWN **result; // rax
  char *v4; // r14
  unsigned int i; // ebp
  __int64 v8; // rbx
  char *v9; // rsi
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *(char **)(a1 + 24);
  for ( i = 0; i < *(_DWORD *)(a1 + 12); v4 += v10 )
  {
    v8 = 32LL * i;
    RtlCopyToUser(a3, (void *)(v8 + *(_QWORD *)(a1 + 16)), 0x10uLL);
    RtlCopyToUser(a3 + 16, (void *)(v8 + *(_QWORD *)(a1 + 16) + 16LL), 4uLL);
    v9 = a3 + 20;
    RtlCopyToUser(v9, v4, *(unsigned int *)(*(_QWORD *)(a1 + 16) + v8 + 16));
    result = *(_UNKNOWN ***)(a1 + 16);
    ++i;
    v10 = LODWORD(result[(unsigned __int64)v8 / 8 + 2]);
    a3 = &v9[v10];
  }
  return result;
}
