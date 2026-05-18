/*
 * XREFs of sub_1800277F0 @ 0x1800277F0
 * Callers:
 *     sub_1800277C8 @ 0x1800277C8 (sub_1800277C8.c)
 *     sub_1800503EC @ 0x1800503EC (sub_1800503EC.c)
 *     sub_180080E78 @ 0x180080E78 (sub_180080E78.c)
 *     sub_180081A8C @ 0x180081A8C (sub_180081A8C.c)
 *     sub_180081EC0 @ 0x180081EC0 (sub_180081EC0.c)
 *     sub_1800B7AE4 @ 0x1800B7AE4 (sub_1800B7AE4.c)
 *     sub_1800B7B7C @ 0x1800B7B7C (sub_1800B7B7C.c)
 *     sub_1800CA154 @ 0x1800CA154 (sub_1800CA154.c)
 * Callees:
 *     sub_180027824 @ 0x180027824 (sub_180027824.c)
 */

__int64 sub_1800277F0()
{
  __int64 v0; // r11
  __int64 result; // rax

  sub_180027824();
  result = v0;
  *(_QWORD *)v0 = &Spectre::Engine::DeviceResource::`vftable';
  *(_QWORD *)(v0 + 72) = 0LL;
  *(_QWORD *)(v0 + 80) = 0LL;
  *(_DWORD *)(v0 + 88) = -1;
  return result;
}
