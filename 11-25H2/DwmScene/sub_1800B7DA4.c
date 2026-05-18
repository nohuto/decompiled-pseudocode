/*
 * XREFs of sub_1800B7DA4 @ 0x1800B7DA4
 * Callers:
 *     sub_1800BBDF0 @ 0x1800BBDF0 (sub_1800BBDF0.c)
 * Callees:
 *     sub_18008192C @ 0x18008192C (sub_18008192C.c)
 */

__int64 __fastcall sub_1800B7DA4(_QWORD *a1)
{
  __int64 result; // rax

  sub_18008192C(a1);
  *a1 = &Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  result = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  return result;
}
