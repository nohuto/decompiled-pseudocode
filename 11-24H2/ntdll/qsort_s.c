/*
 * XREFs of qsort_s @ 0x1801241D0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_check_icall$thunk$15021643654165956172 @ 0x180171010 (_guard_check_icall$thunk$15021643654165956172.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __cdecl qsort_s(
        void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        _CoreCrtSecureSearchSortCompareFunction CompareFunction,
        void *Context)
{
  char *v7; // rsi
  char *v9; // r15
  __int64 v10; // rcx
  rsize_t v11; // rbx
  char *v12; // rbx
  char *i; // rdi
  int v14; // eax
  char *v15; // rcx
  rsize_t v16; // r8
  char *v17; // rdx
  rsize_t v18; // rbx
  char v19; // cl
  rsize_t v20; // rbx
  char *v21; // rdi
  rsize_t v22; // r9
  char *v23; // r8
  char v24; // cl
  rsize_t v25; // r8
  char *v26; // rdx
  char *v27; // r9
  char v28; // cl
  rsize_t v29; // r8
  char *v30; // rdx
  signed __int64 v31; // r9
  char v32; // cl
  char *v33; // rbx
  char *v34; // rsi
  char *v35; // rbp
  rsize_t v36; // r8
  char *v37; // rdx
  __int64 v38; // r9
  char v39; // cl
  char *v40; // rax
  __int64 v41; // [rsp+30h] [rbp-448h]
  char *v42; // [rsp+38h] [rbp-440h]
  _QWORD v43[62]; // [rsp+40h] [rbp-438h] BYREF
  _QWORD v44[62]; // [rsp+230h] [rbp-248h] BYREF

  v42 = (char *)Base;
  v7 = (char *)Base;
  memset_thunk_772440563353939046(v43, 0, 0x1F0uLL);
  memset_thunk_772440563353939046(v44, 0, 0x1F0uLL);
  if ( (v7 || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    if ( NumOfElements >= 2 )
    {
      v9 = &v7[SizeOfElements * (NumOfElements - 1)];
      v10 = 0LL;
      v41 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = (v9 - v7) / SizeOfElements + 1;
          if ( v11 <= 8 )
          {
            if ( v9 > v7 )
            {
              do
              {
                v12 = v7;
                for ( i = &v7[SizeOfElements]; i <= v9; v12 = v15 )
                {
                  v14 = ((__int64 (__fastcall *)(void *, char *, char *))CompareFunction)(Context, i, v12);
                  v15 = i;
                  if ( v14 <= 0 )
                    v15 = v12;
                  i += SizeOfElements;
                }
                v16 = SizeOfElements;
                v17 = v9;
                if ( v12 != v9 )
                {
                  v18 = v12 - v9;
                  do
                  {
                    v19 = v17[v18];
                    v17[v18] = *v17;
                    *v17++ = v19;
                    --v16;
                  }
                  while ( v16 );
                }
                v9 -= SizeOfElements;
              }
              while ( v9 > v7 );
              v10 = v41;
            }
            goto LABEL_18;
          }
          v20 = SizeOfElements * (v11 >> 1);
          v21 = &v7[v20];
          if ( ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v7, &v7[v20]) > 0 )
          {
            v22 = SizeOfElements;
            v23 = &v7[v20];
            if ( v7 != v21 )
            {
              do
              {
                v24 = v23[-v20];
                v23[-v20] = *v23;
                *v23++ = v24;
                --v22;
              }
              while ( v22 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *, rsize_t))CompareFunction)(Context, v7, v9, v22) > 0 )
          {
            v25 = SizeOfElements;
            v26 = v9;
            if ( v7 != v9 )
            {
              v27 = (char *)(v7 - v9);
              do
              {
                v28 = v26[(_QWORD)v27];
                v26[(_QWORD)v27] = *v26;
                *v26++ = v28;
                --v25;
              }
              while ( v25 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, &v7[v20], v9) > 0 )
          {
            v29 = SizeOfElements;
            v30 = v9;
            if ( v21 != v9 )
            {
              v31 = v21 - v9;
              do
              {
                v32 = v30[v31];
                v30[v31] = *v30;
                *v30++ = v32;
                --v29;
              }
              while ( v29 );
            }
          }
          v33 = v7;
          v34 = v9;
          while ( 1 )
          {
            if ( v21 > v33 )
            {
              while ( 1 )
              {
                v33 += SizeOfElements;
                if ( v33 >= v21 )
                  break;
                if ( ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v33, v21) > 0 )
                  goto LABEL_38;
              }
            }
            do
              v33 += SizeOfElements;
            while ( v33 <= v9 && ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v33, v21) <= 0 );
            do
            {
LABEL_38:
              v35 = v34;
              v34 -= SizeOfElements;
            }
            while ( v34 > v21 && ((int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v34, v21) > 0 );
            if ( v34 < v33 )
              break;
            v36 = SizeOfElements;
            v37 = v34;
            if ( v34 != v33 )
            {
              v38 = v33 - v34;
              do
              {
                v39 = v37[v38];
                v37[v38] = *v37;
                *v37++ = v39;
                --v36;
              }
              while ( v36 );
            }
            v40 = v33;
            if ( v21 != v34 )
              v40 = v21;
            v21 = v40;
          }
          if ( v21 < v35 )
          {
            while ( 1 )
            {
              v35 -= SizeOfElements;
              if ( v35 <= v21 )
                break;
              if ( ((unsigned int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v35, v21) )
              {
                v7 = v42;
                goto LABEL_54;
              }
            }
          }
          v7 = v42;
          do
            v35 -= SizeOfElements;
          while ( v35 > v42
               && !((unsigned int (__fastcall *)(void *, char *, char *))CompareFunction)(Context, v35, v21) );
LABEL_54:
          v10 = v41;
          if ( v35 - v7 >= v9 - v33 )
            break;
          if ( v33 < v9 )
          {
            v43[v41] = v33;
            v44[v41] = v9;
            v10 = ++v41;
          }
          if ( v7 >= v35 )
          {
LABEL_18:
            v41 = --v10;
            if ( v10 < 0 )
              return;
            v7 = (char *)v43[v10];
            v9 = (char *)v44[v10];
            v42 = v7;
          }
          else
          {
            v9 = v35;
          }
        }
        if ( v7 < v35 )
        {
          v43[v41] = v7;
          v44[v41] = v35;
          v10 = ++v41;
        }
        if ( v33 >= v9 )
          goto LABEL_18;
        v7 = v33;
        v42 = v33;
      }
    }
  }
  else
  {
    invalid_parameter();
  }
}
