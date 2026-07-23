/*
 * XREFs of VfMajorVerifyNewRequest @ 0x140B953EC
 * Callers:
 *     IovpCallDriver1 @ 0x140B8ECB4 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorVerifyNewRequest(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v6; // rax
  __int64 result; // rax

  if ( *a4 > 0x1Bu )
    v6 = (*a4 != 0xFF) + 28LL;
  else
    v6 = (unsigned __int8)*a4;
  if ( *((_QWORD *)&unk_140FFFC18 + 12 * v6) )
    guard_dispatch_icall_no_overrides(a1, a2);
  result = qword_141000698;
  if ( qword_141000698 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
