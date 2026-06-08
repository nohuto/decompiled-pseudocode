/*
 * XREFs of sub_140004388 @ 0x140004388
 * Callers:
 *     sub_140027008 @ 0x140027008 (sub_140027008.c)
 *     sub_1400287E4 @ 0x1400287E4 (sub_1400287E4.c)
 *     sub_14002E36C @ 0x14002E36C (sub_14002E36C.c)
 *     sub_140039E1C @ 0x140039E1C (sub_140039E1C.c)
 *     sub_14003A750 @ 0x14003A750 (sub_14003A750.c)
 *     sub_14003B4B4 @ 0x14003B4B4 (sub_14003B4B4.c)
 *     sub_140045018 @ 0x140045018 (sub_140045018.c)
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 sub_140004388(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  unsigned int v9; // edi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&off_140018050->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&off_140018050->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))qword_140018EE0)(
      *((_QWORD *)&off_140018050->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, (__int64 *)va, 4LL, va1);
}
