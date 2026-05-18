/*
 * XREFs of sub_1800D1734 @ 0x1800D1734
 * Callers:
 *     sub_1800D116C @ 0x1800D116C (sub_1800D116C.c)
 * Callees:
 *     sub_18001C148 @ 0x18001C148 (sub_18001C148.c)
 *     sub_1800D1860 @ 0x1800D1860 (sub_1800D1860.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D1734(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Spectre::Utils::Internal::SimpleCancellationToken::`vftable';
  sub_18001C148((struct _Mtx_internal_imp_t *)(a1 + 8));
  *(_DWORD *)(a1 + 40) = 0;
  result = sub_1800D1860(a1 + 48);
  *(_BYTE *)(a1 + 64) = 0;
  return result;
}
