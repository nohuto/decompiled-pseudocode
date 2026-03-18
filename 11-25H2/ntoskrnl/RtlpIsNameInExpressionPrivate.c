/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x14030F240
 * Callers:
 *     RtlIsNameInExpression @ 0x14030F100 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x14030F180 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 v5; // di
  unsigned __int16 *v6; // r14
  char v7; // dl
  int v10; // r10d
  unsigned __int16 *v11; // r11
  _WORD *v12; // rax
  char *v13; // r13
  __int16 v14; // si
  char *v15; // r9
  unsigned int v16; // r15d
  unsigned __int16 v17; // r10
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned int v20; // ebp
  __int16 v21; // r12
  unsigned int v22; // ebx
  unsigned int v23; // edx
  __int16 v24; // di
  __int64 v25; // r14
  char v26; // al
  __int16 v27; // di
  bool v28; // zf
  unsigned __int16 v29; // cx
  __int64 v30; // rax
  unsigned int v31; // r8d
  char *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rcx
  __int16 v37; // bx
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rax
  unsigned __int16 *v43; // r9
  unsigned __int16 v44; // r8
  unsigned __int16 *j; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // r10
  unsigned __int16 v48; // r8
  __int64 v49; // rcx
  unsigned __int16 i; // dx
  unsigned int v51; // r13d
  _OWORD *Pool2; // rax
  __int64 v53; // rax
  char *v54; // rcx
  __int128 v55; // xmm1
  char *v56; // rcx
  char *v57; // rax
  __int128 v58; // xmm1
  char v59; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v61; // [rsp+22h] [rbp-B6h]
  unsigned __int16 v64; // [rsp+30h] [rbp-A8h]
  __int16 v65; // [rsp+32h] [rbp-A6h]
  unsigned int v66; // [rsp+34h] [rbp-A4h]
  PVOID P; // [rsp+38h] [rbp-A0h]
  char *v68; // [rsp+40h] [rbp-98h]
  char *v69; // [rsp+48h] [rbp-90h]
  _WORD v71[16]; // [rsp+60h] [rbp-78h] BYREF
  char v72; // [rsp+80h] [rbp-58h] BYREF

  v5 = 0;
  v6 = a2;
  v7 = 0;
  v61 = 0;
  v10 = *v6;
  v11 = a1;
  P = 0LL;
  v59 = 0;
  if ( !(_WORD)v10 || !*a1 )
    return *a1 + v10 == 0;
  v12 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( *a1 == 2 )
  {
    if ( *v12 != 42 )
    {
LABEL_5:
      v13 = (char *)v71;
      v14 = 2 * *a1;
      v68 = (char *)v71;
      v65 = v14;
      v15 = &v72;
      v71[0] = 0;
      v16 = 1;
      v17 = 0;
      v64 = 0;
      while ( 1 )
      {
        v69 = v15;
        if ( v7 )
          break;
        if ( v17 >= *v6 )
        {
          v36 = v16 - 1;
          v59 = 1;
          if ( *(_WORD *)&v13[2 * v36] == v14 )
            goto LABEL_46;
        }
        else
        {
          v18 = (unsigned __int64)v17 >> 1;
          v17 += 2;
          v64 = v17;
          v61 = *(_WORD *)(*((_QWORD *)v6 + 1) + 2 * v18);
        }
        LODWORD(v19) = 0;
        v66 = 0;
        v20 = 0;
        while ( (unsigned int)v19 < v16 )
        {
          v21 = 0;
          v22 = ((unsigned int)*(unsigned __int16 *)&v13[2 * (unsigned int)v19] + 1) >> 1;
          v19 = (unsigned int)(v19 + 1);
          do
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v23 = *v11;
                  if ( (_WORD)v22 == (_WORD)v23 )
                    goto LABEL_30;
                  LOWORD(v22) = v21 + v22;
                  v21 = 2;
                  v24 = 2 * v22;
                  if ( (_WORD)v22 == (_WORD)v23 )
                  {
                    v33 = v20++;
                    *(_WORD *)&v15[2 * v33] = v65;
                    goto LABEL_30;
                  }
                  v25 = *(unsigned __int16 *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v22 >> 1));
                  v26 = a3;
                  if ( a3 && a4 )
                    LOWORD(v25) = *(_WORD *)(a5 + 2 * v25);
                  if ( v20 >= 0xE && !P )
                  {
                    v51 = v23 >> 1;
                    Pool2 = (_OWORD *)ExAllocatePool2(0x40uLL);
                    P = Pool2;
                    if ( !Pool2 )
                      RtlRaiseStatus(-1073741801);
                    v54 = v69;
                    v15 = (char *)Pool2;
                    v11 = a1;
                    v17 = v64;
                    v69 = (char *)Pool2;
                    *Pool2 = *(_OWORD *)v54;
                    v55 = *((_OWORD *)v54 + 1);
                    v56 = (char *)Pool2 + 4 * v51 + 4;
                    Pool2[1] = v55;
                    v57 = v68;
                    v13 = v56;
                    v68 = v56;
                    *(_OWORD *)v56 = *(_OWORD *)v57;
                    v58 = *((_OWORD *)v57 + 1);
                    v26 = a3;
                    *((_OWORD *)v56 + 1) = v58;
                  }
                  if ( (_WORD)v25 != 42 )
                    break;
                  v6 = a2;
                  v40 = v20;
                  v41 = v20 + 1;
                  *(_WORD *)&v15[2 * v40] = v24;
                  *(_WORD *)&v15[2 * v41] = v24 + 3;
                  v20 = v41 + 1;
                }
                if ( (_WORD)v25 != 60 )
                  break;
                v6 = a2;
                if ( v61 != 46 || v59 )
                {
LABEL_43:
                  v34 = v20;
                  v35 = v20 + 1;
                  *(_WORD *)&v15[2 * v34] = v24;
                  *(_WORD *)&v15[2 * v35] = v24 + 3;
                  v20 = v35 + 1;
                }
                else
                {
                  for ( i = v17; i < *a2; i += 2 )
                  {
                    if ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)i >> 1)) == 46 )
                      goto LABEL_43;
                  }
                  v53 = v20++;
                  *(_WORD *)&v15[2 * v53] = v24 + 3;
                }
              }
              v27 = v24 + 4;
              if ( (_WORD)v25 == 62 )
                break;
              if ( (_WORD)v25 != 34 )
              {
                if ( !v59 )
                {
                  v28 = (_WORD)v25 == 63;
                  goto LABEL_24;
                }
                goto LABEL_29;
              }
              if ( !v59 )
              {
                v28 = v61 == 46;
LABEL_24:
                if ( v28 || (!v26 ? (v29 = v61) : (v29 = *(_WORD *)(a5 + 2LL * v61)), (_WORD)v25 == v29) )
                {
                  v30 = v20++;
                  *(_WORD *)&v15[2 * v30] = v27;
                }
LABEL_29:
                v6 = a2;
                goto LABEL_30;
              }
              v6 = a2;
            }
            v6 = a2;
          }
          while ( v59 || v61 == 46 );
          v42 = v20++;
          *(_WORD *)&v15[2 * v42] = v27;
LABEL_30:
          if ( (unsigned int)v19 >= v16 )
            break;
          v31 = v66;
          do
          {
            if ( v31 >= v20 )
              break;
            for ( ; (unsigned int)v19 < v16; v19 = (unsigned int)(v19 + 1) )
            {
              if ( *(_WORD *)&v13[2 * v19] >= *(_WORD *)&v15[2 * v31] )
                break;
            }
            v66 = ++v31;
          }
          while ( (unsigned int)v19 < v16 );
        }
        if ( !v20 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
          return 0;
        }
        v7 = v59;
        v32 = v13;
        v14 = v65;
        v13 = v15;
        v68 = v15;
        v16 = v20;
        v15 = v32;
      }
      v36 = v16 - 1;
LABEL_46:
      v37 = *(_WORD *)&v13[2 * v36];
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v37 == v14;
    }
    return 1;
  }
  else
  {
    if ( *v12 != 42 )
      goto LABEL_5;
    v43 = v12 + 1;
    v44 = *(_OWORD *)a1 - 2;
    if ( (unsigned __int16)*(_OWORD *)a1 != 2 )
    {
      for ( j = &v43[((unsigned __int64)v44 >> 1) - 1]; j >= v43; --j )
      {
        v46 = *j;
        if ( (_DWORD)v46 == 92 )
          break;
        if ( (unsigned int)v46 < 0x40 && (*((_BYTE *)qword_140013DE0 + v46) & 8) != 0 )
        {
          v7 = 0;
          goto LABEL_5;
        }
      }
    }
    if ( *v6 < (unsigned __int16)(*a1 - 2) )
    {
      return 0;
    }
    else
    {
      v47 = (*v6 - (unsigned __int64)v44) >> 1;
      if ( !a3 )
        return memcmp(v43, (const void *)(*((_QWORD *)v6 + 1) + 2LL * (unsigned int)v47), v44) == 0;
      v48 = v44 >> 1;
      while ( v5 < v48 )
      {
        v49 = v43[v5];
        if ( a4 )
          LOWORD(v49) = *(_WORD *)(a5 + 2 * v49);
        if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v6 + 1) + 2LL * ((unsigned int)v47 + v5))) != (_WORD)v49 )
          return 0;
        ++v5;
      }
      return 1;
    }
  }
}
