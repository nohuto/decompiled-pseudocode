/*
 * XREFs of sub_14000CDDC @ 0x14000CDDC
 * Callers:
 *     sub_140034388 @ 0x140034388 (sub_140034388.c)
 *     sub_140034938 @ 0x140034938 (sub_140034938.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 sub_14000CDDC(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(off_140018050->Timer) & 2) != 0 && BYTE1(off_140018050->Timer) >= 5u )
    qword_140018EE0(off_140018050->AttachedDevice, 43LL, &unk_140012FE8, a4, va, 8LL, 0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 5LL, 2LL, &unk_140012FE8, v8, va, 8LL, 0LL);
}
