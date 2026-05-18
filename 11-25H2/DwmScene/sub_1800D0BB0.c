/*
 * XREFs of sub_1800D0BB0 @ 0x1800D0BB0
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800D0BB0(__int64 *a1, __int64 a2, float *a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  double v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = 0.0;
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, double *))(v3 + 120))(a1, a2, &v6);
  if ( !(_DWORD)result )
    *a3 = v6;
  return result;
}
