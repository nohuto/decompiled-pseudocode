/*
 * XREFs of sub_18004C918 @ 0x18004C918
 * Callers:
 *     sub_18007E078 @ 0x18007E078 (sub_18007E078.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_180049C3C @ 0x180049C3C (sub_180049C3C.c)
 *     sub_180049D0C @ 0x180049D0C (sub_180049D0C.c)
 *     sub_180049DDC @ 0x180049DDC (sub_180049DDC.c)
 *     sub_180049EAC @ 0x180049EAC (sub_180049EAC.c)
 *     sub_180049F7C @ 0x180049F7C (sub_180049F7C.c)
 *     sub_18004A714 @ 0x18004A714 (sub_18004A714.c)
 *     sub_18004D510 @ 0x18004D510 (sub_18004D510.c)
 *     sub_18004D530 @ 0x18004D530 (sub_18004D530.c)
 *     sub_18008138C @ 0x18008138C (sub_18008138C.c)
 *     sub_1800815E0 @ 0x1800815E0 (sub_1800815E0.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_18004C918(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v6; // rbx
  __int64 **v7; // rdi
  __int64 *v8; // r12
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int128 v25; // [rsp+20h] [rbp-79h] BYREF
  __int64 v26; // [rsp+30h] [rbp-69h] BYREF
  __int64 v27; // [rsp+38h] [rbp-61h]
  __int64 v28; // [rsp+40h] [rbp-59h] BYREF
  __int64 v29; // [rsp+48h] [rbp-51h]
  __int64 v30; // [rsp+50h] [rbp-49h] BYREF
  __int64 v31; // [rsp+58h] [rbp-41h]
  __int64 v32; // [rsp+60h] [rbp-39h] BYREF
  __int64 v33; // [rsp+68h] [rbp-31h]
  __int64 v34; // [rsp+70h] [rbp-29h] BYREF
  __int64 v35; // [rsp+78h] [rbp-21h]
  _QWORD v36[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v37; // [rsp+90h] [rbp-9h] BYREF
  _QWORD v38[3]; // [rsp+98h] [rbp-1h] BYREF

  v38[0] = a2;
  v38[2] = a3;
  v6 = (_QWORD *)(a1 + 18576);
  sub_18004D530(a1 + 18576, &v37, a3);
  if ( v37 == *v6 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v7 = (__int64 **)(v37 + 64);
    v25 = 0LL;
    v8 = (__int64 *)(v37 + 88);
    if ( *(_QWORD *)(v37 + 88) )
      sub_18001244C((__int64 *)&v25, (_QWORD *)(v37 + 88));
    v9 = *v7;
    if ( *v7 )
    {
      v10 = *v9;
      if ( *v9 == v9[1] )
        v10 = v9[3];
    }
    else
    {
      v10 = 0LL;
    }
    v36[0] = v10;
    v11 = v25;
    if ( (_QWORD)v25 )
      goto LABEL_55;
    if ( *(_BYTE *)(a1 + 18624) )
    {
      if ( *v7 )
      {
        if ( !(unsigned __int8)sub_18004D510(*v7) && *v12 == v12[1] )
        {
          if ( v12[3] )
          {
            sub_180011AC0((__int64 *)(a1 + 18608), (__int64)v38, v36);
            if ( v38[0] != *(_QWORD *)(a1 + 18608) )
            {
              sub_18001244C((__int64 *)&v25, (_QWORD *)(v38[0] + 40LL));
              v11 = v25;
              if ( (_QWORD)v25 )
                goto LABEL_55;
            }
          }
        }
      }
    }
    if ( *v7 && !(unsigned __int8)sub_18004D510(*v7) )
    {
      if ( *((_DWORD *)v7 + 4) == 1 )
      {
        sub_180049F7C(*(_QWORD *)(a1 + 18688), &v26);
        sub_1800815E0(v26, a3);
        sub_18008138C(v26, v7);
        v13 = v27;
        if ( v27 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
          v13 = v27;
        }
        v11 = v26;
        *(_QWORD *)&v25 = v26;
        v14 = *((_QWORD *)&v25 + 1);
        *((_QWORD *)&v25 + 1) = v13;
        if ( v14 )
        {
          sub_18001050C(v14);
          v13 = v27;
        }
        if ( v13 )
          sub_18001050C(v13);
      }
      if ( *((_DWORD *)v7 + 4) == 5 )
      {
        sub_180049EAC(*(_QWORD *)(a1 + 18688), &v28);
        sub_1800815E0(v28, a3);
        sub_18008138C(v28, v7);
        v15 = v29;
        if ( v29 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
          v15 = v29;
        }
        v11 = v28;
        *(_QWORD *)&v25 = v28;
        v16 = *((_QWORD *)&v25 + 1);
        *((_QWORD *)&v25 + 1) = v15;
        if ( v16 )
        {
          sub_18001050C(v16);
          v15 = v29;
        }
        if ( v15 )
          sub_18001050C(v15);
      }
      if ( *((_DWORD *)v7 + 4) == 4 )
      {
        sub_180049D0C(*(_QWORD *)(a1 + 18688), &v30);
        sub_1800815E0(v30, a3);
        sub_18008138C(v30, v7);
        v17 = v31;
        if ( v31 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
          v17 = v31;
        }
        v11 = v30;
        *(_QWORD *)&v25 = v30;
        v18 = *((_QWORD *)&v25 + 1);
        *((_QWORD *)&v25 + 1) = v17;
        if ( v18 )
        {
          sub_18001050C(v18);
          v17 = v31;
        }
        if ( v17 )
          sub_18001050C(v17);
      }
      if ( *((_DWORD *)v7 + 4) == 3 )
      {
        sub_180049C3C(*(_QWORD *)(a1 + 18688), &v32);
        sub_1800815E0(v32, a3);
        sub_18008138C(v32, v7);
        v19 = v33;
        if ( v33 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v33 + 8));
          v19 = v33;
        }
        v11 = v32;
        *(_QWORD *)&v25 = v32;
        v20 = *((_QWORD *)&v25 + 1);
        *((_QWORD *)&v25 + 1) = v19;
        if ( v20 )
        {
          sub_18001050C(v20);
          v19 = v33;
        }
        if ( v19 )
          sub_18001050C(v19);
      }
      if ( *((_DWORD *)v7 + 4) == 2 )
      {
        sub_180049DDC(*(_QWORD *)(a1 + 18688), &v34);
        sub_1800815E0(v34, a3);
        sub_18008138C(v34, v7);
        v21 = v35;
        if ( v35 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v35 + 8));
          v21 = v35;
        }
        v11 = v34;
        *(_QWORD *)&v25 = v34;
        v22 = *((_QWORD *)&v25 + 1);
        *((_QWORD *)&v25 + 1) = v21;
        if ( v22 )
        {
          sub_18001050C(v22);
          v21 = v35;
        }
        if ( v21 )
          sub_18001050C(v21);
      }
      if ( v11 )
      {
LABEL_55:
        sub_18001244C(v8, &v25);
        if ( *(_BYTE *)(a1 + 18624) )
        {
          v23 = sub_18004A714((__int64 *)(a1 + 18608), (__int64)v38, v36);
          sub_18001244C((__int64 *)(*(_QWORD *)v23 + 40LL), &v25);
        }
      }
    }
    *a2 = v11;
    a2[1] = *((_QWORD *)&v25 + 1);
  }
  sub_180011A5C(a3);
  return a2;
}
