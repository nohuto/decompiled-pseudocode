/*
 * XREFs of RtlpHpLfhContextUpdateConfig @ 0x140603FAC
 * Callers:
 *     RtlpHpLfhContextEnable @ 0x140603BBC (RtlpHpLfhContextEnable.c)
 *     ExpPrivatePoolCreate @ 0x1407C63A0 (ExpPrivatePoolCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhContextUpdateConfig(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+18h] [rbp+18h]

  if ( (RtlpHpLfhPerfFlags & 4) != 0 && (qword_140E28368 & 4) != 0 )
    *(_DWORD *)(a1 + 72) |= 1u;
  v3 = *a2;
  LOWORD(v3) = *a2 - 15;
  result = v3;
  *(_DWORD *)(a1 + 68) = v3;
  return result;
}
