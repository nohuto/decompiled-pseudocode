/*
 * XREFs of RtlpInternEntryMatch @ 0x1408DEAB0
 * Callers:
 *     RtlpInternEntryFind @ 0x1408DF320 (RtlpInternEntryFind.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

char __fastcall RtlpInternEntryMatch(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  size_t v5; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r9
  size_t v11; // r8
  size_t v12; // rbx
  const void *v13; // rcx

  v3 = *(_QWORD *)(a1 + 24);
  v5 = (unsigned __int16)v3;
  if ( *a2 != (unsigned __int16)v3 || a3 != (unsigned __int16)v3 + ((v3 >> 16) & 0x3FFFFFFF) )
    return 0;
  v7 = a2[2];
  v8 = 0LL;
  v9 = 0LL;
  while ( v8 < v7 )
  {
    v10 = a2[1];
    v11 = *(_QWORD *)(v9 + v10 + 16);
    v12 = *(_QWORD *)(v9 + v10 + 24)
        - ((*(_QWORD *)(v9 + v10 + 24) - 1LL) & (v5 + *(_QWORD *)(v9 + v10 + 24) - 1LL))
        - 1
        + v5;
    v13 = (const void *)(v12 + a1);
    v5 = v11 + v12;
    if ( memcmp(v13, *(const void **)(v9 + v10), v11) )
      return 0;
    ++v8;
    v9 += 32LL;
  }
  return 1;
}
