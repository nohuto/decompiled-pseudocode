/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x140347600
 * Callers:
 *     RtlIsNameInExpression @ 0x1403474C0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x140347540 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     Feature_244352312__private_IsEnabledDeviceUsageNoInline @ 0x1405E8A44 (Feature_244352312__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  int v5; // r10d
  unsigned __int16 v6; // si
  unsigned __int16 *v9; // rbp
  _WORD *v10; // rax
  char *v11; // r14
  char *v12; // r12
  unsigned int v13; // r13d
  _OWORD *v14; // r9
  __int16 v15; // r11
  unsigned __int16 v16; // r10
  unsigned __int16 *v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int16 *v19; // r10
  unsigned __int16 v20; // r9
  unsigned __int16 *i; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // r11
  unsigned __int16 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rcx
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
  __int128 v39; // xmm1
  char *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  unsigned __int16 v43; // dx
  unsigned __int16 v44; // ax
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdi
  char v49; // dl
  __int16 v50; // si
  __int64 v51; // rax
  unsigned __int16 v52; // r15
  __int64 v53; // rax
  unsigned int v54; // r8d
  char *v55; // rax
  unsigned __int16 v56; // cx
  __int64 v57; // rax
  __int16 v58; // bx
  char v59; // [rsp+20h] [rbp-B8h]
  __int16 v60; // [rsp+22h] [rbp-B6h]
  unsigned __int16 v62; // [rsp+26h] [rbp-B2h]
  unsigned __int16 v64; // [rsp+2Ah] [rbp-AEh]
  unsigned int v66; // [rsp+3Ch] [rbp-9Ch]
  PVOID P; // [rsp+48h] [rbp-90h]
  char *v69; // [rsp+50h] [rbp-88h]
  _WORD v70[16]; // [rsp+60h] [rbp-78h] BYREF
  char v71; // [rsp+80h] [rbp-58h] BYREF

  v5 = *a2;
  v6 = 0;
  v9 = a1;
  v62 = 0;
  P = 0LL;
  v59 = 0;
  if ( !(_WORD)v5 || !*a1 )
    return v5 + *a1 == 0;
  v10 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( *a1 == 2 )
  {
    if ( *v10 != 42 )
      goto LABEL_5;
    return 1;
  }
  if ( *v10 == 42 )
  {
    v19 = v10 + 1;
    v20 = *(_OWORD *)a1 - 2;
    if ( (unsigned __int16)*(_OWORD *)a1 != 2 )
    {
      for ( i = &v19[((unsigned __int64)v20 >> 1) - 1]; i >= v19; --i )
      {
        v22 = *i;
        if ( (_DWORD)v22 == 92 )
          break;
        if ( (unsigned int)v22 < 0x40 && (*((_BYTE *)qword_140013B40 + v22) & 8) != 0 )
          goto LABEL_5;
      }
    }
    if ( *a2 < (unsigned __int16)(*a1 - 2) )
      return 0;
    v23 = (*a2 - (unsigned __int64)v20) >> 1;
    if ( !a3 )
      return memcmp(v19, (const void *)(*((_QWORD *)a2 + 1) + 2LL * (unsigned int)v23), v20) == 0;
    v26 = v20 >> 1;
    if ( v26 )
    {
      v27 = *((_QWORD *)a2 + 1);
      do
      {
        v28 = v19[v6];
        if ( a4 )
          LOWORD(v28) = *(_WORD *)(a5 + 2 * v28);
        if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(v27 + 2LL * ((unsigned int)v23 + v6))) != (_WORD)v28 )
          return 0;
        ++v6;
      }
      while ( v6 < v26 );
    }
    return 1;
  }
LABEL_5:
  v11 = (char *)v70;
  v70[0] = 0;
  v69 = (char *)v70;
  v12 = &v71;
  v13 = 1;
  v64 = 0;
  if ( (unsigned int)Feature_244352312__private_IsEnabledDeviceUsageNoInline() && *v9 > 0x7FFFu )
    return 0;
  v14 = 0LL;
  v15 = 2 * *v9;
  v16 = 0;
  v60 = v15;
  while ( 2 )
  {
    v17 = a2;
    if ( v16 >= *a2 )
    {
      v59 = 1;
      if ( *(_WORD *)&v11[2 * v13 - 2] == v15 )
        goto LABEL_87;
    }
    else
    {
      v18 = v16;
      v16 += 2;
      v64 = v16;
      v62 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * (v18 >> 1));
    }
    v66 = 0;
    LODWORD(v29) = 0;
    v30 = 0;
    while ( 2 )
    {
      v31 = 0;
      v32 = ((unsigned int)*(unsigned __int16 *)&v11[2 * (unsigned int)v29] + 1) >> 1;
      v29 = (unsigned int)(v29 + 1);
      while ( 1 )
      {
        v33 = *v9;
        if ( (_WORD)v32 == (_WORD)v33 )
        {
          v49 = v59;
          goto LABEL_63;
        }
        LOWORD(v32) = v31 + v32;
        v34 = 2 * v32;
        if ( (_WORD)v32 == (_WORD)v33 )
          break;
        v35 = *(unsigned __int16 *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v32 >> 1));
        v36 = a3;
        if ( a3 && a4 )
          LOWORD(v35) = *(_WORD *)(a5 + 2 * v35);
        if ( v30 >= 0xE && !v14 )
        {
          v37 = v33 >> 1;
          Pool2 = (_OWORD *)ExAllocatePool2(0x40uLL);
          P = Pool2;
          if ( !Pool2 )
            RtlRaiseStatus(-1073741801);
          v17 = a2;
          v16 = v64;
          *Pool2 = *(_OWORD *)v12;
          v39 = *((_OWORD *)v12 + 1);
          v12 = (char *)Pool2;
          v11 = (char *)Pool2 + 4 * v37 + 4;
          v14 = Pool2;
          Pool2[1] = v39;
          v40 = v69;
          v69 = v11;
          *(_OWORD *)v11 = *(_OWORD *)v40;
          *((_OWORD *)v11 + 1) = *((_OWORD *)v40 + 1);
          v36 = a3;
        }
        if ( (_WORD)v35 == 42 )
        {
          v9 = a1;
          v41 = v30;
          v42 = v30 + 1;
          *(_WORD *)&v12[2 * v41] = v34;
          v31 = 2;
          *(_WORD *)&v12[2 * v42] = v34 + 3;
          v30 = v42 + 1;
        }
        else if ( (_WORD)v35 == 60 )
        {
          if ( v59 || v62 != 46 )
            goto LABEL_51;
          v43 = *v17;
          v44 = v16;
          if ( v16 >= *v17 )
          {
LABEL_50:
            v9 = a1;
            v46 = v30++;
            *(_WORD *)&v12[2 * v46] = v34 + 3;
            v31 = 2;
          }
          else
          {
            v45 = *((_QWORD *)v17 + 1);
            while ( *(_WORD *)(v45 + 2 * ((unsigned __int64)v44 >> 1)) != 46 )
            {
              v44 += 2;
              if ( v44 >= v43 )
              {
                v17 = a2;
                goto LABEL_50;
              }
            }
LABEL_51:
            v17 = a2;
            v9 = a1;
            v47 = v30;
            v48 = v30 + 1;
            *(_WORD *)&v12[2 * v47] = v34;
            v31 = 2;
            *(_WORD *)&v12[2 * v48] = v34 + 3;
            v30 = v48 + 1;
          }
        }
        else
        {
          v49 = v59;
          v50 = v34 + 4;
          if ( (_WORD)v35 == 62 )
          {
            v31 = 2;
            v9 = a1;
            if ( !v59 && v62 != 46 )
            {
              v51 = v30++;
              *(_WORD *)&v12[2 * v51] = v50;
LABEL_63:
              v15 = v60;
              goto LABEL_64;
            }
          }
          else
          {
            if ( (_WORD)v35 != 34 )
            {
              if ( !v59 )
              {
                if ( (_WORD)v35 != 63 )
                {
                  v52 = v62;
                  goto LABEL_76;
                }
LABEL_61:
                v53 = v30++;
                *(_WORD *)&v12[2 * v53] = v50;
              }
LABEL_62:
              v9 = a1;
              goto LABEL_63;
            }
            if ( !v59 )
            {
              v52 = v62;
              if ( v62 == 46 )
                goto LABEL_61;
LABEL_76:
              if ( v36 )
                v56 = *(_WORD *)(a5 + 2LL * v52);
              else
                v56 = v52;
              if ( (_WORD)v35 == v56 )
                goto LABEL_61;
              goto LABEL_62;
            }
            v31 = 2;
            v9 = a1;
          }
        }
      }
      v15 = v60;
      v49 = v59;
      v57 = v30++;
      *(_WORD *)&v12[2 * v57] = v60;
LABEL_64:
      if ( (unsigned int)v29 < v13 )
      {
        v54 = v66;
        while ( v54 < v30 )
        {
          do
          {
            if ( *(_WORD *)&v11[2 * v29] >= *(_WORD *)&v12[2 * v54] )
              break;
            v29 = (unsigned int)(v29 + 1);
          }
          while ( (unsigned int)v29 < v13 );
          v66 = ++v54;
          if ( (unsigned int)v29 >= v13 )
            goto LABEL_70;
        }
        v17 = a2;
        continue;
      }
      break;
    }
LABEL_70:
    if ( v30 )
    {
      v69 = v12;
      v55 = v11;
      v11 = v12;
      v12 = v55;
      v13 = v30;
      if ( v49 )
      {
LABEL_87:
        v58 = *(_WORD *)&v11[2 * v13 - 2];
        if ( P )
          ExFreePoolWithTag(P, 0);
        return v58 == v60;
      }
      continue;
    }
    break;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0;
}
