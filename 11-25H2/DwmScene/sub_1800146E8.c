/*
 * XREFs of sub_1800146E8 @ 0x1800146E8
 * Callers:
 *     sub_180014644 @ 0x180014644 (sub_180014644.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800146E8(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreNode::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1800EB4F8;
  if ( qword_1801C3430 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801C3430 + 8LL))(qword_1801C3430);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = off_1800EB558;
  *(_QWORD *)(a1 + 16) = off_1800EB610;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return a1;
}
