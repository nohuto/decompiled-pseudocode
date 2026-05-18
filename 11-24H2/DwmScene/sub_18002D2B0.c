/*
 * XREFs of sub_18002D2B0 @ 0x18002D2B0
 * Callers:
 *     sub_18002C7A0 @ 0x18002C7A0 (sub_18002C7A0.c)
 *     sub_18005DC9C @ 0x18005DC9C (sub_18005DC9C.c)
 * Callees:
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001B9BC @ 0x18001B9BC (sub_18001B9BC.c)
 *     sub_18001BA80 @ 0x18001BA80 (sub_18001BA80.c)
 *     sub_18001BCAC @ 0x18001BCAC (sub_18001BCAC.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 */

__int64 __fastcall sub_18002D2B0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 i; // rax
  const void *v30; // rax
  const void *v31; // r8
  int v32; // eax
  bool v33; // zf
  const void *v34; // rax
  const void *v35; // r8
  int v36; // eax
  __int64 *v37; // rax
  __int64 v38; // rsi
  const void *v39; // rax
  const void *v40; // r8
  int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int128 v45; // [rsp+20h] [rbp-38h] BYREF
  __int64 v46; // [rsp+30h] [rbp-28h]
  __int64 v47; // [rsp+60h] [rbp+8h] BYREF

  v4 = (_QWORD *)*a1;
  if ( *(_BYTE *)(a3 + 25) )
  {
    v9 = v4 + 2;
    if ( *(_BYTE *)(v4[1] + 25LL)
      || (sub_1800138F8(a4),
          v11 = (const void *)sub_1800138F8(v10 + 32),
          LOBYTE(v15) = sub_18001BCAC(v11, *(_QWORD *)(v13 + 48), v14, *(_QWORD *)(v12 + 16)),
          v15 < 0) )
    {
      *(_QWORD *)a2 = *v9;
      *(_BYTE *)(a2 + 16) = 0;
LABEL_36:
      *(_QWORD *)(a2 + 8) = 0LL;
      goto LABEL_37;
    }
    goto LABEL_29;
  }
  v16 = a3 + 32;
  v17 = a3 + 32;
  if ( a3 != *v4 )
  {
    sub_1800138F8(v17);
    v21 = (const void *)sub_1800138F8(a4);
    LOBYTE(v23) = sub_18001BCAC(v21, *(_QWORD *)(a4 + 16), v22, *(_QWORD *)(v16 + 16));
    if ( v23 < 0 )
    {
      v24 = *(_QWORD *)a3;
      if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
      {
        v24 = *(_QWORD *)(a3 + 8);
        v25 = a3;
        v26 = a3;
        if ( !*(_BYTE *)(v24 + 25) )
        {
          v27 = a3;
          v28 = a3;
          do
          {
            v25 = v28;
            if ( v27 != *(_QWORD *)v24 )
              break;
            v26 = v24;
            v24 = *(_QWORD *)(v24 + 8);
            v27 = v26;
            v28 = v26;
            v25 = v26;
          }
          while ( !*(_BYTE *)(v24 + 25) );
        }
        if ( *(_BYTE *)(v26 + 25) )
          v24 = v25;
      }
      else
      {
        for ( i = *(_QWORD *)(v24 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
          v24 = i;
      }
      sub_1800138F8(a4);
      v30 = (const void *)sub_1800138F8(v24 + 32);
      LOBYTE(v32) = sub_18001BCAC(v30, *(_QWORD *)(v24 + 48), v31, *(_QWORD *)(a4 + 16));
      if ( v32 >= 0 )
        goto LABEL_29;
      v33 = *(_BYTE *)(*(_QWORD *)(v24 + 16) + 25LL) == 0;
      *(_BYTE *)(a2 + 16) = 0;
      if ( !v33 )
      {
        *(_QWORD *)a2 = v24;
        goto LABEL_36;
      }
      *(_QWORD *)a2 = a3;
LABEL_25:
      *(_QWORD *)(a2 + 8) = 1LL;
      goto LABEL_37;
    }
    sub_1800138F8(a4);
    v34 = (const void *)sub_1800138F8(v16);
    LOBYTE(v36) = sub_18001BCAC(v34, *(_QWORD *)(v16 + 16), v35, *(_QWORD *)(a4 + 16));
    if ( v36 >= 0 )
    {
      *(_BYTE *)(a2 + 16) = 1;
    }
    else
    {
      v47 = a3;
      v37 = sub_18001C420(&v47);
      v38 = *v37;
      if ( !*(_BYTE *)(*v37 + 25) )
      {
        sub_1800138F8(v38 + 32);
        v39 = (const void *)sub_1800138F8(a4);
        LOBYTE(v41) = sub_18001BCAC(v39, *(_QWORD *)(a4 + 16), v40, *(_QWORD *)(v38 + 48));
        if ( v41 >= 0 )
          goto LABEL_29;
      }
      v33 = *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) == 0;
      *(_BYTE *)(a2 + 16) = 0;
      if ( v33 )
      {
        *(_QWORD *)a2 = v38;
        goto LABEL_25;
      }
    }
    *(_QWORD *)a2 = a3;
    goto LABEL_36;
  }
  sub_1800138F8(v17);
  v18 = (const void *)sub_1800138F8(a4);
  LOBYTE(v20) = sub_18001BCAC(v18, *(_QWORD *)(a4 + 16), v19, *(_QWORD *)(v16 + 16));
  if ( v20 >= 0 )
  {
LABEL_29:
    sub_18001B9BC((__int64)a1, (__int64 **)&v45, a4);
    v42 = v46;
    if ( sub_18001BA80(v43, v46) )
    {
      *(_QWORD *)a2 = v42;
      *(_QWORD *)(a2 + 8) = 2LL;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_37;
    }
    *(_OWORD *)a2 = v45;
    goto LABEL_8;
  }
  *(_QWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = 1LL;
LABEL_8:
  *(_BYTE *)(a2 + 16) = 0;
LABEL_37:
  *(_DWORD *)(a2 + 17) = 0;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
