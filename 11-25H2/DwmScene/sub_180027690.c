/*
 * XREFs of sub_180027690 @ 0x180027690
 * Callers:
 *     sub_180027668 @ 0x180027668 (sub_180027668.c)
 *     sub_18005028C @ 0x18005028C (sub_18005028C.c)
 *     sub_180080D18 @ 0x180080D18 (sub_180080D18.c)
 *     sub_18008192C @ 0x18008192C (sub_18008192C.c)
 *     sub_180081D60 @ 0x180081D60 (sub_180081D60.c)
 *     sub_1800B7984 @ 0x1800B7984 (sub_1800B7984.c)
 *     sub_1800B7A1C @ 0x1800B7A1C (sub_1800B7A1C.c)
 *     sub_1800C9FF4 @ 0x1800C9FF4 (sub_1800C9FF4.c)
 * Callees:
 *     sub_1800276C4 @ 0x1800276C4 (sub_1800276C4.c)
 */

__int64 sub_180027690()
{
  __int64 v0; // r11
  __int64 result; // rax

  sub_1800276C4();
  result = v0;
  *(_QWORD *)v0 = &Spectre::Engine::DeviceResource::`vftable';
  *(_QWORD *)(v0 + 72) = 0LL;
  *(_QWORD *)(v0 + 80) = 0LL;
  *(_DWORD *)(v0 + 88) = -1;
  return result;
}
