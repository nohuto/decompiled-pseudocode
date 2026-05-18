/*
 * XREFs of sub_18007E118 @ 0x18007E118
 * Callers:
 *     sub_18005B778 @ 0x18005B778 (sub_18005B778.c)
 * Callees:
 *     sub_180050CA0 @ 0x180050CA0 (sub_180050CA0.c)
 *     sub_18007F230 @ 0x18007F230 (sub_18007F230.c)
 *     sub_1800825D0 @ 0x1800825D0 (sub_1800825D0.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18007E118(_QWORD *a1, unsigned int a2)
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
    ((void (*)(void))sub_18007F230)();
  v4 = a1[8];
  if ( v4 )
    sub_18007F230(v4, a2);
  v5 = a1[10];
  if ( v5 )
    sub_18007F230(v5, a2);
  v6 = a1[12];
  if ( v6 )
    sub_18007F230(v6, a2);
  v7 = a1[22];
  if ( v7 )
    sub_1800825D0(v7, a2);
  v11 = a2;
  result = sub_180050CA0(a1 + 60, &v11);
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
