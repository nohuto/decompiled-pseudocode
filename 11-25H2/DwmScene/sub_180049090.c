/*
 * XREFs of sub_180049090 @ 0x180049090
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_1800254DC @ 0x1800254DC (sub_1800254DC.c)
 *     sub_18003AE74 @ 0x18003AE74 (sub_18003AE74.c)
 *     sub_1800487D4 @ 0x1800487D4 (sub_1800487D4.c)
 *     sub_18005B9C0 @ 0x18005B9C0 (sub_18005B9C0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180049090(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r8
  char v6; // si
  __int64 v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rbx
  int v15; // edi
  __int64 v16; // rbp
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  __int64 v20; // [rsp+48h] [rbp-20h]

  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 104);
  v6 = 1;
  if ( 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v5) >> 3) )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD *)(v7 + v5);
      if ( v8 && *(_BYTE *)(v7 + v5 + 16) )
      {
        v9 = (_QWORD *)sub_1800254DC(v8, &v17);
        v10 = (_QWORD *)sub_18005B9C0(*v9, &v19);
        (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, __int64))(*(_QWORD *)*v10 + 40LL))(*v10, a1, v4, a2);
        if ( v20 )
          sub_18001050C(v20);
        if ( v18 )
          sub_18001050C(v18);
      }
      ++v4;
      v7 += 88LL;
      v5 = *(_QWORD *)(a1 + 104);
    }
    while ( v4 < 0x2E8BA2E8BA2E8BA3LL * ((*(_QWORD *)(a1 + 112) - v5) >> 3) );
  }
  result = sub_1800487D4(a1, (__int64)&v19);
  v12 = v19;
  if ( v19 )
  {
    sub_180011B04(a1 + 56, &v17);
    v13 = *(_QWORD *)(v12 + 160);
    v14 = v13 & 0x200;
    v15 = v13 & 0x100;
    v16 = v17;
    sub_18003AE74(v17, 8, v15 != 0);
    sub_18003AE74(v16, 9, v14 != 0);
    if ( !v14 && v15 )
      v6 = 0;
    result = sub_18003AE74(v16, 16, v6);
    if ( v18 )
      result = sub_18001050C(v18);
  }
  if ( v20 )
    return sub_18001050C(v20);
  return result;
}
