/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x180068918
 * Callers:
 *     RtlIsNameInUnUpcasedExpression @ 0x180067110 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlIsNameInExpression @ 0x1800688A0 (RtlIsNameInExpression.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlDoesNameContainWildCards @ 0x180068850 (RtlDoesNameContainWildCards.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 *v5; // r13
  unsigned __int16 *v8; // rdx
  unsigned __int16 v9; // r11
  char *Heap; // r8
  char v11; // r10
  unsigned __int16 v12; // bp
  _WORD *v13; // rax
  char *v14; // r9
  unsigned __int16 v15; // bx
  char *v16; // r14
  unsigned int v17; // edi
  __int16 v18; // bp
  __int64 v19; // r12
  unsigned int v20; // ebx
  __int64 v21; // rax
  unsigned int v22; // r15d
  __int16 i; // ax
  __int16 v24; // di
  __int64 v25; // rsi
  char v26; // cl
  __int16 v27; // di
  unsigned __int16 v28; // cx
  __int64 v29; // rax
  char *v30; // rax
  unsigned __int16 *v32; // rdi
  unsigned __int16 v33; // bx
  unsigned __int64 v34; // r9
  unsigned __int16 v35; // dx
  unsigned __int16 v36; // bx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v40; // rcx
  __int16 v41; // bx
  __int64 v42; // rcx
  int v43; // r13d
  unsigned int v44; // esi
  unsigned __int16 j; // dx
  __int64 v46; // rax
  char *v47; // rax
  char *v48; // rcx
  __int128 v49; // xmm1
  char v50; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v53; // [rsp+24h] [rbp-B4h]
  unsigned __int16 v54; // [rsp+26h] [rbp-B2h]
  unsigned int v55; // [rsp+2Ch] [rbp-ACh]
  unsigned int v56; // [rsp+30h] [rbp-A8h]
  char *v57; // [rsp+38h] [rbp-A0h]
  _UNICODE_STRING Expression; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int16 *v60; // [rsp+58h] [rbp-80h]
  _WORD v61[16]; // [rsp+60h] [rbp-78h] BYREF
  char v62; // [rsp+80h] [rbp-58h] BYREF

  v5 = a2;
  v60 = a2;
  v8 = a1;
  v53 = 0;
  v9 = 0;
  Heap = 0LL;
  v11 = 0;
  v50 = 0;
  if ( !*v5 )
    return *a1 + *v5 == 0;
  v12 = *a1;
  if ( !*a1 )
    return *a1 + *v5 == 0;
  v13 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( v12 == 2 )
  {
    if ( *v13 != 42 )
      goto LABEL_5;
    return 1;
  }
  if ( *v13 == 42 )
  {
    v32 = v13 + 1;
    *(_QWORD *)&Expression.Length = *(_QWORD *)a1;
    v33 = Expression.Length - 2;
    Expression.Buffer = v13 + 1;
    Expression.MaximumLength -= 2;
    Expression.Length -= 2;
    if ( RtlDoesNameContainWildCards(&Expression) )
    {
      v8 = a1;
      Heap = 0LL;
      v11 = 0;
      v9 = 0;
      goto LABEL_5;
    }
    if ( *v5 < (unsigned __int16)(v12 - 2) )
      return 0;
    v34 = (*v5 - (unsigned __int64)v33) >> 1;
    if ( !a3 )
      return memcmp(v32, (const void *)(*((_QWORD *)v5 + 1) + 2LL * (unsigned int)v34), v33) == 0;
    v35 = 0;
    v36 = v33 >> 1;
    while ( v35 < v36 )
    {
      v42 = v32[v35];
      if ( a4 )
        LOWORD(v42) = *(_WORD *)(a5 + 2 * v42);
      if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v5 + 1) + 2LL * ((unsigned int)v34 + v35))) != (_WORD)v42 )
        return 0;
      ++v35;
    }
    return 1;
  }
LABEL_5:
  v14 = (char *)v61;
  v61[0] = 0;
  v15 = 0;
  v57 = (char *)v61;
  v54 = 0;
  v16 = &v62;
  v17 = 1;
  v18 = 2 * v12;
  while ( 1 )
  {
    v56 = v17;
    if ( v11 )
      break;
    if ( v15 >= *v5 )
    {
      v40 = v17 - 1;
      v50 = 1;
      v11 = 1;
      if ( *(_WORD *)&v14[2 * v40] == v18 )
        goto LABEL_47;
    }
    else
    {
      v9 = *(_WORD *)(*((_QWORD *)v5 + 1) + 2 * ((unsigned __int64)v15 >> 1));
      v53 = v9;
      v54 = v15 + 2;
    }
    LODWORD(v19) = 0;
    v55 = 0;
    v20 = 0;
    while ( (unsigned int)v19 < v17 )
    {
      v21 = (unsigned int)v19;
      v19 = (unsigned int)(v19 + 1);
      v22 = ((unsigned int)*(unsigned __int16 *)&v14[2 * v21] + 1) >> 1;
      for ( i = 0; ; i = 2 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (_WORD)v22 == *v8 )
              goto LABEL_26;
            LOWORD(v22) = i + v22;
            v24 = 2 * v22;
            if ( (_WORD)v22 == *v8 )
            {
              *(_WORD *)&v16[2 * v20] = v18;
LABEL_53:
              ++v20;
              goto LABEL_26;
            }
            v25 = *(unsigned __int16 *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v22 >> 1));
            v26 = a3;
            if ( a3 && a4 )
              LOWORD(v25) = *(_WORD *)(a5 + 2 * v25);
            if ( v20 >= 0xE && !Heap )
            {
              v43 = *v8 >> 1;
              Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)(v43 + 1));
              if ( !Heap )
                RtlRaiseStatus(-1073741801);
              v47 = v57;
              v8 = a1;
              v48 = &Heap[2 * (2 * v43 + 2)];
              v5 = v60;
              v14 = v48;
              v9 = v53;
              *(_OWORD *)Heap = *(_OWORD *)v16;
              v57 = v48;
              v49 = *((_OWORD *)v16 + 1);
              v16 = Heap;
              *((_OWORD *)Heap + 1) = v49;
              *(_OWORD *)v48 = *(_OWORD *)v47;
              *((_OWORD *)v48 + 1) = *((_OWORD *)v47 + 1);
              v26 = a3;
            }
            v11 = v50;
            if ( (_WORD)v25 == 42 )
              goto LABEL_42;
            if ( (_WORD)v25 != 60 )
              break;
            if ( v50 || v9 != 46 )
            {
LABEL_41:
              v8 = a1;
LABEL_42:
              v37 = v20;
              v38 = v20 + 1;
              *(_WORD *)&v16[2 * v37] = v24;
              *(_WORD *)&v16[2 * v38] = v24 + 3;
              v20 = v38 + 1;
              goto LABEL_43;
            }
            for ( j = v54; j < *v5; j += 2 )
            {
              if ( *(_WORD *)(*((_QWORD *)v5 + 1) + 2 * ((unsigned __int64)j >> 1)) == 46 )
                goto LABEL_41;
            }
            v8 = a1;
            v46 = v20++;
            *(_WORD *)&v16[2 * v46] = v24 + 3;
LABEL_80:
            i = 2;
          }
          v27 = v24 + 4;
          if ( (_WORD)v25 != 62 )
            break;
          i = 2;
          if ( !v50 )
          {
            if ( v9 != 46 )
              goto LABEL_52;
            goto LABEL_80;
          }
        }
        if ( (_WORD)v25 != 34 )
        {
          if ( v50 )
            goto LABEL_26;
          if ( (_WORD)v25 != 63 )
            goto LABEL_22;
          goto LABEL_25;
        }
        if ( !v50 )
          break;
LABEL_43:
        ;
      }
      if ( v9 == 46 )
      {
LABEL_52:
        *(_WORD *)&v16[2 * v20] = v27;
        goto LABEL_53;
      }
LABEL_22:
      if ( v26 )
        v28 = *(_WORD *)(a5 + 2LL * v9);
      else
        v28 = v9;
      if ( (_WORD)v25 == v28 )
      {
LABEL_25:
        v29 = v20++;
        *(_WORD *)&v16[2 * v29] = v27;
      }
LABEL_26:
      v17 = v56;
      if ( (unsigned int)v19 < v56 )
      {
        v44 = v55;
        do
        {
          if ( v44 >= v20 )
            break;
          for ( ; (unsigned int)v19 < v56; v19 = (unsigned int)(v19 + 1) )
          {
            if ( *(_WORD *)&v14[2 * v19] >= *(_WORD *)&v16[2 * v44] )
              break;
          }
          v55 = ++v44;
        }
        while ( (unsigned int)v19 < v56 );
        continue;
      }
      break;
    }
    if ( !v20 )
    {
      if ( Heap )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 0;
    }
    v30 = v14;
    v57 = v16;
    v14 = v16;
    v17 = v20;
    v15 = v54;
    v16 = v30;
  }
  v40 = v17 - 1;
LABEL_47:
  v41 = *(_WORD *)&v14[2 * v40];
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v41 == v18;
}
