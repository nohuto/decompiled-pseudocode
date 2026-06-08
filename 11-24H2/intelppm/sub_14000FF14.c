/*
 * XREFs of sub_14000FF14 @ 0x14000FF14
 * Callers:
 *     sub_14000FC60 @ 0x14000FC60 (sub_14000FC60.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 sub_14000FF14(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(off_140018050->Timer) & 2) != 0 && BYTE1(off_140018050->Timer) >= 4u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))qword_140018EE0)(
      off_140018050->AttachedDevice,
      43LL,
      &unk_140014CD8,
      15LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 15;
  return WppAutoLogTrace(a1, 4LL, 2LL, &unk_140014CD8, v7, (__int64 *)va, 4LL, va1);
}
