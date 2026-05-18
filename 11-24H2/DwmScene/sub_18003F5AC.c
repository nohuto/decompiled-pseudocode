/*
 * XREFs of sub_18003F5AC @ 0x18003F5AC
 * Callers:
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180013228 @ 0x180013228 (sub_180013228.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 *     sub_18003AEFC @ 0x18003AEFC (sub_18003AEFC.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 *     sub_18003EA2C @ 0x18003EA2C (sub_18003EA2C.c)
 *     sub_18003ECF8 @ 0x18003ECF8 (sub_18003ECF8.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_18003F5AC(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _QWORD *a5, __int64 a6)
{
  __int64 v10; // rax
  volatile __int32 *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 *v16; // r15
  __int64 *v17; // rdi
  __int64 v18; // rbx
  volatile __int32 *v20; // [rsp+30h] [rbp-79h]
  __int64 v21; // [rsp+38h] [rbp-71h] BYREF
  __int64 v22; // [rsp+40h] [rbp-69h]
  __int128 v23; // [rsp+48h] [rbp-61h] BYREF
  __int64 v24; // [rsp+58h] [rbp-51h]
  __int64 v25; // [rsp+60h] [rbp-49h] BYREF
  __int64 v26; // [rsp+68h] [rbp-41h]
  __int64 v27; // [rsp+70h] [rbp-39h] BYREF
  __int64 v28; // [rsp+78h] [rbp-31h]
  _BYTE v29[32]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-9h]

  v30 = a2;
  sub_180028890(a1 + 16);
  v10 = sub_180012444((__int64)v29, a2);
  sub_18003EA2C(a1, &v21, v10);
  v11 = (volatile __int32 *)(v21 + 76);
  v20 = (volatile __int32 *)(v21 + 76);
  while ( _InterlockedExchange(v11, 1) )
    v11 = v20;
  v12 = v21;
  if ( *(_BYTE *)(v21 + 80) )
  {
    v13 = a6 | *(_QWORD *)(v21 + 96) | *(_QWORD *)(*a4 + 536);
    v14 = *(_QWORD *)sub_18003ECF8(v21, &v25);
    if ( v26 )
      sub_18001060C(v26);
    if ( v14 )
    {
      v15 = *(_QWORD *)sub_18003ECF8(v12, &v27);
      if ( v28 )
        sub_18001060C(v28);
      (**(void (__fastcall ***)(_QWORD, __int128 *, __int64, __int64))*a5)(*a5, &v23, v15, *a4);
      v16 = (__int64 *)*((_QWORD *)&v23 + 1);
      v17 = (__int64 *)v23;
      if ( (_QWORD)v23 != *((_QWORD *)&v23 + 1) )
      {
        do
        {
          v18 = *v17;
          sub_18003BE3C(*v17);
          if ( (*(_QWORD *)(v18 + 448) & *(_QWORD *)(*a4 + 512)) == *(_QWORD *)(*a4 + 504) )
            sub_18003AEFC(*v17, v13, a3, a4);
          ++v17;
        }
        while ( v17 != v16 );
        v17 = (__int64 *)v23;
      }
      if ( v17 )
      {
        sub_180010234(v17, (v24 - (_QWORD)v17) & 0xFFFFFFFFFFFFFFF8uLL);
        v23 = 0LL;
        v24 = 0LL;
      }
    }
  }
  *v20 = 0;
  if ( v22 )
    sub_18001060C(v22);
  return sub_180013228(a2);
}
