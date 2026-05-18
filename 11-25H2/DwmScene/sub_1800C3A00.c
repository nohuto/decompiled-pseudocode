/*
 * XREFs of sub_1800C3A00 @ 0x1800C3A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18007F624 @ 0x18007F624 (sub_18007F624.c)
 *     sub_1800BD710 @ 0x1800BD710 (sub_1800BD710.c)
 *     sub_1800C2EB0 @ 0x1800C2EB0 (sub_1800C2EB0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C3A00(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 *v6; // rax
  char v7; // bl
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax
  char v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h]
  __int64 v18; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+58h] [rbp-20h]
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(v20) = 0;
  if ( *a2 )
  {
    v6 = sub_18007F624(*a2, &v18, *(_DWORD *)(a1 + 88));
    v7 = 1;
    v8 = *v6;
  }
  else
  {
    v15 = 0LL;
    v6 = (__int64 *)&v14;
    v7 = 2;
    v8 = 0LL;
  }
  v16 = v8;
  v9 = v6[1];
  v17 = v9;
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v15 )
      sub_18001050C(v15);
  }
  if ( (v7 & 1) != 0 && v19 )
    sub_18001050C(v19);
  if ( v8 )
  {
    v10 = *sub_1800C2EB0(v8, &v20);
    sub_18000E854(&v20);
    v11 = *(_QWORD *)(*a2 + 112);
    if ( v11 )
      LODWORD(v11) = *(_DWORD *)(v11 + 20);
    v12 = (unsigned int)sub_1800BD710(v11, 0);
  }
  else
  {
    v10 = 0LL;
    v12 = 0LL;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 152LL))(
             *(_QWORD *)(a1 + 144),
             v10,
             v12,
             a3);
  if ( v9 )
    return sub_18001050C(v9);
  return result;
}
