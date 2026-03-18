/*
 * XREFs of ?CitpProgDataNotifyUseUpdate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROG_DATA@@@Z @ 0x14023C99C
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B26AC (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpProgDataNotifyUseUpdate(struct _CIT_IMPACT_CONTEXT *a1, struct _CIT_PROG_DATA *a2)
{
  char *v4; // r8
  __int64 v5; // rax
  char **v6; // rcx
  char *v7; // r11
  __int64 v8; // rax
  __int64 *v9; // r10
  __int64 *v10; // rax
  __int64 **v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  char **v14; // rax
  struct _CIT_IMPACT_CONTEXT **v15; // rcx
  char *v16; // rbx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx

  if ( *((_BYTE *)a2 + 34) )
  {
    v4 = (char *)a2 + 16;
    v5 = *((_QWORD *)a2 + 2);
    if ( *(struct _CIT_PROG_DATA **)(v5 + 8) != (struct _CIT_PROG_DATA *)((char *)a2 + 16) )
      goto LABEL_21;
    v6 = (char **)*((_QWORD *)a2 + 3);
    if ( *v6 != v4 )
      goto LABEL_21;
    *v6 = (char *)v5;
    v7 = (char *)a1 + 24;
    *(_QWORD *)(v5 + 8) = v6;
    v8 = *((_QWORD *)a1 + 3);
    if ( *(struct _CIT_IMPACT_CONTEXT **)(v8 + 8) != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 24) )
      goto LABEL_21;
    *(_QWORD *)v4 = v8;
    *((_QWORD *)a2 + 3) = v7;
    *(_QWORD *)(v8 + 8) = v4;
    *(_QWORD *)v7 = v4;
    v9 = (__int64 *)*((_QWORD *)a1 + 6);
    if ( (__int64)(*((unsigned int *)a2 + 21)
                 + 30000 * (*((unsigned int *)a2 + 20) - (unsigned __int64)*((unsigned int *)v9 + 16))
                 - *((unsigned int *)v9 + 17)) < 0 )
      goto LABEL_13;
    v10 = (__int64 *)*v9;
    if ( *(__int64 **)(*v9 + 8) != v9 )
      goto LABEL_21;
    v11 = (__int64 **)v9[1];
    if ( *v11 != v9 )
      goto LABEL_21;
    *v11 = v10;
    v10[1] = (__int64)v11;
    v12 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_21;
    *v9 = v12;
    v9[1] = (__int64)v7;
    *(_QWORD *)(v12 + 8) = v9;
    *(_QWORD *)v7 = v9;
    *((_WORD *)v9 + 9) = 1;
    v13 = *(_QWORD *)v4;
    if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4
      || (v14 = (char **)*((_QWORD *)a2 + 3), *v14 != v4)
      || (*v14 = (char *)v13,
          *(_QWORD *)(v13 + 8) = v14,
          v15 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 6),
          *v15 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 40)) )
    {
LABEL_21:
      __fastfail(3u);
    }
    *(_QWORD *)v4 = (char *)a1 + 40;
    *((_QWORD *)a2 + 3) = v15;
    *v15 = (struct _CIT_IMPACT_CONTEXT *)v4;
    *((_QWORD *)a1 + 6) = v4;
    *((_WORD *)a2 + 17) = 256;
  }
LABEL_13:
  if ( *((_BYTE *)a2 + 35) )
  {
    v16 = (char *)a1 + 40;
    while ( 1 )
    {
      v17 = *((_QWORD *)a2 + 3);
      if ( (char *)v17 == v16
        || (__int64)(*((unsigned int *)a2 + 21)
                   + 30000 * (*((unsigned int *)a2 + 20) - (unsigned __int64)*(unsigned int *)(v17 + 64))
                   - *(unsigned int *)(v17 + 68)) < 0 )
      {
        break;
      }
      v18 = (_QWORD *)((char *)a2 + 16);
      v19 = *((_QWORD *)a2 + 2);
      if ( *(struct _CIT_PROG_DATA **)(v19 + 8) != (struct _CIT_PROG_DATA *)((char *)a2 + 16) )
        goto LABEL_21;
      v20 = (_QWORD *)*((_QWORD *)a2 + 3);
      if ( (_QWORD *)*v20 != v18 )
        goto LABEL_21;
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      v21 = *(_QWORD **)(v17 + 8);
      if ( *v21 != v17 )
        goto LABEL_21;
      *v18 = v17;
      *((_QWORD *)a2 + 3) = v21;
      *v21 = v18;
      *(_QWORD *)(v17 + 8) = v18;
    }
  }
}
