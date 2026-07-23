/*
 * XREFs of VfMajorVerifyNewIrp @ 0x140B9533C
 * Callers:
 *     IovpCallDriver1 @ 0x140B8ECB4 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorVerifyNewIrp(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 result; // rax

  if ( *a3 > 0x1Bu )
    v5 = (*a3 != 0xFF) + 28LL;
  else
    v5 = (unsigned __int8)*a3;
  if ( *((_QWORD *)&unk_140FFFC50 + 12 * v5) )
    guard_dispatch_icall_no_overrides(a1, a2);
  result = qword_1410006D0;
  if ( qword_1410006D0 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
