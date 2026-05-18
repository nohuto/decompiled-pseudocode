/*
 * XREFs of sub_180025170 @ 0x180025170
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180023430 @ 0x180023430 (sub_180023430.c)
 *     sub_180023ADC @ 0x180023ADC (sub_180023ADC.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180025170(__int64 a1, __int64 a2, unsigned int a3)
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
  sub_180027FBC(a1 + 8);
  v6 = sub_180023ADC((__int64 *)(a1 + 24), (__int64)v14, &v16);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)(*(_QWORD *)v6 + 48LL);
  if ( *(_QWORD *)(*(_QWORD *)v6 + 40LL) == v8 )
  {
    sub_180023430(*(_QWORD *)(a1 + 16), v14);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14[0] + 40LL))(
           v14[0],
           *(_QWORD *)(a1 + 16),
           v16) )
    {
      *(_OWORD *)a2 = *(_OWORD *)v14;
      *(_OWORD *)v14 = 0LL;
      sub_18002815C(v5);
    }
    else
    {
      if ( v14[1] )
        sub_18001050C(v14[1]);
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      sub_18002815C(v5);
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
      sub_18001050C(v12);
    *(_QWORD *)(v7 + 48) -= 16LL;
    *(_QWORD *)a2 = v10;
    *(_QWORD *)(a2 + 8) = v11;
    sub_18002815C(v5);
  }
  return a2;
}
