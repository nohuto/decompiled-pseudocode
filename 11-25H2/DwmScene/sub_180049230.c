/*
 * XREFs of sub_180049230 @ 0x180049230
 * Callers:
 *     sub_18008CD40 @ 0x18008CD40 (sub_18008CD40.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18001B424 @ 0x18001B424 (sub_18001B424.c)
 *     sub_18001B448 @ 0x18001B448 (sub_18001B448.c)
 *     sub_18001B4B0 @ 0x18001B4B0 (sub_18001B4B0.c)
 *     sub_1800254DC @ 0x1800254DC (sub_1800254DC.c)
 *     sub_1800305B8 @ 0x1800305B8 (sub_1800305B8.c)
 *     sub_180036994 @ 0x180036994 (sub_180036994.c)
 *     sub_1800372BC @ 0x1800372BC (sub_1800372BC.c)
 *     sub_1800374FC @ 0x1800374FC (sub_1800374FC.c)
 *     sub_180039BD8 @ 0x180039BD8 (sub_180039BD8.c)
 *     sub_18003A280 @ 0x18003A280 (sub_18003A280.c)
 *     sub_18003C158 @ 0x18003C158 (sub_18003C158.c)
 *     sub_180040728 @ 0x180040728 (sub_180040728.c)
 *     sub_18004126C @ 0x18004126C (sub_18004126C.c)
 *     sub_180041718 @ 0x180041718 (sub_180041718.c)
 *     sub_180045C7C @ 0x180045C7C (sub_180045C7C.c)
 *     sub_1800487F8 @ 0x1800487F8 (sub_1800487F8.c)
 *     sub_1800489BC @ 0x1800489BC (sub_1800489BC.c)
 *     sub_180049670 @ 0x180049670 (sub_180049670.c)
 *     sub_18005B9C0 @ 0x18005B9C0 (sub_18005B9C0.c)
 *     sub_18007B39C @ 0x18007B39C (sub_18007B39C.c)
 *     sub_180095BEC @ 0x180095BEC (sub_180095BEC.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_180049230(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  int v8; // ecx
  _QWORD *v9; // rax
  __int64 v10; // r15
  __int64 *v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rax
  double *v18; // rax
  char v19; // r13
  unsigned __int64 v20; // r14
  __int64 v21; // r15
  __int64 (__fastcall ***v22)(_QWORD); // rbx
  __int64 v23; // r13
  _QWORD *v24; // rax
  __int64 v25; // r12
  __int64 v26; // rcx
  unsigned int v27; // ebx
  char v28; // dl
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 result; // rax
  char v34; // [rsp+30h] [rbp-D0h]
  __int64 (__fastcall ***v35)(_QWORD); // [rsp+38h] [rbp-C8h] BYREF
  volatile signed __int32 *v36; // [rsp+40h] [rbp-C0h]
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h]
  __int128 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h]
  unsigned int v45; // [rsp+90h] [rbp-70h]
  __m128i v46[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47[4]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v48[4]; // [rsp+E0h] [rbp-20h] BYREF

  v5 = a3;
  v41 = a3;
  v8 = *(_DWORD *)(*(_QWORD *)a4 + 440LL);
  if ( (v8 & 0x10000) != 0 && (v8 & 0x800000) != 0 )
    sub_180049670(a1);
  v42 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x4000000) != 0 )
  {
    v9 = sub_1800372BC(*a2, &v35);
    sub_180036994((__int64)v9, &v37);
    if ( v36 )
      sub_180010544(v36);
    v10 = v37;
    if ( v37 )
    {
      v11 = sub_180040728(a1, &v39);
      v12 = sub_180039BD8(*v11, (__int64)v48);
      v13 = sub_18001B4B0(v47, *(_QWORD *)a4 + 24LL, (__int64)"_");
      v14 = sub_18001B424((__int64)v46, (__int64)v13, v12);
      v15 = sub_18001B448((__int64)&v43, v14, (__int64)"_Render");
      v16 = (__int64 *)sub_180095BEC(v10, &v35, v15, a2);
      sub_1800305B8(&v42, v16);
      if ( v36 )
        sub_180010544(v36);
      sub_180011A5C((__int64)&v43);
      sub_180011A5C((__int64)v46);
      sub_180011A5C((__int64)v47);
      sub_180011A5C((__int64)v48);
      if ( v40 )
        sub_18001050C(v40);
    }
    if ( v38 )
      sub_18001050C(v38);
  }
  v17 = sub_180040728(a1, &v39);
  v18 = (double *)sub_18003A280(*v17, v48);
  sub_18003C158(*v18, v18[2], v18[4], v18[6]);
  v19 = (unsigned int)o__fdsign() != 0;
  v34 = v19;
  if ( v40 )
    sub_18001050C(v40);
  v20 = 0LL;
  if ( 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3) )
  {
    v21 = 0LL;
    do
    {
      if ( sub_1800489BC(a1, v20) && (v20 >= 0x20 || ((1 << v20) & dword_1801C2BC8) != 0) )
      {
        sub_1800487F8(a1, &v35, v20);
        v22 = v35;
        if ( v35 )
        {
          sub_18004126C((__int64)v35, (__int64)&v43, v5, a2, v19);
          v23 = v43;
          if ( !sub_180041718(v43 + 128) )
          {
            sub_1800254DC((__int64)v22, &v37);
            if ( v37 )
            {
              v24 = (_QWORD *)sub_18005B9C0(v37, &v39);
              (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)*v24 + 48LL))(*v24, a1, v20);
              if ( v40 )
                sub_18001050C(v40);
              v25 = *(_QWORD *)(a1 + 104);
              v26 = *(_QWORD *)(v21 + v25 + 24);
              v27 = v45;
              if ( v26 )
                sub_18007B39C(v26, a2, v45);
              v28 = *(_BYTE *)(a1 + 168);
              v29 = *(_QWORD *)(*a2 + 96);
              if ( v28 != *(_BYTE *)(v29 + 14532) )
              {
                *(_BYTE *)(v29 + 14532) = v28;
                *(_BYTE *)(v29 + 14533) = 1;
              }
              v46[0] = *(__m128i *)(a1 + 172);
              sub_1800374FC(*a2, v46);
              v30 = *(_QWORD *)(v21 + v25 + 40);
              if ( v30 )
                sub_18007B39C(v30, a2, v27);
              v31 = *(_QWORD *)(v21 + v25 + 56);
              if ( v31 )
                sub_18007B39C(v31, a2, v27);
              v32 = *(_QWORD *)(v21 + v25 + 72);
              if ( v32 )
                sub_18007B39C(v32, a2, v27);
              sub_180045C7C(*(_QWORD *)(a1 + 88), a2, *(_QWORD *)(v23 + 136));
              v5 = v41;
            }
            if ( v38 )
              sub_18001050C(v38);
          }
          if ( v44 )
            sub_18001050C(v44);
          v19 = v34;
        }
        if ( v36 )
          sub_18001050C((__int64)v36);
      }
      ++v20;
      v21 += 88LL;
    }
    while ( v20 < 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3) );
  }
  result = (__int64)sub_180036994((__int64)&v42, &v35);
  if ( v35 )
    result = (**v35)(v35);
  if ( v36 )
    result = sub_18001050C((__int64)v36);
  if ( *((_QWORD *)&v42 + 1) )
    return sub_180010544(*((volatile signed __int32 **)&v42 + 1));
  return result;
}
