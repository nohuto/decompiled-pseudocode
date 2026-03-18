/*
 * XREFs of VfMajorVerifyIrpStackUpward @ 0x140B93280
 * Callers:
 *     IovpCompleteRequest2 @ 0x140BA6DE4 (IovpCompleteRequest2.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorVerifyIrpStackUpward(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 result; // rax

  if ( *a2 > 0x1Bu )
    v6 = (*a2 != 0xFF) + 28LL;
  else
    v6 = (unsigned __int8)*a2;
  if ( *((_QWORD *)&unk_140FFEC28 + 12 * v6) )
    guard_dispatch_icall_no_overrides(a1, a2, *(_QWORD *)(a3 + 8), a3);
  result = qword_140FFF6A8;
  if ( qword_140FFF6A8 )
    return guard_dispatch_icall_no_overrides(a1, a2, *(_QWORD *)(a3 + 8), a3);
  return result;
}
