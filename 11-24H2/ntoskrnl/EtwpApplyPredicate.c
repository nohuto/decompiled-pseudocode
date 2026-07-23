/*
 * XREFs of EtwpApplyPredicate @ 0x1403E8DC0
 * Callers:
 *     EtwpApplyPayloadFilterInternal @ 0x1403E84E0 (EtwpApplyPayloadFilterInternal.c)
 * Callees:
 *     EtwpGetFieldValue @ 0x1403E8E80 (EtwpGetFieldValue.c)
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
 *     EtwpGetSignedFieldValue @ 0x140650D68 (EtwpGetSignedFieldValue.c)
 *     strncmp @ 0x1406C0A20 (strncmp.c)
 *     ExSystemExceptionFilter @ 0x1407B73D0 (ExSystemExceptionFilter.c)
 */

char __fastcall EtwpApplyPredicate(unsigned __int16 *a1, int a2, __int64 a3, const char *a4, unsigned int a5, bool *a6)
{
  const char *v6; // rdi
  char v9; // r14
  int v10; // esi
  __int64 v11; // rax
  bool v12; // bl
  bool v14; // zf
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned int v18; // edx
  char *v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  const wchar_t *v22; // r12
  char *v23; // r15
  wchar_t v24; // r13
  __int64 v25; // r15
  const char *v26; // rsi
  char *v27; // r12
  unsigned __int64 v28; // rax
  const char *v29; // r12
  const char *i; // r15
  unsigned int v31; // r15d
  const char *v32; // rcx
  char v33; // si
  const char *v34; // r13
  __int64 v35; // [rsp+28h] [rbp-40h] BYREF
  const char *v36; // [rsp+30h] [rbp-38h] BYREF
  const char *v37; // [rsp+38h] [rbp-30h]
  const char *v38; // [rsp+40h] [rbp-28h]
  const wchar_t *v39; // [rsp+48h] [rbp-20h]

  v6 = a4;
  v35 = 0LL;
  v36 = 0LL;
  if ( !a5 )
    return 0;
  v9 = 0;
  v10 = *(unsigned __int16 *)(a3 + 2);
  if ( a2 != 5 )
  {
    switch ( a2 )
    {
      case 1:
        if ( !(unsigned __int8)EtwpGetSignedFieldValue(a4, a5, &v35) )
          return 0;
        v15 = *(_QWORD *)(a3 + 8);
        v16 = *(_QWORD *)(a3 + 16);
        switch ( v10 )
        {
          case 0:
            v14 = v35 == v15;
            goto LABEL_15;
          case 1:
            v12 = v35 != v15;
            goto LABEL_9;
          case 2:
            v12 = v35 <= v15;
            goto LABEL_9;
          case 3:
            v12 = v35 > v15;
            goto LABEL_9;
          case 4:
            v12 = v35 < v15;
            goto LABEL_9;
          case 5:
            v12 = v35 >= v15;
            goto LABEL_9;
          case 6:
            if ( v15 <= v35 && v35 <= v16 )
              goto LABEL_23;
            goto LABEL_26;
          case 7:
            if ( v35 >= v15 && v16 >= v35 )
              goto LABEL_26;
            goto LABEL_23;
          case 8:
            if ( !v15 )
              return 0;
            v14 = v35 % v15 == 0;
            break;
          default:
            return 0;
        }
        goto LABEL_15;
      case 2:
        if ( (unsigned __int8)EtwpGetFieldValue(a4, a5, &v36) )
        {
          switch ( v10 )
          {
            case 0:
              v14 = v36 == *(const char **)(a3 + 8);
              goto LABEL_15;
            case 1:
              v12 = v36 != *(const char **)(a3 + 8);
              goto LABEL_9;
            case 2:
              v12 = (unsigned __int64)v36 <= *(_QWORD *)(a3 + 8);
              goto LABEL_9;
            case 3:
              v12 = (unsigned __int64)v36 > *(_QWORD *)(a3 + 8);
              goto LABEL_9;
            case 4:
              v12 = (unsigned __int64)v36 < *(_QWORD *)(a3 + 8);
              goto LABEL_9;
            case 5:
              v12 = (unsigned __int64)v36 >= *(_QWORD *)(a3 + 8);
              goto LABEL_9;
            case 6:
              if ( *(_QWORD *)(a3 + 8) > (unsigned __int64)v36 || (unsigned __int64)v36 > *(_QWORD *)(a3 + 16) )
                goto LABEL_26;
              v12 = 1;
              goto LABEL_9;
            case 7:
              if ( (unsigned __int64)v36 >= *(_QWORD *)(a3 + 8) && *(_QWORD *)(a3 + 16) >= (unsigned __int64)v36 )
                goto LABEL_26;
LABEL_23:
              v12 = 1;
              goto LABEL_9;
            case 8:
              v17 = *(_QWORD *)(a3 + 8);
              if ( !v17 )
                return 0;
              v14 = (unsigned __int64)v36 % v17 == 0;
              goto LABEL_15;
            default:
              return 0;
          }
        }
        return 0;
      case 3:
        v27 = (char *)a1 + a1[24];
        v28 = (unsigned __int64)&v27[a1[25]];
        v29 = &v27[*(_QWORD *)(a3 + 8)];
        if ( (unsigned __int64)v29 >= v28 )
          return 0;
        for ( i = v29; *i; ++i )
        {
          if ( (unsigned __int64)i >= v28 )
            break;
        }
        v31 = (_DWORD)i - (_DWORD)v29;
        if ( !v31 )
          goto LABEL_26;
        if ( v10 == 20 )
          goto LABEL_91;
        if ( v10 == 21 )
        {
          v9 = 1;
LABEL_91:
          v12 = v9;
          if ( v31 > a5 )
            goto LABEL_9;
          v33 = *v29;
          v34 = &a4[a5 - (unsigned __int64)v31 + 1];
          v12 = 0;
          while ( 1 )
          {
            if ( v6 >= v34 )
              goto LABEL_62;
            if ( *v6 == v33 && !strncmp(v6, v29, v31) )
              break;
            v38 = ++v6;
          }
          v12 = 1;
        }
        else
        {
          if ( v10 != 30 )
          {
            if ( v10 != 31 )
              return 0;
            v9 = 1;
          }
          v12 = v9;
          if ( v31 != a5 )
            goto LABEL_9;
          v12 = 1;
          v32 = v29;
          while ( 1 )
          {
            if ( !v31 )
              goto LABEL_62;
            if ( *v6 != *v29 )
              break;
            v38 = ++v6;
            v29 = v32 + 1;
            v32 = v29;
            v36 = v29;
            --v31;
          }
          v12 = 0;
        }
        goto LABEL_62;
      case 4:
        if ( (a5 & 1) != 0 )
          return 0;
        v18 = a5 >> 1;
        v19 = (char *)a1 + a1[22];
        v20 = (unsigned __int64)&v19[2 * ((unsigned __int64)a1[23] >> 1)];
        v21 = *(_QWORD *)(a3 + 8);
        v22 = (const wchar_t *)&v19[2 * v21];
        if ( (unsigned __int64)v22 >= v20 )
          return 0;
        v23 = &v19[2 * v21];
        v24 = *v22;
        if ( *v22 )
        {
          do
          {
            if ( (unsigned __int64)v23 >= v20 )
              break;
            v23 += 2;
          }
          while ( *(_WORD *)v23 );
        }
        v25 = (v23 - (char *)v22) >> 1;
        if ( !(_DWORD)v25 )
        {
LABEL_26:
          v12 = 0;
          goto LABEL_9;
        }
        if ( v10 == 20 )
          goto LABEL_65;
        if ( v10 == 21 )
        {
          v9 = 1;
LABEL_65:
          v12 = v9;
          if ( (unsigned int)v25 > v18 )
            goto LABEL_9;
          v26 = &a4[2 * (v18 - (unsigned __int64)(unsigned int)v25) + 2];
          v12 = 0;
          while ( 1 )
          {
            if ( v6 >= v26 )
              goto LABEL_62;
            if ( *(_WORD *)v6 == v24 && !wcsncmp((const wchar_t *)v6, v22, (unsigned int)v25) )
              break;
            v6 += 2;
            v37 = v6;
          }
          v12 = 1;
        }
        else
        {
          if ( v10 != 30 )
          {
            if ( v10 != 31 )
              return 0;
            v9 = 1;
          }
          v12 = v9;
          if ( (_DWORD)v25 != v18 )
            goto LABEL_9;
          v12 = 1;
          while ( 1 )
          {
            if ( !(_DWORD)v25 )
              goto LABEL_62;
            if ( *v22 != *(_WORD *)v6 )
              break;
            v6 += 2;
            v37 = v6;
            v39 = ++v22;
            LODWORD(v25) = v25 - 1;
          }
          v12 = 0;
        }
LABEL_62:
        if ( !v9 )
          goto LABEL_9;
        break;
      default:
        return 0;
    }
LABEL_10:
    v14 = !v12;
LABEL_15:
    v12 = v14;
    goto LABEL_9;
  }
  if ( a5 != 16 )
    return 0;
  v11 = *(_QWORD *)a4 - *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)a4 == *(_QWORD *)(a3 + 8) )
    v11 = *((_QWORD *)a4 + 1) - *(_QWORD *)(a3 + 16);
  v12 = v11 == 0;
  if ( v10 != 30 )
  {
    if ( v10 != 31 )
      return 0;
    goto LABEL_10;
  }
LABEL_9:
  *a6 = v12;
  return 1;
}
