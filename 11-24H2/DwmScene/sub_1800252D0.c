/*
 * XREFs of sub_1800252D0 @ 0x1800252D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180023590 @ 0x180023590 (sub_180023590.c)
 *     sub_180023C3C @ 0x180023C3C (sub_180023C3C.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800252D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v14[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h]
  unsigned int v16; // [rsp+80h] [rbp+40h] BYREF

  v16 = a3;
  v5 = a1 + 8;
  v15 = a1 + 8;
  sub_18002811C(a1 + 8);
  v6 = sub_180023C3C((__int64 *)(a1 + 24), (__int64)v14, &v16);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)(*(_QWORD *)v6 + 48LL);
  if ( *(_QWORD *)(*(_QWORD *)v6 + 40LL) == v8 )
  {
    sub_180023590(*(_QWORD *)(a1 + 16), v14);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14[0] + 40LL))(
           v14[0],
           *(_QWORD *)(a1 + 16),
           v16) )
    {
      *(_OWORD *)a2 = *(_OWORD *)v14;
      *(_OWORD *)v14 = 0LL;
      sub_1800282BC(v5);
    }
    else
    {
      if ( v14[1] )
        sub_18001060C(v14[1]);
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      sub_1800282BC(v5);
    }
  }
  else
  {
    v9 = *(_QWORD *)(v8 - 8);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v5 = v15;
    }
    v10 = *(_QWORD *)(v8 - 16);
    v11 = *(_QWORD *)(v8 - 8);
    v12 = *(_QWORD *)(*(_QWORD *)(v7 + 48) - 8LL);
    if ( v12 )
      sub_18001060C(v12);
    *(_QWORD *)(v7 + 48) -= 16LL;
    *(_QWORD *)a2 = v10;
    *(_QWORD *)(a2 + 8) = v11;
    sub_1800282BC(v5);
  }
  return a2;
}
