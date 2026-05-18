/*
 * XREFs of sub_180076E8C @ 0x180076E8C
 * Callers:
 *     sub_180062584 @ 0x180062584 (sub_180062584.c)
 *     sub_180076F14 @ 0x180076F14 (sub_180076F14.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180076E8C(float a1, float a2, float a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = a5;
  *(float *)(a4 + 4) = -a1;
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 12) = 0;
  *(float *)(a4 + 8) = -(float)(a1 + a2);
  *(_DWORD *)(a5 + 12) = 0;
  *(float *)(a5 + 4) = 1.0 / a2;
  *(float *)a5 = 1.0 / a1;
  *(float *)(a5 + 8) = 1.0 / a3;
  return result;
}
