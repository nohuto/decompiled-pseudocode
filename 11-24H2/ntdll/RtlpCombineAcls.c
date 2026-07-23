/*
 * XREFs of RtlpCombineAcls @ 0x1800C2C00
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800BEAF0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlCreateAcl @ 0x1800C5940 (RtlCreateAcl.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int16 **a7,
        _DWORD *a8)
{
  unsigned int v8; // ebx
  unsigned __int16 *v13; // r15
  ULONG v14; // r12d
  unsigned __int8 *v15; // r13
  unsigned __int8 *v16; // rcx
  unsigned int v18; // edx
  unsigned int v19; // r10d
  unsigned __int8 *v20; // r8
  unsigned int v21; // ecx
  unsigned int v22; // r12d
  ACL *Heap; // rax
  unsigned __int16 *v24; // r9
  unsigned int i; // ecx
  unsigned __int16 *v26; // rax
  unsigned __int16 *v27; // rdi
  unsigned int v28; // ecx
  unsigned __int16 *v29; // rax
  unsigned __int16 *v30; // rdi
  unsigned __int16 *v31; // rdi
  unsigned int m; // esi
  unsigned __int16 *v33; // rsi
  unsigned int k; // r13d
  unsigned __int16 *v35; // rax
  unsigned __int16 *v36; // rdi
  unsigned int j; // esi
  unsigned __int16 *v38; // rax
  unsigned int v39; // edx
  unsigned __int16 *v40; // r13
  unsigned int v41; // ecx
  unsigned __int8 *v42; // r8
  unsigned int v43; // ecx
  unsigned __int8 *v44; // r8
  unsigned int v45; // r8d
  unsigned __int8 *v46; // r9
  unsigned int v47; // r9d
  unsigned __int8 *v48; // r8
  unsigned int v49; // r8d
  unsigned __int8 *v50; // r9
  NTSTATUS Acl; // [rsp+20h] [rbp-38h]
  unsigned __int16 *v52; // [rsp+28h] [rbp-30h]
  unsigned int AclLength; // [rsp+60h] [rbp+8h]
  ULONG AclLengtha; // [rsp+60h] [rbp+8h]
  ULONG AclLengthb; // [rsp+60h] [rbp+8h]

  v8 = 0;
  v13 = 0LL;
  v14 = 2;
  if ( a1 || a2 || a3 || a4 )
  {
    v15 = (unsigned __int8 *)a5;
    v16 = (unsigned __int8 *)a6;
  }
  else
  {
    v15 = (unsigned __int8 *)a5;
    v16 = (unsigned __int8 *)a6;
    if ( __PAIR128__(a6, a5) == 0 )
    {
      *a7 = 0LL;
      return 0LL;
    }
  }
  v18 = 8;
  if ( a1 )
  {
    v47 = 0;
    v48 = a1 + 8;
    while ( v47 < *((unsigned __int16 *)a1 + 2) )
    {
      if ( *v48 != 16 )
      {
        switch ( *v48 )
        {
          case 2u:
          case 3u:
          case 7u:
          case 8u:
          case 0xDu:
          case 0xEu:
          case 0xFu:
            break;
          default:
            goto LABEL_102;
        }
      }
      if ( v18 + *((unsigned __int16 *)v48 + 1) < v18 )
        goto LABEL_24;
      v18 += *((unsigned __int16 *)v48 + 1);
      if ( a8 )
        *a8 |= 8u;
      if ( *a1 > v14 )
        v14 = *a1;
LABEL_102:
      ++v47;
      v48 += *((unsigned __int16 *)v48 + 1);
    }
    v16 = (unsigned __int8 *)a6;
  }
  if ( a2 )
  {
    v19 = 0;
    v20 = a2 + 8;
    while ( v19 < *((unsigned __int16 *)a2 + 2) )
    {
      if ( *v20 == 17 )
      {
        if ( v18 + *((unsigned __int16 *)v20 + 1) < v18 )
          goto LABEL_24;
        v18 += *((unsigned __int16 *)v20 + 1);
        if ( a8 )
          *a8 |= 0x10u;
        if ( *a2 > v14 )
          v14 = *a2;
      }
      ++v19;
      v20 += *((unsigned __int16 *)v20 + 1);
    }
  }
  if ( v15 )
  {
    v49 = 0;
    v50 = v15 + 8;
    while ( v49 < *((unsigned __int16 *)v15 + 2) )
    {
      if ( *v50 == 20 )
      {
        if ( v18 + *((unsigned __int16 *)v50 + 1) < v18 )
          goto LABEL_24;
        v18 += *((unsigned __int16 *)v50 + 1);
        if ( a8 )
          *a8 |= 0x80u;
        if ( *v15 > v14 )
          v14 = *v15;
      }
      ++v49;
      v50 += *((unsigned __int16 *)v50 + 1);
    }
  }
  if ( v16 )
  {
    v45 = 0;
    v46 = v16 + 8;
    while ( v45 < *((unsigned __int16 *)v16 + 2) )
    {
      if ( *v46 == 21 )
      {
        if ( v18 + *((unsigned __int16 *)v46 + 1) < v18 )
          goto LABEL_24;
        v18 += *((unsigned __int16 *)v46 + 1);
        if ( a8 )
          *a8 |= 0x100u;
        if ( *v16 > v14 )
          v14 = *v16;
      }
      ++v45;
      v46 += *((unsigned __int16 *)v46 + 1);
    }
  }
  if ( a3 )
  {
    v41 = 0;
    v42 = a3 + 8;
    while ( v41 < *((unsigned __int16 *)a3 + 2) )
    {
      if ( *v42 == 18 )
      {
        if ( v18 + *((unsigned __int16 *)v42 + 1) < v18 )
          goto LABEL_24;
        v18 += *((unsigned __int16 *)v42 + 1);
        if ( a8 )
          *a8 |= 0x20u;
        if ( *a3 > v14 )
          v14 = *a3;
      }
      ++v41;
      v42 += *((unsigned __int16 *)v42 + 1);
    }
  }
  if ( a4 )
  {
    v43 = 0;
    v44 = a4 + 8;
    while ( v43 < *((unsigned __int16 *)a4 + 2) )
    {
      if ( *v44 == 19 )
      {
        if ( v18 + *((unsigned __int16 *)v44 + 1) < v18 )
          goto LABEL_24;
        v18 += *((unsigned __int16 *)v44 + 1);
        if ( a8 )
          *a8 |= 0x40u;
        if ( *a4 > v14 )
          v14 = *a4;
      }
      ++v43;
      v44 += *((unsigned __int16 *)v44 + 1);
    }
  }
  v21 = v18 + 3;
  if ( v18 + 3 < v18 )
  {
LABEL_24:
    v22 = -1073741675;
LABEL_25:
    *a7 = v13;
    return v22;
  }
  AclLength = v21 & 0xFFFFFFFC;
  Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v21 & 0xFFFFFFFC);
  v13 = (unsigned __int16 *)Heap;
  if ( !Heap )
  {
    v22 = -1073741801;
    goto LABEL_25;
  }
  Acl = RtlCreateAcl(Heap, AclLength, v14);
  v22 = Acl;
  if ( Acl >= 0 )
  {
    v24 = v13 + 4;
    for ( i = 0; ; ++i )
    {
      v26 = (unsigned __int16 *)((char *)v13 + v13[1]);
      if ( i >= v13[2] )
        break;
      if ( v24 >= v26 )
      {
        v22 = -1073741699;
        goto LABEL_50;
      }
      v24 = (unsigned __int16 *)((char *)v24 + v24[1]);
    }
    if ( v24 > v26 )
      v24 = 0LL;
    v52 = v24;
    if ( a1 )
    {
      v39 = 0;
      AclLengthb = 0;
      if ( *((_WORD *)a1 + 2) )
      {
        v40 = (unsigned __int16 *)(a1 + 8);
        do
        {
          if ( *(_BYTE *)v40 == 16 )
          {
LABEL_69:
            memmove(v24, v40, v40[1]);
            ++v13[2];
            v39 = AclLengthb;
            v24 = (unsigned __int16 *)((char *)v52 + v40[1]);
            v52 = v24;
          }
          else
          {
            switch ( *(_BYTE *)v40 )
            {
              case 2:
              case 3:
              case 7:
              case 8:
              case 0xD:
              case 0xE:
              case 0xF:
                goto LABEL_69;
              default:
                break;
            }
          }
          ++v39;
          v40 = (unsigned __int16 *)((char *)v40 + v40[1]);
          AclLengthb = v39;
        }
        while ( v39 < *((unsigned __int16 *)a1 + 2) );
        v15 = (unsigned __int8 *)a5;
        v22 = Acl;
      }
    }
    if ( a2 )
    {
      v27 = (unsigned __int16 *)(a2 + 8);
      v28 = 0;
      for ( AclLengtha = 0; v28 < *((unsigned __int16 *)a2 + 2); AclLengtha = v28 )
      {
        v29 = v27 + 1;
        if ( *(_BYTE *)v27 == 17 )
        {
          memmove(v24, v27, *v29);
          ++v13[2];
          v28 = AclLengtha;
          v24 = (unsigned __int16 *)((char *)v52 + v27[1]);
          v29 = v27 + 1;
          v52 = v24;
        }
        ++v28;
        v27 = (unsigned __int16 *)((char *)v27 + *v29);
      }
    }
    if ( v15 )
    {
      v36 = (unsigned __int16 *)(v15 + 8);
      for ( j = 0; j < *((unsigned __int16 *)v15 + 2); v36 = (unsigned __int16 *)((char *)v36 + *v38) )
      {
        v38 = v36 + 1;
        if ( *(_BYTE *)v36 == 20 )
        {
          memmove(v24, v36, *v38);
          ++v13[2];
          v24 = (unsigned __int16 *)((char *)v52 + v36[1]);
          v38 = v36 + 1;
          v52 = v24;
        }
        ++j;
      }
    }
    if ( a6 )
    {
      v33 = (unsigned __int16 *)(a6 + 8);
      for ( k = 0; k < *(unsigned __int16 *)(a6 + 4); v33 = (unsigned __int16 *)((char *)v33 + *v35) )
      {
        v35 = v33 + 1;
        if ( *(_BYTE *)v33 == 21 )
        {
          memmove(v24, v33, *v35);
          ++v13[2];
          v24 = (unsigned __int16 *)((char *)v52 + v33[1]);
          v35 = v33 + 1;
          v52 = v24;
        }
        ++k;
      }
    }
    if ( a3 )
    {
      v31 = (unsigned __int16 *)(a3 + 8);
      for ( m = 0; m < *((unsigned __int16 *)a3 + 2); v31 = (unsigned __int16 *)((char *)v31 + v31[1]) )
      {
        if ( *(_BYTE *)v31 == 18 )
        {
          memmove(v24, v31, v31[1]);
          ++v13[2];
          v24 = (unsigned __int16 *)((char *)v52 + v31[1]);
          v52 = v24;
        }
        ++m;
      }
    }
    if ( a4 )
    {
      v30 = (unsigned __int16 *)(a4 + 8);
      if ( *((_WORD *)a4 + 2) )
      {
        do
        {
          if ( *(_BYTE *)v30 == 19 )
          {
            memmove(v24, v30, v30[1]);
            ++v13[2];
            v24 = (unsigned __int16 *)((char *)v52 + v30[1]);
            v52 = v24;
          }
          ++v8;
          v30 = (unsigned __int16 *)((char *)v30 + v30[1]);
        }
        while ( v8 < *((unsigned __int16 *)a4 + 2) );
      }
    }
    goto LABEL_25;
  }
LABEL_50:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
  *a7 = 0LL;
  return v22;
}
