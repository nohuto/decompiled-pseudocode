/*
 * XREFs of sub_180012800 @ 0x180012800
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180012800(__int64 a1, float a2)
{
  float v3; // xmm6_4

  v3 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(qword_1801C3438 + 80) + 280LL))(*(_QWORD *)(qword_1801C3438 + 80)) )
    v3 = a2 * 3.1415927;
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
    *(float *)(*(_QWORD *)(a1 + 32) + 104LL) = v3;
  else
    *(float *)(a1 + 68) = v3;
  return 0LL;
}
