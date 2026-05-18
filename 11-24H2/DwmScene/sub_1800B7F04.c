/*
 * XREFs of sub_1800B7F04 @ 0x1800B7F04
 * Callers:
 *     sub_1800BBF50 @ 0x1800BBF50 (sub_1800BBF50.c)
 * Callees:
 *     sub_180081A8C @ 0x180081A8C (sub_180081A8C.c)
 */

__int64 __fastcall sub_1800B7F04(_QWORD *a1)
{
  __int64 result; // rax

  sub_180081A8C(a1);
  *a1 = &Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  result = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  return result;
}
