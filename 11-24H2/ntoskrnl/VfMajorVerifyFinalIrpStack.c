/*
 * XREFs of VfMajorVerifyFinalIrpStack @ 0x140B93134
 * Callers:
 *     IovpCompleteRequest2 @ 0x140BA6DE4 (IovpCompleteRequest2.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorVerifyFinalIrpStack(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v7; // rax
  __int64 result; // rax

  v4 = *a2;
  if ( (unsigned __int8)v4 > 0x1Bu )
    v7 = ((_BYTE)v4 != 0xFF) + 28LL;
  else
    v7 = *a2;
  if ( *((_QWORD *)&unk_140FFEC58 + 12 * v7) )
    guard_dispatch_icall_no_overrides(a1, a2, v4, a4);
  result = qword_140FFF6D8;
  if ( qword_140FFF6D8 )
    return guard_dispatch_icall_no_overrides(a1, a2, v4, a4);
  return result;
}
