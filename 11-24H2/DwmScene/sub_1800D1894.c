/*
 * XREFs of sub_1800D1894 @ 0x1800D1894
 * Callers:
 *     sub_1800D12CC @ 0x1800D12CC (sub_1800D12CC.c)
 * Callees:
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 *     sub_1800D19C0 @ 0x1800D19C0 (sub_1800D19C0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D1894(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Spectre::Utils::Internal::SimpleCancellationToken::`vftable';
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 8));
  *(_DWORD *)(a1 + 40) = 0;
  result = sub_1800D19C0(a1 + 48);
  *(_BYTE *)(a1 + 64) = 0;
  return result;
}
