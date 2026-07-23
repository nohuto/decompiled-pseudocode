/*
 * XREFs of RtlpNormalizeAcl @ 0x140856694
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x1404AACB0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall RtlpNormalizeAcl(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r9d
  char *v4; // r12
  char *v6; // r11
  unsigned int v8; // ecx
  int v9; // edx
  unsigned int v10; // eax
  char *v11; // rdi
  char v12; // r10
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  unsigned __int16 v15; // si
  size_t v16; // r8
  unsigned int v17; // ecx
  char *i; // r15
  unsigned __int16 v19; // dx
  int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  char v23; // r8
  char v24; // di
  unsigned __int64 v26; // rbx
  int v27; // ebx
  int v28; // ecx
  int v29; // ebx
  __int64 j; // rdx
  int v31; // [rsp+24h] [rbp-84h]
  int v32; // [rsp+28h] [rbp-80h]
  unsigned __int16 v33; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v34; // [rsp+30h] [rbp-78h]
  unsigned int v35; // [rsp+38h] [rbp-70h]
  unsigned int v36; // [rsp+3Ch] [rbp-6Ch]
  char *v37; // [rsp+40h] [rbp-68h]
  char *v38; // [rsp+48h] [rbp-60h]
  unsigned __int64 v40; // [rsp+58h] [rbp-50h]

  v3 = 0;
  v31 = 0;
  v4 = (char *)(a1 + 8);
  v37 = (char *)(a1 + 8);
  v6 = (char *)(a2 + 8);
  v32 = 8;
  v38 = v6;
  v8 = *(unsigned __int16 *)(a2 + 4);
  v9 = 8;
  v10 = 0;
  v36 = v8;
  v11 = v6;
  while ( 1 )
  {
    v35 = v10;
    if ( v10 >= v8 )
      break;
    v12 = 0;
    v13 = 0LL;
    v14 = 0;
    if ( a3 )
    {
      v14 = 8;
      if ( *((_WORD *)v11 + 1) < 8u || (unsigned __int8)*v11 > 0xAu && (unsigned __int8)(*v11 - 13) > 1u )
        goto LABEL_37;
      v40 = *(_QWORD *)v11;
      v13 = *(_QWORD *)v11;
      if ( (*(_QWORD *)v11 & 0x800LL) == 0 )
      {
        v26 = HIDWORD(v40);
        if ( (v40 & 0x8000000000000000uLL) != 0LL )
          LODWORD(v26) = *a3 | HIDWORD(v40);
        if ( (v26 & 0x40000000) != 0 )
          LODWORD(v26) = a3[1] | v26;
        if ( (v26 & 0x20000000) != 0 )
          LODWORD(v26) = a3[2] | v26;
        if ( (v26 & 0x10000000) != 0 )
          LODWORD(v26) = a3[3] | v26;
        v27 = v26 & 0xFFFFFFF;
        if ( (unsigned __int8)v40 <= 0xAu && (v28 = 1651, _bittest(&v28, (unsigned __int8)v40)) )
          v29 = a3[3] & v27;
        else
          v29 = (a3[3] | 0x1000000) & v27;
        HIDWORD(v40) = v29;
        v13 = v40;
      }
      if ( v13 == *(_QWORD *)v11 )
LABEL_37:
        v14 = 0;
    }
    v15 = *((_WORD *)v11 + 1);
    v16 = v15 - v14;
    if ( *v11 )
      goto LABEL_11;
    v17 = 0;
    for ( i = v6; ; i += v19 )
    {
      v34 = v17;
      if ( v17 >= v3 )
      {
        v12 = 0;
        goto LABEL_10;
      }
      v19 = *((_WORD *)i + 1);
      v33 = v19;
      if ( v19 == v15 && (!v14 || *(_QWORD *)i == v13) )
        break;
LABEL_8:
      ++v17;
    }
    v20 = memcmp(&i[v14], &v11[v14], v16);
    v16 = v15 - v14;
    v3 = v31;
    if ( v20 )
    {
      v17 = v34;
      v19 = v33;
      goto LABEL_8;
    }
    v12 = 1;
LABEL_10:
    v9 = v32;
    v4 = v37;
LABEL_11:
    if ( v12 )
    {
      if ( a1 )
        goto LABEL_19;
      return 1;
    }
    v9 += v15;
    v32 = v9;
    if ( a1 )
    {
      if ( v14 )
        *(_QWORD *)v4 = v13;
      if ( v4 != v11 )
      {
        memmove(&v4[v14], &v11[v14], v16);
        v9 = v32;
      }
      v3 = v31;
      v4 += *((unsigned __int16 *)v4 + 1);
      v37 = v4;
    }
    v31 = ++v3;
LABEL_19:
    v11 += v15;
    v6 = v38;
    v10 = v35 + 1;
    v8 = v36;
  }
  v21 = (v9 + 3) & 0xFFFFFFFC;
  v22 = v21 - v9;
  if ( v21 != v9 )
  {
    for ( j = 0LL; (unsigned int)j < v22; j = (unsigned int)(j + 1) )
    {
      if ( v11[j] )
      {
        v23 = 1;
        goto LABEL_25;
      }
    }
  }
  v23 = 0;
LABEL_25:
  v24 = v23;
  if ( v21 != *(unsigned __int16 *)(a2 + 2) )
    v24 = 1;
  if ( a1 )
  {
    if ( v22 )
    {
      memset_0(v4, 0, v22);
      LOWORD(v3) = v31;
    }
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_WORD *)(a1 + 2) = v21;
    *(_WORD *)(a1 + 4) = v3;
  }
  return v24;
}
