/*
 * XREFs of sub_1800C3B90 @ 0x1800C3B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18000FFE4 @ 0x18000FFE4 (sub_18000FFE4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     sub_18004596C @ 0x18004596C (sub_18004596C.c)
 *     sub_1800521D8 @ 0x1800521D8 (sub_1800521D8.c)
 *     sub_1800521F8 @ 0x1800521F8 (sub_1800521F8.c)
 *     sub_18005224C @ 0x18005224C (sub_18005224C.c)
 *     sub_180052350 @ 0x180052350 (sub_180052350.c)
 *     sub_1800523E0 @ 0x1800523E0 (sub_1800523E0.c)
 *     sub_180052420 @ 0x180052420 (sub_180052420.c)
 *     sub_1800BB198 @ 0x1800BB198 (sub_1800BB198.c)
 *     sub_1800C210C @ 0x1800C210C (sub_1800C210C.c)
 *     sub_1800C2144 @ 0x1800C2144 (sub_1800C2144.c)
 *     sub_1800C2568 @ 0x1800C2568 (sub_1800C2568.c)
 *     sub_1800C304C @ 0x1800C304C (sub_1800C304C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800C3B90(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 *v5; // rax
  char v6; // di
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r12
  int v10; // edi
  int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  int v14; // r10d
  unsigned int v15; // r13d
  __int64 v16; // kr00_8
  size_t v17; // r11
  int v18; // eax
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // r9d
  int v23; // r10d
  size_t v24; // r11
  unsigned int v25; // ebx
  unsigned int v26; // edi
  int v27; // r14d
  unsigned int v28; // r9d
  unsigned int v30; // [rsp+48h] [rbp-69h]
  int v31; // [rsp+50h] [rbp-61h]
  unsigned int v32; // [rsp+54h] [rbp-5Dh]
  size_t v33; // [rsp+58h] [rbp-59h] BYREF
  __int64 v34; // [rsp+60h] [rbp-51h]
  __int64 v35; // [rsp+68h] [rbp-49h] BYREF
  __int64 v36; // [rsp+70h] [rbp-41h]
  __int64 v37; // [rsp+78h] [rbp-39h]
  __int128 v38; // [rsp+80h] [rbp-31h] BYREF
  __int64 v39; // [rsp+90h] [rbp-21h] BYREF
  __int64 v40; // [rsp+98h] [rbp-19h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-11h]
  __int64 v42; // [rsp+A8h] [rbp-9h]
  __int64 v43; // [rsp+B0h] [rbp-1h]
  __int64 v44; // [rsp+B8h] [rbp+7h]

  v4 = a1;
  if ( *a2 )
  {
    v5 = sub_1800521F8(*a2, &v33, *(_DWORD *)(a1 + 88));
    v6 = 1;
    v7 = *v5;
  }
  else
  {
    v36 = 0LL;
    v5 = &v35;
    v6 = 2;
    v7 = 0LL;
  }
  v43 = v7;
  v8 = v5[1];
  v42 = v8;
  v44 = v8;
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    if ( v36 )
      sub_18001050C(v36);
  }
  if ( (v6 & 1) != 0 && v34 )
    sub_18001050C(v34);
  if ( (unsigned int)sub_1800523E0(v7) == 1 )
  {
    v9 = *sub_1800C2144(v7, &v39);
    v37 = v9;
    sub_18000E854(&v39);
  }
  else
  {
    v9 = *sub_1800C210C(v7, &v40);
    v37 = v9;
    sub_18000E854(&v40);
  }
  v38 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int128 *))(**(_QWORD **)(v4 + 144) + 112LL))(
          *(_QWORD *)(v4 + 144),
          v9,
          0LL,
          1LL,
          0,
          &v38);
  sub_180011B04(v4 + 72, &v33);
  sub_1800C2568(&v35, &v33);
  if ( v34 )
    sub_18001050C(v34);
  sub_1800BB198(v35, v10);
  if ( v10 < 0 )
  {
    sub_18001C99C(&stru_1801B8548, 3);
    if ( v36 )
      sub_18001050C(v36);
    if ( v8 )
      sub_18001050C(v8);
    return 0;
  }
  else
  {
    v11 = sub_18005224C(v7);
    sub_18004596C(v11);
    v12 = sub_18005224C(v7);
    sub_1800C304C(v12);
    v13 = sub_180052420(v7);
    v15 = v14 * v13;
    v31 = v14 * v13 * sub_180052350(v7);
    v16 = *((_QWORD *)&v38 + 1);
    v17 = v15;
    if ( DWORD2(v38) <= v15 )
      v17 = DWORD2(v38);
    v33 = v17;
    v41 = v38;
    v18 = sub_180052350(v7);
    v30 = (v19 + v18 - 1) / v19;
    v20 = sub_1800521D8(v7);
    v32 = v20;
    v25 = 0;
    if ( v20 )
    {
      do
      {
        v26 = 0;
        if ( v21 )
        {
          v27 = v22 * v25;
          do
          {
            v28 = v27 + v15 * v26;
            if ( v28 >= a4 )
              break;
            sub_18000FFE4((void *)(a3 + v28), v15, (const void *)(v41 + (_DWORD)v16 * v26++ + v23 * v25), v24);
            v21 = v30;
            v23 = HIDWORD(v16);
            v24 = v33;
          }
          while ( v26 < v30 );
          v22 = v31;
          v20 = v32;
        }
        ++v25;
      }
      while ( v25 < v20 );
      v8 = v42;
      v4 = a1;
      v9 = v37;
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 144) + 120LL))(*(_QWORD *)(v4 + 144), v9, 0LL);
    if ( v36 )
      sub_18001050C(v36);
    if ( v8 )
      sub_18001050C(v8);
    return 1;
  }
}
