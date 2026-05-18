/*
 * XREFs of sub_18003741C @ 0x18003741C
 * Callers:
 *     sub_180049390 @ 0x180049390 (sub_180049390.c)
 *     sub_180096D6C @ 0x180096D6C (sub_180096D6C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_1800251D0 @ 0x1800251D0 (sub_1800251D0.c)
 *     sub_180025294 @ 0x180025294 (sub_180025294.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003741C(__int64 a1, _QWORD *a2)
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
    sub_180011C04(a1 + 72, &v8);
    if ( v8 && (unsigned int)sub_180025294(v8) )
    {
      v5 = sub_1800251D0(v8);
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 184LL))(v5);
      sub_180015274(a2, v6);
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    if ( v9 )
      sub_18001060C(v9);
  }
  return a2;
}
