/*
 * XREFs of sub_1800870BC @ 0x1800870BC
 * Callers:
 *     sub_1800871D0 @ 0x1800871D0 (sub_1800871D0.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180087908 @ 0x180087908 (sub_180087908.c)
 */

_QWORD *__fastcall sub_1800870BC(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = sub_18001B1F8(24LL);
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
  sub_180087908(&v6);
  return a1;
}
