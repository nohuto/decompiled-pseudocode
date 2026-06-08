/*
 * XREFs of sub_14000D9F8 @ 0x14000D9F8
 * Callers:
 *     sub_140029E40 @ 0x140029E40 (sub_140029E40.c)
 *     sub_14003DC50 @ 0x14003DC50 (sub_14003DC50.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 sub_14000D9F8(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(off_140018050->Timer) & 2) != 0 && BYTE1(off_140018050->Timer) >= 5u )
    qword_140018EE0(off_140018050->AttachedDevice, 43LL, &unk_140012AE0, a4, va, 8LL, 0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 5LL, 2LL, &unk_140012AE0, v8, va, 8LL, 0LL);
}
