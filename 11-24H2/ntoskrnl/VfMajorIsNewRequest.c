/*
 * XREFs of VfMajorIsNewRequest @ 0x140B94F34
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140B85FA0 (ViGenericVerifyIrpStackDownward.c)
 *     IovpCallDriver1 @ 0x140B8ECB4 (IovpCallDriver1.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VfMajorIsNewRequest(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *a2 > 0x1Bu )
    v4 = (*a2 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a2;
  if ( *((_QWORD *)&unk_140FFFC48 + 12 * v4) && (unsigned int)guard_dispatch_icall_no_overrides(a1, a2) )
    return 1LL;
  result = qword_1410006C8;
  if ( qword_1410006C8 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
