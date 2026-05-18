/*
 * XREFs of sub_18003055C @ 0x18003055C
 * Callers:
 *     sub_18003001C @ 0x18003001C (sub_18003001C.c)
 *     sub_180035094 @ 0x180035094 (sub_180035094.c)
 *     sub_180052DEC @ 0x180052DEC (sub_180052DEC.c)
 *     sub_1800532B0 @ 0x1800532B0 (sub_1800532B0.c)
 *     sub_1800D6C87 @ 0x1800D6C87 (sub_1800D6C87.c)
 *     sub_1800D6F8A @ 0x1800D6F8A (sub_1800D6F8A.c)
 *     sub_1800D8E2F @ 0x1800D8E2F (sub_1800D8E2F.c)
 *     sub_1800D8EEB @ 0x1800D8EEB (sub_1800D8EEB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003055C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) )
  {
    result = o_abort();
    __debugbreak();
  }
  return result;
}
