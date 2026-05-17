/*
 * XREFs of RtlNewSecurityObjectWithMultipleInheritance @ 0x18010B170
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 */

__int64 __fastcall RtlNewSecurityObjectWithMultipleInheritance(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        unsigned int a7,
        void *a8,
        _DWORD *a9)
{
  return RtlpNewSecurityObject(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
