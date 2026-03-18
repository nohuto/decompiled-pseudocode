/*
 * XREFs of VfMajorVerifyNewIrp @ 0x140B9333C
 * Callers:
 *     IovpCallDriver1 @ 0x140B8CCB4 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorVerifyNewIrp(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 result; // rax

  if ( *a3 > 0x1Bu )
    v8 = (*a3 != 0xFF) + 28LL;
  else
    v8 = (unsigned __int8)*a3;
  if ( *((_QWORD *)&unk_140FFEC50 + 12 * v8) )
    guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  result = qword_140FFF6D0;
  if ( qword_140FFF6D0 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  return result;
}
