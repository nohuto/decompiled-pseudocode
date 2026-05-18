/*
 * XREFs of sub_1800372BC @ 0x1800372BC
 * Callers:
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 *     sub_180096C0C @ 0x180096C0C (sub_180096C0C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_180025070 @ 0x180025070 (sub_180025070.c)
 *     sub_180025134 @ 0x180025134 (sub_180025134.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800372BC(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 && *(_DWORD *)(v3 + 8) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( *(_QWORD *)(a1 + 120) )
    {
      *a2 = *(_QWORD *)(a1 + 112);
      v4 = *(_QWORD *)(a1 + 120);
      a2[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    }
  }
  else
  {
    sub_180011B04(a1 + 72, &v8);
    if ( v8 && (unsigned int)sub_180025134(v8) )
    {
      v5 = sub_180025070(v8);
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 184LL))(v5);
      sub_180015174(a2, v6);
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    if ( v9 )
      sub_18001050C(v9);
  }
  return a2;
}
