/*
 * XREFs of RtlpHpLfhContextEnable @ 0x18011CDD8
 * Callers:
 *     LdrpInitializeProcessHeap @ 0x1800A5FB8 (LdrpInitializeProcessHeap.c)
 *     RtlpHpHeapCreate @ 0x1800A6374 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpEnvTlsAlloc @ 0x1800B9008 (RtlpHpEnvTlsAlloc.c)
 */

__int64 __fastcall RtlpHpLfhContextEnable(_DWORD *a1, int *a2)
{
  int v4; // ecx
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+18h]

  v4 = RtlpHpEnvTlsAlloc((__int64)a1, (__int64)a1);
  result = 0LL;
  if ( !v4 )
    return 3221225626LL;
  a1[19] = v4;
  if ( (RtlpHpLfhPerfFlags & 4) != 0 && (qword_1801CDEE8 & 4) != 0 )
    a1[18] |= 1u;
  v6 = *a2;
  LOWORD(v6) = *a2 - 15;
  a1[17] = v6;
  return result;
}
