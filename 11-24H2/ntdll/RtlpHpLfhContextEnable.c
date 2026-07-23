/*
 * XREFs of RtlpHpLfhContextEnable @ 0x18011B010
 * Callers:
 *     LdrpInitializeProcessHeap @ 0x18002385C (LdrpInitializeProcessHeap.c)
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpEnvTlsAlloc @ 0x1800B0DA8 (RtlpHpEnvTlsAlloc.c)
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
  if ( (RtlpHpLfhPerfFlags & 4) != 0 && (qword_1801CCEE8 & 4) != 0 )
    a1[18] |= 1u;
  v6 = *a2;
  LOWORD(v6) = *a2 - 15;
  a1[17] = v6;
  return result;
}
