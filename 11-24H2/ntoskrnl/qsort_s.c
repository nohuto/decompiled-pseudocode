/*
 * XREFs of qsort_s @ 0x1404FF100
 * Callers:
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140385380 (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 *     WheaPersistBadPageToBcd @ 0x14065CE90 (WheaPersistBadPageToBcd.c)
 *     WheapFormatBadPageList @ 0x14065D2BC (WheapFormatBadPageList.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140493990 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_check_icall_no_overrides @ 0x1406B3DA0 (_guard_check_icall_no_overrides.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __cdecl qsort_s(
        void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(void *, const void *, const void *),
        void *Context)
{
  char *v7; // rsi
  signed __int64 v9; // r9
  char *v10; // r15
  __int64 v11; // rcx
  rsize_t v12; // rbx
  char *v13; // rbx
  char *i; // rdi
  int v15; // eax
  char *v16; // rcx
  rsize_t v17; // r8
  char *v18; // rdx
  rsize_t v19; // rbx
  char v20; // cl
  rsize_t v21; // rbx
  char *v22; // rdi
  rsize_t v23; // r9
  char *v24; // r8
  char v25; // cl
  rsize_t v26; // r8
  char *v27; // rdx
  char *v28; // r9
  char v29; // cl
  rsize_t v30; // r8
  char *v31; // rdx
  char v32; // cl
  char *v33; // rbx
  char *v34; // rsi
  char *v35; // rbp
  rsize_t v36; // r8
  char *v37; // rdx
  char v38; // cl
  char *v39; // rax
  __int64 v40; // [rsp+30h] [rbp-448h]
  char *v41; // [rsp+38h] [rbp-440h]
  _QWORD v42[62]; // [rsp+40h] [rbp-438h] BYREF
  _QWORD v43[62]; // [rsp+230h] [rbp-248h] BYREF

  v41 = (char *)Base;
  v7 = (char *)Base;
  memset_0(v42, 0, sizeof(v42));
  memset_0(v43, 0, sizeof(v43));
  if ( (v7 || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      guard_check_icall_no_overrides(PtFuncCompare);
      v10 = &v7[SizeOfElements * (NumOfElements - 1)];
      v11 = 0LL;
      v40 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = (v10 - v7) / SizeOfElements + 1;
          if ( v12 <= 8 )
          {
            if ( v10 > v7 )
            {
              do
              {
                v13 = v7;
                for ( i = &v7[SizeOfElements]; i <= v10; v13 = v16 )
                {
                  v15 = guard_dispatch_icall_no_overrides(Context, i, v13, v9);
                  v16 = i;
                  if ( v15 <= 0 )
                    v16 = v13;
                  i += SizeOfElements;
                }
                v17 = SizeOfElements;
                v18 = v10;
                if ( v13 != v10 )
                {
                  v19 = v13 - v10;
                  do
                  {
                    v20 = v18[v19];
                    v18[v19] = *v18;
                    *v18++ = v20;
                    --v17;
                  }
                  while ( v17 );
                }
                v10 -= SizeOfElements;
              }
              while ( v10 > v7 );
              v11 = v40;
            }
            goto LABEL_18;
          }
          v21 = SizeOfElements * (v12 >> 1);
          v22 = &v7[v21];
          if ( ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v7, &v7[v21]) > 0 )
          {
            v23 = SizeOfElements;
            v24 = &v7[v21];
            if ( v7 != v22 )
            {
              do
              {
                v25 = v24[-v21];
                v24[-v21] = *v24;
                *v24++ = v25;
                --v23;
              }
              while ( v23 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *, rsize_t))PtFuncCompare)(Context, v7, v10, v23) > 0 )
          {
            v26 = SizeOfElements;
            v27 = v10;
            if ( v7 != v10 )
            {
              v28 = (char *)(v7 - v10);
              do
              {
                v29 = v27[(_QWORD)v28];
                v27[(_QWORD)v28] = *v27;
                *v27++ = v29;
                --v26;
              }
              while ( v26 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, &v7[v21], v10) > 0 )
          {
            v30 = SizeOfElements;
            v31 = v10;
            if ( v22 != v10 )
            {
              v9 = v22 - v10;
              do
              {
                v32 = v31[v9];
                v31[v9] = *v31;
                *v31++ = v32;
                --v30;
              }
              while ( v30 );
            }
          }
          v33 = v7;
          v34 = v10;
          while ( 1 )
          {
            if ( v22 > v33 )
            {
              while ( 1 )
              {
                v33 += SizeOfElements;
                if ( v33 >= v22 )
                  break;
                if ( ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v33, v22) > 0 )
                  goto LABEL_38;
              }
            }
            do
              v33 += SizeOfElements;
            while ( v33 <= v10 && ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v33, v22) <= 0 );
            do
            {
LABEL_38:
              v35 = v34;
              v34 -= SizeOfElements;
            }
            while ( v34 > v22 && ((int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v34, v22) > 0 );
            if ( v34 < v33 )
              break;
            v36 = SizeOfElements;
            v37 = v34;
            if ( v34 != v33 )
            {
              v9 = v33 - v34;
              do
              {
                v38 = v37[v9];
                v37[v9] = *v37;
                *v37++ = v38;
                --v36;
              }
              while ( v36 );
            }
            v39 = v33;
            if ( v22 != v34 )
              v39 = v22;
            v22 = v39;
          }
          if ( v22 < v35 )
          {
            while ( 1 )
            {
              v35 -= SizeOfElements;
              if ( v35 <= v22 )
                break;
              if ( ((unsigned int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v35, v22) )
              {
                v7 = v41;
                goto LABEL_54;
              }
            }
          }
          v7 = v41;
          do
            v35 -= SizeOfElements;
          while ( v35 > v41 && !((unsigned int (__fastcall *)(void *, char *, char *))PtFuncCompare)(Context, v35, v22) );
LABEL_54:
          v11 = v40;
          if ( v35 - v7 >= v10 - v33 )
            break;
          if ( v33 < v10 )
          {
            v42[v40] = v33;
            v43[v40] = v10;
            v11 = ++v40;
          }
          if ( v7 >= v35 )
          {
LABEL_18:
            v40 = --v11;
            if ( v11 < 0 )
              return;
            v7 = (char *)v42[v11];
            v10 = (char *)v43[v11];
            v41 = v7;
          }
          else
          {
            v10 = v35;
          }
        }
        if ( v7 < v35 )
        {
          v42[v40] = v7;
          v43[v40] = v35;
          v11 = ++v40;
        }
        if ( v33 >= v10 )
          goto LABEL_18;
        v7 = v33;
        v41 = v33;
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
}
