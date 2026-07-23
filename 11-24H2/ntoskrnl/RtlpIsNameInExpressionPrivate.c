/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x140326070
 * Callers:
 *     RtlIsNameInExpression @ 0x140325F30 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x140325FB0 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  int v5; // r10d
  unsigned __int16 v6; // si
  char v8; // r9
  unsigned __int16 *v9; // r14
  unsigned __int16 *v10; // rbp
  void *v11; // r11
  _WORD *v12; // rax
  unsigned __int16 *v13; // r10
  unsigned __int16 v14; // r9
  unsigned __int16 *v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // r11
  unsigned __int16 v20; // r9
  __int64 v21; // rcx
  unsigned __int16 v22; // di
  char *v23; // r8
  char *v24; // r12
  unsigned int v25; // r13d
  unsigned __int16 v26; // r10
  __int16 v27; // di
  unsigned __int64 v28; // rcx
  __int64 v29; // rbx
  unsigned int v30; // edi
  __int16 v31; // ax
  unsigned int v32; // r15d
  unsigned int v33; // edx
  __int16 v34; // si
  __int64 v35; // rbp
  char v36; // cl
  unsigned int v37; // r14d
  _OWORD *Pool2; // rax
  __int64 v39; // rcx
  char *v40; // rcx
  __int128 v41; // xmm1
  char *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdi
  unsigned __int16 v45; // ax
  __int64 v46; // rax
  __int16 v47; // si
  __int64 v48; // rax
  unsigned __int16 v49; // dx
  __int64 v50; // rax
  unsigned int v51; // r9d
  char *v52; // rax
  unsigned __int16 v53; // cx
  __int64 v54; // rax
  __int16 v55; // bx
  char v56; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v58; // [rsp+22h] [rbp-B6h]
  __int16 v60; // [rsp+26h] [rbp-B2h]
  unsigned __int16 v62; // [rsp+38h] [rbp-A0h]
  unsigned int v63; // [rsp+3Ch] [rbp-9Ch]
  char *v64; // [rsp+40h] [rbp-98h]
  _WORD v66[16]; // [rsp+60h] [rbp-78h] BYREF
  char v67; // [rsp+80h] [rbp-58h] BYREF

  v5 = *a2;
  v6 = 0;
  v8 = 0;
  v9 = a2;
  v58 = 0;
  v10 = a1;
  v56 = 0;
  v11 = 0LL;
  if ( !(_WORD)v5 || !*a1 )
    return v5 + *a1 == 0;
  v12 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( *a1 == 2 )
  {
    if ( *v12 != 42 )
      goto LABEL_24;
    return 1;
  }
  if ( *v12 == 42 )
  {
    v13 = v12 + 1;
    v14 = *(_OWORD *)a1 - 2;
    if ( (unsigned __int16)*(_OWORD *)a1 != 2 )
    {
      v15 = &v13[((unsigned __int64)v14 >> 1) - 1];
      if ( v15 >= v13 )
      {
        while ( 1 )
        {
          v16 = *v15;
          if ( (_DWORD)v16 == 92 )
            goto LABEL_13;
          if ( (unsigned int)v16 < 0x40 && (*((_BYTE *)qword_140013670 + v16) & 8) != 0 )
            break;
          if ( --v15 < v13 )
            goto LABEL_13;
        }
        v8 = 0;
        goto LABEL_24;
      }
    }
LABEL_13:
    if ( *v9 < (unsigned __int16)(*a1 - 2) )
      return 0;
    v17 = (*v9 - (unsigned __int64)v14) >> 1;
    if ( !a3 )
      return memcmp(v13, (const void *)(*((_QWORD *)v9 + 1) + 2LL * (unsigned int)v17), v14) == 0;
    v20 = v14 >> 1;
    if ( v20 )
    {
      do
      {
        v21 = v13[v6];
        if ( a4 )
          LOWORD(v21) = *(_WORD *)(a5 + 2 * v21);
        if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v9 + 1) + 2LL * ((unsigned int)v17 + v6))) != (_WORD)v21 )
          return 0;
        ++v6;
      }
      while ( v6 < v20 );
    }
    return 1;
  }
LABEL_24:
  v22 = *a1;
  v23 = (char *)v66;
  v64 = (char *)v66;
  v66[0] = 0;
  v24 = &v67;
  v62 = 0;
  v25 = 1;
  v26 = 0;
  if ( v22 > 0x7FFFu )
    return 0;
  v27 = 2 * v22;
  v60 = v27;
  while ( 2 )
  {
    if ( v26 >= *v9 )
    {
      v8 = 1;
      v56 = 1;
      if ( *(_WORD *)&v23[2 * v25 - 2] == v27 )
        goto LABEL_83;
    }
    else
    {
      v28 = (unsigned __int64)v26 >> 1;
      v26 += 2;
      v62 = v26;
      v58 = *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * v28);
    }
    v63 = 0;
    LODWORD(v29) = 0;
    v30 = 0;
    while ( 2 )
    {
      v31 = 0;
      v32 = ((unsigned int)*(unsigned __int16 *)&v23[2 * (unsigned int)v29] + 1) >> 1;
      v29 = (unsigned int)(v29 + 1);
      while ( 1 )
      {
        v33 = *v10;
        if ( (_WORD)v32 == (_WORD)v33 )
          goto LABEL_60;
        LOWORD(v32) = v31 + v32;
        v34 = 2 * v32;
        if ( (_WORD)v32 == (_WORD)v33 )
          break;
        v35 = *(unsigned __int16 *)(*((_QWORD *)v10 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v32 >> 1));
        v36 = a3;
        if ( a3 && a4 )
          LOWORD(v35) = *(_WORD *)(a5 + 2 * v35);
        if ( v30 >= 0xE && !v11 )
        {
          v37 = v33 >> 1;
          Pool2 = (_OWORD *)ExAllocatePool2(0x40uLL, 8LL * ((v33 >> 1) + 1), 0x6E725346u);
          v11 = Pool2;
          if ( !Pool2 )
            RtlRaiseStatus(-1073741801);
          v8 = v56;
          v39 = 2 * v37 + 2;
          v9 = a2;
          v40 = (char *)Pool2 + 2 * v39;
          v26 = v62;
          *Pool2 = *(_OWORD *)v24;
          v41 = *((_OWORD *)v24 + 1);
          v24 = (char *)Pool2;
          Pool2[1] = v41;
          v42 = v64;
          v64 = v40;
          *(_OWORD *)v40 = *(_OWORD *)v42;
          *((_OWORD *)v40 + 1) = *((_OWORD *)v42 + 1);
          v36 = a3;
        }
        if ( (_WORD)v35 == 42 )
          goto LABEL_41;
        if ( (_WORD)v35 == 60 )
        {
          if ( v8 || v58 != 46 )
            goto LABEL_41;
          v45 = v26;
          if ( v26 >= *v9 )
          {
LABEL_48:
            v10 = a1;
            v46 = v30++;
            *(_WORD *)&v24[2 * v46] = v34 + 3;
            v31 = 2;
          }
          else
          {
            while ( *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)v45 >> 1)) != 46 )
            {
              v45 += 2;
              if ( v45 >= *v9 )
                goto LABEL_48;
            }
LABEL_41:
            v10 = a1;
            v43 = v30;
            v44 = v30 + 1;
            *(_WORD *)&v24[2 * v43] = v34;
            v31 = 2;
            *(_WORD *)&v24[2 * v44] = v34 + 3;
            v30 = v44 + 1;
          }
        }
        else
        {
          v47 = v34 + 4;
          if ( (_WORD)v35 == 62 )
          {
            v31 = 2;
            v10 = a1;
            if ( !v8 && v58 != 46 )
            {
              v48 = v30++;
              *(_WORD *)&v24[2 * v48] = v47;
              goto LABEL_60;
            }
          }
          else
          {
            if ( (_WORD)v35 != 34 )
            {
              if ( !v8 )
              {
                if ( (_WORD)v35 != 63 )
                {
                  v49 = v58;
                  goto LABEL_73;
                }
LABEL_58:
                v50 = v30++;
                *(_WORD *)&v24[2 * v50] = v47;
              }
LABEL_59:
              v10 = a1;
              goto LABEL_60;
            }
            if ( !v8 )
            {
              v49 = v58;
              if ( v58 == 46 )
                goto LABEL_58;
LABEL_73:
              if ( v36 )
                v53 = *(_WORD *)(a5 + 2LL * v49);
              else
                v53 = v49;
              if ( (_WORD)v35 == v53 )
                goto LABEL_58;
              goto LABEL_59;
            }
            v31 = 2;
            v10 = a1;
          }
        }
      }
      v54 = v30++;
      *(_WORD *)&v24[2 * v54] = v60;
LABEL_60:
      v23 = v64;
      if ( (unsigned int)v29 < v25 )
      {
        v51 = v63;
        while ( v51 < v30 )
        {
          do
          {
            if ( *(_WORD *)&v64[2 * v29] >= *(_WORD *)&v24[2 * v51] )
              break;
            v29 = (unsigned int)(v29 + 1);
          }
          while ( (unsigned int)v29 < v25 );
          v63 = ++v51;
          if ( (unsigned int)v29 >= v25 )
          {
            v8 = v56;
            goto LABEL_67;
          }
        }
        v8 = v56;
        continue;
      }
      break;
    }
LABEL_67:
    if ( v30 )
    {
      v64 = v24;
      v52 = v23;
      v23 = v24;
      v25 = v30;
      v27 = v60;
      v24 = v52;
      if ( v8 )
      {
LABEL_83:
        v55 = *(_WORD *)&v23[2 * v25 - 2];
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
        return v55 == v27;
      }
      continue;
    }
    break;
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return 0;
}
