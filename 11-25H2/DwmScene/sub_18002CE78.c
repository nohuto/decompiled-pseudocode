/*
 * XREFs of sub_18002CE78 @ 0x18002CE78
 * Callers:
 *     sub_18002C55C @ 0x18002C55C (sub_18002C55C.c)
 * Callees:
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001B85C @ 0x18001B85C (sub_18001B85C.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 *     sub_18001BB4C @ 0x18001BB4C (sub_18001BB4C.c)
 */

__int64 __fastcall sub_18002CE78(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  _QWORD *v4; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  const void *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  const void *v14; // r8
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rcx
  const void *v18; // rax
  const void *v19; // r8
  int v20; // eax
  const void *v21; // rax
  const void *v22; // r8
  int v23; // eax
  __int64 *v24; // rsi
  __int64 *v25; // rcx
  __int64 *v26; // rax
  __int64 *v27; // rdx
  __int64 *v28; // r8
  __int64 *i; // rax
  const void *v30; // rax
  const void *v31; // r8
  int v32; // eax
  bool v33; // zf
  const void *v34; // rax
  const void *v35; // r8
  int v36; // eax
  __int64 *v37; // rsi
  __int64 *v38; // rax
  __int64 **v39; // rcx
  __int64 *v40; // rcx
  const void *v41; // rax
  const void *v42; // r8
  int v43; // eax
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int128 v47; // [rsp+20h] [rbp-38h] BYREF
  __int64 v48; // [rsp+30h] [rbp-28h]

  v4 = (_QWORD *)*a1;
  if ( *((_BYTE *)a3 + 25) )
  {
    v9 = v4 + 2;
    if ( *(_BYTE *)(v4[1] + 25LL)
      || (sub_1800137F8(a4),
          v11 = (const void *)sub_1800137F8(v10 + 32),
          LOBYTE(v15) = sub_18001BB4C(v11, *(_QWORD *)(v13 + 48), v14, *(_QWORD *)(v12 + 16)),
          v15 < 0) )
    {
      *(_QWORD *)a2 = *v9;
      *(_BYTE *)(a2 + 16) = 0;
LABEL_44:
      *(_QWORD *)(a2 + 8) = 0LL;
      goto LABEL_45;
    }
    goto LABEL_37;
  }
  v16 = (__int64)(a3 + 4);
  v17 = (__int64)(a3 + 4);
  if ( a3 != (__int64 *)*v4 )
  {
    sub_1800137F8(v17);
    v21 = (const void *)sub_1800137F8(a4);
    LOBYTE(v23) = sub_18001BB4C(v21, *(_QWORD *)(a4 + 16), v22, *(_QWORD *)(v16 + 16));
    if ( v23 < 0 )
    {
      v24 = (__int64 *)*a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        v24 = (__int64 *)a3[1];
        v25 = a3;
        v26 = a3;
        if ( !*((_BYTE *)v24 + 25) )
        {
          v27 = a3;
          v28 = a3;
          do
          {
            v25 = v28;
            if ( v27 != (__int64 *)*v24 )
              break;
            v26 = v24;
            v24 = (__int64 *)v24[1];
            v27 = v26;
            v28 = v26;
            v25 = v26;
          }
          while ( !*((_BYTE *)v24 + 25) );
        }
        if ( *((_BYTE *)v26 + 25) )
          v24 = v25;
      }
      else
      {
        for ( i = (__int64 *)v24[2]; !*((_BYTE *)i + 25); i = (__int64 *)i[2] )
          v24 = i;
      }
      sub_1800137F8(a4);
      v30 = (const void *)sub_1800137F8((__int64)(v24 + 4));
      LOBYTE(v32) = sub_18001BB4C(v30, v24[6], v31, *(_QWORD *)(a4 + 16));
      if ( v32 >= 0 )
        goto LABEL_37;
      v33 = *(_BYTE *)(v24[2] + 25) == 0;
      *(_BYTE *)(a2 + 16) = 0;
      if ( !v33 )
      {
        *(_QWORD *)a2 = v24;
        goto LABEL_44;
      }
      *(_QWORD *)a2 = a3;
LABEL_25:
      *(_QWORD *)(a2 + 8) = 1LL;
      goto LABEL_45;
    }
    sub_1800137F8(a4);
    v34 = (const void *)sub_1800137F8(v16);
    LOBYTE(v36) = sub_18001BB4C(v34, *(_QWORD *)(v16 + 16), v35, *(_QWORD *)(a4 + 16));
    if ( v36 >= 0 )
    {
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_43;
    }
    v37 = (__int64 *)a3[2];
    if ( *((_BYTE *)v37 + 25) )
    {
      v37 = (__int64 *)a3[1];
      if ( *((_BYTE *)v37 + 25) )
        goto LABEL_40;
      v38 = a3;
      do
      {
        v39 = (__int64 **)v37;
        if ( v38 != (__int64 *)v37[2] )
          break;
        v37 = (__int64 *)v37[1];
        v38 = (__int64 *)v39;
      }
      while ( !*((_BYTE *)v37 + 25) );
    }
    else
    {
      v40 = (__int64 *)*v37;
      if ( !*(_BYTE *)(*v37 + 25) )
      {
        do
        {
          v37 = v40;
          v40 = (__int64 *)*v40;
        }
        while ( !*((_BYTE *)v40 + 25) );
      }
    }
    if ( !*((_BYTE *)v37 + 25) )
    {
      sub_1800137F8((__int64)(v37 + 4));
      v41 = (const void *)sub_1800137F8(a4);
      LOBYTE(v43) = sub_18001BB4C(v41, *(_QWORD *)(a4 + 16), v42, v37[6]);
      if ( v43 >= 0 )
        goto LABEL_37;
    }
LABEL_40:
    v33 = *(_BYTE *)(a3[2] + 25) == 0;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v33 )
    {
      *(_QWORD *)a2 = v37;
      goto LABEL_25;
    }
LABEL_43:
    *(_QWORD *)a2 = a3;
    goto LABEL_44;
  }
  sub_1800137F8(v17);
  v18 = (const void *)sub_1800137F8(a4);
  LOBYTE(v20) = sub_18001BB4C(v18, *(_QWORD *)(a4 + 16), v19, *(_QWORD *)(v16 + 16));
  if ( v20 >= 0 )
  {
LABEL_37:
    sub_18001B85C((__int64)a1, (__int64 **)&v47, a4);
    v44 = v48;
    if ( sub_18001B920(v45, v48) )
    {
      *(_QWORD *)a2 = v44;
      *(_QWORD *)(a2 + 8) = 2LL;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_45;
    }
    *(_OWORD *)a2 = v47;
    goto LABEL_8;
  }
  *(_QWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = 1LL;
LABEL_8:
  *(_BYTE *)(a2 + 16) = 0;
LABEL_45:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
