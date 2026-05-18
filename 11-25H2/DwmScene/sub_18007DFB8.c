/*
 * XREFs of sub_18007DFB8 @ 0x18007DFB8
 * Callers:
 *     sub_18005B618 @ 0x18005B618 (sub_18005B618.c)
 * Callees:
 *     sub_180050B40 @ 0x180050B40 (sub_180050B40.c)
 *     sub_18007F0D0 @ 0x18007F0D0 (sub_18007F0D0.c)
 *     sub_180082470 @ 0x180082470 (sub_180082470.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18007DFB8(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  if ( a1[6] )
    ((void (*)(void))sub_18007F0D0)();
  v4 = a1[8];
  if ( v4 )
    sub_18007F0D0(v4, a2);
  v5 = a1[10];
  if ( v5 )
    sub_18007F0D0(v5, a2);
  v6 = a1[12];
  if ( v6 )
    sub_18007F0D0(v6, a2);
  v7 = a1[22];
  if ( v7 )
    sub_180082470(v7, a2);
  v11 = a2;
  result = sub_180050B40(a1 + 60, &v11);
  v9 = a1 + 48;
  v10 = a1 + 60;
  while ( v9 != v10 )
  {
    if ( *v9 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(*v9, a2);
    v9 += 2;
  }
  return result;
}
