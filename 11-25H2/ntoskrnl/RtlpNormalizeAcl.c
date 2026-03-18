/*
 * XREFs of RtlpNormalizeAcl @ 0x14091B380
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x1404AF6B0 (RtlNormalizeSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall RtlpNormalizeAcl(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  _DWORD *v5; // r10
  __int64 v6; // r15
  char *v7; // rdi
  unsigned int v8; // ecx
  int v9; // r8d
  unsigned int v10; // esi
  unsigned int v11; // eax
  char *v12; // r14
  int v13; // ebx
  __int64 v14; // rdx
  unsigned int v15; // r12d
  __int64 v16; // rbp
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  __int64 i; // r13
  __int64 v20; // r15
  char *v21; // rbx
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  char v24; // dl
  char v25; // bp
  unsigned __int64 v27; // rdx
  int v28; // edx
  int v29; // edx
  int v30; // [rsp+24h] [rbp-94h]
  unsigned int v31; // [rsp+28h] [rbp-90h]
  unsigned __int64 v32; // [rsp+30h] [rbp-88h]
  unsigned int v33; // [rsp+38h] [rbp-80h]
  unsigned int v34; // [rsp+3Ch] [rbp-7Ch]
  __int64 v37; // [rsp+50h] [rbp-68h]
  __int64 v39; // [rsp+60h] [rbp-58h]

  v3 = 0LL;
  v4 = a2 + 8;
  v5 = a3;
  v6 = a1;
  v37 = a2 + 8;
  v7 = (char *)(a1 + 8);
  v8 = *(unsigned __int16 *)(a2 + 4);
  v9 = 8;
  v30 = 8;
  v10 = 0;
  v34 = v8;
  v11 = 0;
  v12 = (char *)(a2 + 8);
  while ( 1 )
  {
    v31 = v11;
    v13 = 1651;
    if ( v11 >= v8 )
      break;
    v14 = 0LL;
    v15 = 0;
    v32 = 0LL;
    if ( v5 )
    {
      v15 = 8;
      if ( *((_WORD *)v12 + 1) < 8u || (unsigned __int8)*v12 > 0xAu && (unsigned __int8)(*v12 - 13) > 1u )
        goto LABEL_33;
      v32 = *(_QWORD *)v12;
      v14 = *(_QWORD *)v12;
      v39 = *(_QWORD *)v12;
      if ( (*(_QWORD *)v12 & 0x800LL) == 0 )
      {
        v27 = HIDWORD(v32);
        if ( (v32 & 0x8000000000000000uLL) != 0LL )
          LODWORD(v27) = *v5 | HIDWORD(v32);
        if ( (v27 & 0x40000000) != 0 )
          LODWORD(v27) = v5[1] | v27;
        if ( (v27 & 0x20000000) != 0 )
          LODWORD(v27) = v5[2] | v27;
        if ( (v27 & 0x10000000) != 0 )
          LODWORD(v27) = v5[3] | v27;
        v28 = v27 & 0xFFFFFFF;
        if ( (unsigned __int8)v39 <= 0xAu && _bittest(&v13, (unsigned __int8)v39) )
          v29 = v5[3] & v28;
        else
          v29 = (v5[3] | 0x1000000) & v28;
        HIDWORD(v39) = v29;
        v14 = v39;
        v32 = v39;
      }
      if ( v14 == *(_QWORD *)v12 )
LABEL_33:
        v15 = 0;
    }
    v16 = *((unsigned __int16 *)v12 + 1);
    v17 = *((unsigned __int16 *)v12 + 1) - v15;
    v33 = v17;
    if ( *v12 )
    {
LABEL_10:
      v21 = &v12[(unsigned __int16)v16];
      v30 = (unsigned __int16)v16 + v9;
      if ( v6 )
      {
        if ( v15 )
          *(_QWORD *)v7 = v14;
        if ( v7 != v12 )
          memmove(&v7[v15], &v12[v15], v17);
        v7 += *((unsigned __int16 *)v7 + 1);
      }
      ++v10;
      goto LABEL_17;
    }
    v18 = 0;
    for ( i = v4; ; i += v20 )
    {
      if ( v18 >= v10 )
      {
        v6 = a1;
        v9 = v30;
        goto LABEL_10;
      }
      v20 = *(unsigned __int16 *)(i + 2);
      if ( (_WORD)v20 == (_WORD)v16 && (!v15 || *(_QWORD *)i == v14) )
        break;
LABEL_8:
      v14 = v32;
      ++v18;
    }
    if ( memcmp((const void *)(v15 + i), &v12[v15], v17) )
    {
      v17 = v33;
      goto LABEL_8;
    }
    v6 = a1;
    v21 = &v12[v16];
    if ( !a1 )
      return 1;
LABEL_17:
    v12 = v21;
    v9 = v30;
    v11 = v31 + 1;
    v8 = v34;
    v3 = 0LL;
    v5 = a3;
    v4 = v37;
  }
  v22 = (v9 + 3) & 0xFFFFFFFC;
  v23 = v22 - v9;
  if ( v22 != v9 )
  {
    while ( (unsigned int)v3 < v23 )
    {
      if ( v12[v3] )
      {
        v24 = 1;
        goto LABEL_23;
      }
      v3 = (unsigned int)(v3 + 1);
    }
  }
  v24 = 0;
LABEL_23:
  v25 = v24;
  if ( v22 != *(unsigned __int16 *)(a2 + 2) )
    v25 = 1;
  if ( v6 )
  {
    if ( v23 )
      memset_0(v7, 0, v23);
    *(_QWORD *)v6 = *(_QWORD *)a2;
    *(_WORD *)(v6 + 2) = v22;
    *(_WORD *)(v6 + 4) = v10;
  }
  return v25;
}
