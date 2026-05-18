/*
 * XREFs of sub_1800C2E00 @ 0x1800C2E00
 * Callers:
 *     sub_1800C27B8 @ 0x1800C27B8 (sub_1800C27B8.c)
 * Callees:
 *     sub_1800C3244 @ 0x1800C3244 (sub_1800C3244.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800C2E00(__int64 a1, char a2)
{
  __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 880LL))(*(_QWORD *)(a1 + 144));
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 888LL))(*(_QWORD *)(a1 + 144));
  if ( a2 )
    return sub_1800C3244(a1);
  return result;
}
