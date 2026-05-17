/*
 * XREFs of RtlNewSecurityObject @ 0x180110A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x180061400 (RtlpNewSecurityObject.c)
 */

__int64 __fastcall RtlNewSecurityObject(__int64 a1, _OWORD *a2, _QWORD *a3, unsigned __int8 a4, __int64 a5, __int64 a6)
{
  return RtlpNewSecurityObject(a1, a2, a3, 0LL, 0, a4, 0, a5, a6);
}
