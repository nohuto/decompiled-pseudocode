/*
 * XREFs of sub_18007BAD0 @ 0x18007BAD0
 * Callers:
 *     sub_1800415F0 @ 0x1800415F0 (sub_1800415F0.c)
 *     sub_1800485D0 @ 0x1800485D0 (sub_1800485D0.c)
 *     sub_18005B618 @ 0x18005B618 (sub_18005B618.c)
 * Callees:
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     sub_18007CB98 @ 0x18007CB98 (sub_18007CB98.c)
 */

__int64 __fastcall sub_18007BAD0(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 )
  {
    v6 = a2;
    sub_1800273D0((__int64 *)(v4 + 112), &v6);
  }
  v6 = a2;
  return sub_18007CB98(a1 + 88, &v6);
}
