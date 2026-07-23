/*
 * XREFs of RtlpNormalizeAcl @ 0x1800C0094
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800BEAF0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1801375E0 (RtlNormalizeSecurityDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpNormalizeAcl(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  char *v4; // r12
  unsigned int v6; // ecx
  __int64 v7; // r11
  int v9; // r8d
  char *v10; // rdi
  unsigned int v11; // eax
  char v12; // r10
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  unsigned __int64 v15; // rbx
  int v16; // ebx
  int v17; // ecx
  int v18; // ebx
  unsigned __int16 v19; // si
  unsigned int v20; // edx
  unsigned int v21; // ecx
  __int64 i; // r15
  int v23; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  __int64 j; // rdx
  char v28; // r10
  char v29; // di
  int v30; // [rsp+24h] [rbp-84h]
  int v31; // [rsp+28h] [rbp-80h]
  unsigned int v32; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v33; // [rsp+34h] [rbp-74h]
  unsigned int v34; // [rsp+38h] [rbp-70h]
  __int64 v35; // [rsp+40h] [rbp-68h]
  unsigned __int64 v37; // [rsp+50h] [rbp-58h]

  v3 = 0;
  v4 = (char *)(a1 + 8);
  v30 = 0;
  v6 = *(unsigned __int16 *)(a2 + 4);
  v7 = a2 + 8;
  v34 = v6;
  v31 = 8;
  v9 = 8;
  v35 = a2 + 8;
  v10 = (char *)(a2 + 8);
  v11 = 0;
  while ( 1 )
  {
    v33 = v11;
    if ( v11 >= v6 )
      break;
    v12 = 0;
    v13 = 0LL;
    v14 = 0;
    if ( a3 )
    {
      v14 = 8;
      if ( *((_WORD *)v10 + 1) < 8u || (unsigned __int8)*v10 >= 0xBu && (unsigned __int8)(*v10 - 13) > 1u )
        goto LABEL_20;
      v37 = *(_QWORD *)v10;
      v13 = *(_QWORD *)v10;
      if ( (*(_QWORD *)v10 & 0x800LL) == 0 )
      {
        v15 = HIDWORD(v37);
        if ( (v37 & 0x8000000000000000uLL) != 0LL )
          LODWORD(v15) = *a3 | HIDWORD(v37);
        if ( (v15 & 0x40000000) != 0 )
          LODWORD(v15) = a3[1] | v15;
        if ( (v15 & 0x20000000) != 0 )
          LODWORD(v15) = a3[2] | v15;
        if ( (v15 & 0x10000000) != 0 )
          LODWORD(v15) = a3[3] | v15;
        v16 = v15 & 0xFFFFFFF;
        if ( (unsigned __int8)v37 <= 0xAu && (v17 = 1651, _bittest(&v17, (unsigned __int8)v37)) )
          v18 = a3[3] & v16;
        else
          v18 = (a3[3] | 0x1000000) & v16;
        HIDWORD(v37) = v18;
        v13 = v37;
      }
      if ( v13 == *(_QWORD *)v10 )
LABEL_20:
        v14 = 0;
    }
    v19 = *((_WORD *)v10 + 1);
    v20 = v19 - v14;
    if ( !*v10 )
    {
      v21 = 0;
      for ( i = v7; ; i += *(unsigned __int16 *)(i + 2) )
      {
        v32 = v21;
        if ( v21 >= v3 )
          break;
        if ( *(_WORD *)(i + 2) == v19 && (!v14 || *(_QWORD *)i == v13) )
        {
          v23 = memcmp((const void *)(v14 + i), &v10[v14], v20);
          v20 = v19 - v14;
          v3 = v30;
          if ( !v23 )
          {
            v12 = 1;
            goto LABEL_29;
          }
          v21 = v32;
        }
        ++v21;
      }
      v12 = 0;
LABEL_29:
      v9 = v31;
    }
    if ( v12 )
    {
      if ( !a1 )
        return 1;
    }
    else
    {
      v9 += v19;
      v31 = v9;
      if ( a1 )
      {
        if ( v14 )
          *(_QWORD *)v4 = v13;
        if ( v4 != v10 )
        {
          memmove(&v4[v14], &v10[v14], v20);
          v9 = v31;
        }
        v3 = v30;
        v4 += *((unsigned __int16 *)v4 + 1);
      }
      v30 = ++v3;
    }
    v10 += v19;
    v7 = v35;
    v11 = v33 + 1;
    v6 = v34;
  }
  v25 = (v9 + 3) & 0xFFFFFFFC;
  v26 = v25 - v9;
  if ( v25 != v9 )
  {
    for ( j = 0LL; (unsigned int)j < v26; j = (unsigned int)(j + 1) )
    {
      if ( v10[j] )
      {
        v28 = 1;
        goto LABEL_39;
      }
    }
  }
  v28 = 0;
LABEL_39:
  v29 = v28;
  if ( v25 != *(unsigned __int16 *)(a2 + 2) )
    v29 = 1;
  if ( a1 )
  {
    if ( v26 )
    {
      memset_thunk_772440563353939046(v4, 0, v26);
      LOWORD(v3) = v30;
    }
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_WORD *)(a1 + 2) = v25;
    *(_WORD *)(a1 + 4) = v3;
  }
  return v29;
}
