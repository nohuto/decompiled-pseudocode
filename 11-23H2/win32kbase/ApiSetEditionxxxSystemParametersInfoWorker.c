/*
 * XREFs of ApiSetEditionxxxSystemParametersInfoWorker @ 0x1C00954E4
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0094FF0 (xxxSystemParametersInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionxxxSystemParametersInfoWorker(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( qword_1C0295CE8 && (int)qword_1C0295CE8() >= 0 && qword_1C0295CF0 )
    return (unsigned int)qword_1C0295CF0(a1, a2, a3, a4);
  return v4;
}
