/*
 * XREFs of sub_1800CD050 @ 0x1800CD050
 * Callers:
 *     sub_1800CCD74 @ 0x1800CCD74 (sub_1800CCD74.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CD050(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = *a3;
  *(_DWORD *)a2 = result;
  v5 = *a4;
  *(_QWORD *)(a2 + 8) = *a4;
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return result;
}
