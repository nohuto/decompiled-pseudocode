/*
 * XREFs of RtlNewSecurityObject @ 0x18010DF90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 */

__int64 __fastcall RtlNewSecurityObject(__int64 a1, _OWORD *a2, _QWORD *a3, unsigned __int8 a4, void *a5, _DWORD *a6)
{
  return RtlpNewSecurityObject(a1, a2, a3, 0LL, 0, a4, 0, a5, a6);
}
