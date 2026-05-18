/*
 * XREFs of sub_18001EA8C @ 0x18001EA8C
 * Callers:
 *     sub_18001EFD0 @ 0x18001EFD0 (sub_18001EFD0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18001EA8C(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
  v3 = a1[5];
  if ( v3 )
    result = sub_18001050C(v3);
  v4 = a1[3];
  if ( v4 )
    result = sub_18001050C(v4);
  v5 = a1[1];
  if ( v5 )
    return sub_18001050C(v5);
  return result;
}
