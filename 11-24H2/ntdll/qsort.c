/*
 * XREFs of qsort @ 0x180123E10
 * Callers:
 *     LdrpCfgProcessLoadConfig @ 0x180034480 (LdrpCfgProcessLoadConfig.c)
 *     RtlSetProtectedPolicy @ 0x1800F4C20 (RtlSetProtectedPolicy.c)
 *     RtlCompareExchangePropertyStore @ 0x1801413D0 (RtlCompareExchangePropertyStore.c)
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_check_icall$thunk$15021643654165956172 @ 0x180171010 (_guard_check_icall$thunk$15021643654165956172.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  char *v8; // r15
  __int64 v9; // rcx
  size_t v10; // rbx
  char *v11; // rbx
  char *i; // rdi
  int v13; // eax
  char *v14; // rcx
  size_t v15; // r8
  _BYTE *v16; // rdx
  __int64 v17; // rbx
  char v18; // cl
  size_t v19; // rbx
  char *v20; // rdi
  _BYTE *v21; // r8
  size_t v22; // r9
  char v23; // cl
  size_t v24; // r8
  _BYTE *v25; // rdx
  char *v26; // r9
  char v27; // cl
  size_t v28; // r8
  _BYTE *v29; // rdx
  __int64 v30; // r9
  char v31; // cl
  char *v32; // rbx
  char *v33; // rsi
  unsigned __int64 v34; // rbp
  char *v35; // rdx
  signed __int64 v36; // r9
  char v37; // cl
  char *v38; // rax
  __int64 v39; // [rsp+30h] [rbp-448h]
  _QWORD v40[62]; // [rsp+40h] [rbp-438h] BYREF
  _QWORD v41[62]; // [rsp+230h] [rbp-248h] BYREF

  memset_thunk_772440563353939046(v40, 0, 0x1F0uLL);
  memset_thunk_772440563353939046(v41, 0, 0x1F0uLL);
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    if ( NumOfElements >= 2 )
    {
      v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v9 = 0LL;
      v39 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (v8 - (_BYTE *)Base) / SizeOfElements + 1;
          if ( v10 <= 8 )
          {
            if ( v8 > Base )
            {
              do
              {
                v11 = (char *)Base;
                for ( i = (char *)Base + SizeOfElements; i <= v8; v11 = v14 )
                {
                  v13 = ((__int64 (__fastcall *)(char *, char *))CompareFunction)(i, v11);
                  v14 = i;
                  if ( v13 <= 0 )
                    v14 = v11;
                  i += SizeOfElements;
                }
                v15 = SizeOfElements;
                v16 = v8;
                if ( v11 != v8 )
                {
                  v17 = v11 - v8;
                  do
                  {
                    v18 = v16[v17];
                    v16[v17] = *v16;
                    *v16++ = v18;
                    --v15;
                  }
                  while ( v15 );
                }
                v8 -= SizeOfElements;
              }
              while ( v8 > Base );
              v9 = v39;
            }
            goto LABEL_18;
          }
          v19 = SizeOfElements * (v10 >> 1);
          v20 = (char *)Base + v19;
          if ( ((int (__fastcall *)(void *, char *))CompareFunction)(Base, (char *)Base + v19) > 0 )
          {
            v22 = SizeOfElements;
            v21 = (char *)Base + v19;
            if ( Base != v20 )
            {
              do
              {
                v23 = v21[-v19];
                v21[-v19] = *v21;
                *v21++ = v23;
                --v22;
              }
              while ( v22 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, _BYTE *, size_t))CompareFunction)(Base, v8, v21, v22) > 0 )
          {
            v24 = SizeOfElements;
            v25 = v8;
            if ( Base != v8 )
            {
              v26 = (char *)((_BYTE *)Base - v8);
              do
              {
                v27 = v25[(_QWORD)v26];
                v25[(_QWORD)v26] = *v25;
                *v25++ = v27;
                --v24;
              }
              while ( v24 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))CompareFunction)((char *)Base + v19, v8, v24) > 0 )
          {
            v28 = SizeOfElements;
            v29 = v8;
            if ( v20 != v8 )
            {
              v30 = v20 - v8;
              do
              {
                v31 = v29[v30];
                v29[v30] = *v29;
                *v29++ = v31;
                --v28;
              }
              while ( v28 );
            }
          }
          v32 = (char *)Base;
          v33 = v8;
          while ( 1 )
          {
            if ( v20 > v32 )
            {
              while ( 1 )
              {
                v32 += SizeOfElements;
                if ( v32 >= v20 )
                  break;
                if ( ((int (__fastcall *)(char *, char *, size_t))CompareFunction)(v32, v20, v28) > 0 )
                  goto LABEL_38;
              }
            }
            do
              v32 += SizeOfElements;
            while ( v32 <= v8 && ((int (__fastcall *)(char *, char *, size_t))CompareFunction)(v32, v20, v28) <= 0 );
            do
            {
LABEL_38:
              v34 = (unsigned __int64)v33;
              v33 -= SizeOfElements;
            }
            while ( v33 > v20 && ((int (__fastcall *)(char *, char *))CompareFunction)(v33, v20) > 0 );
            if ( v33 < v32 )
              break;
            v28 = SizeOfElements;
            v35 = v33;
            if ( v33 != v32 )
            {
              v36 = v32 - v33;
              do
              {
                v37 = v35[v36];
                v35[v36] = *v35;
                *v35++ = v37;
                --v28;
              }
              while ( v28 );
            }
            v38 = v32;
            if ( v20 != v33 )
              v38 = v20;
            v20 = v38;
          }
          if ( (unsigned __int64)v20 < v34 )
          {
            while ( 1 )
            {
              v34 -= SizeOfElements;
              if ( v34 <= (unsigned __int64)v20 )
                break;
              if ( ((unsigned int (__fastcall *)(unsigned __int64, char *))CompareFunction)(v34, v20) )
                goto LABEL_53;
            }
          }
          do
            v34 -= SizeOfElements;
          while ( v34 > (unsigned __int64)Base
               && !((unsigned int (__fastcall *)(unsigned __int64, char *))CompareFunction)(v34, v20) );
LABEL_53:
          v9 = v39;
          if ( (__int64)(v34 - (_QWORD)Base) >= v8 - v32 )
            break;
          if ( v32 < v8 )
          {
            v40[v39] = v32;
            v41[v39] = v8;
            v9 = ++v39;
          }
          if ( (unsigned __int64)Base >= v34 )
          {
LABEL_18:
            v39 = --v9;
            if ( v9 < 0 )
              return;
            Base = (void *)v40[v9];
            v8 = (char *)v41[v9];
          }
          else
          {
            v8 = (char *)v34;
          }
        }
        if ( (unsigned __int64)Base < v34 )
        {
          v40[v39] = Base;
          v41[v39] = v34;
          v9 = ++v39;
        }
        if ( v32 >= v8 )
          goto LABEL_18;
        Base = v32;
      }
    }
  }
  else
  {
    invalid_parameter();
  }
}
