/*
 * XREFs of sub_180086F5C @ 0x180086F5C
 * Callers:
 *     sub_180087070 @ 0x180087070 (sub_180087070.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_1800877A8 @ 0x1800877A8 (sub_1800877A8.c)
 */

_QWORD *__fastcall sub_180086F5C(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = sub_18001B098(24LL);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 16) = a2;
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Utils::Tweening::Tween>::`vftable';
  }
  v6 = 0LL;
  *a1 = a2;
  a1[1] = v4;
  sub_1800877A8(&v6);
  return a1;
}
