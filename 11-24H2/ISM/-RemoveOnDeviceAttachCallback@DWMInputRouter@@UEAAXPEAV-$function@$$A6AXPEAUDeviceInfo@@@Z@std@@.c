/*
 * XREFs of ?RemoveOnDeviceAttachCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x18019F850
 * Callers:
 *     <none>
 * Callees:
 *     __std_find_trivial_8 @ 0x18009E750 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

void *__fastcall DWMInputRouter::RemoveOnDeviceAttachCallback(__int64 a1, unsigned __int64 a2)
{
  __m128i *trivial_8; // rax
  void *result; // rax

  trivial_8 = (__m128i *)_std_find_trivial_8(*(const __m128i **)(a1 + 464), *(const __m128i **)(a1 + 472), a2);
  result = memmove_0(trivial_8, &trivial_8->m128i_u64[1], *(_QWORD *)(a1 + 472) - (_QWORD)&trivial_8->m128i_i64[1]);
  *(_QWORD *)(a1 + 472) -= 8LL;
  return result;
}
