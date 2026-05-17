/*
 * XREFs of RtlpMergeSecurityAttributeInformation @ 0x1800E9520
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800E994C (RtlpIsAttributeAceInSacl.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpMergeSecurityAttributeInformation(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 Heap; // rbx
  char v5; // di
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // r12d
  __int64 v12; // r9
  _BYTE *v13; // rbp
  unsigned int v14; // r14d
  _BYTE *i; // rdi
  __int64 v16; // r8
  unsigned int v17; // r14d
  _BYTE *v18; // rdi
  unsigned int v19; // r14d
  _BYTE *v20; // rdi
  __int64 v21; // r8
  unsigned int v22; // r12d
  _WORD *v23; // r14
  unsigned int v24; // r15d
  _WORD *v25; // r14
  unsigned int v27; // edi
  unsigned int v28; // [rsp+20h] [rbp-48h]
  char v29; // [rsp+80h] [rbp+18h] BYREF
  char v30; // [rsp+88h] [rbp+20h]

  v30 = a4;
  Heap = 0LL;
  v5 = a4;
  v29 = 0;
  if ( !a3 )
  {
    v27 = -1073741811;
    goto LABEL_69;
  }
  if ( a1 )
  {
    v9 = *(unsigned __int16 *)(a1 + 2);
    if ( !a2 )
    {
      v10 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    if ( !a2 )
    {
LABEL_65:
      *a3 = Heap;
      return 0LL;
    }
    v9 = 0;
  }
  v10 = *(unsigned __int16 *)(a2 + 2);
LABEL_5:
  v11 = v10 + v9;
  v28 = v10 + v9;
  if ( (unsigned int)(v10 + v9) < 8 )
  {
    v27 = -1073741705;
  }
  else
  {
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v11);
    if ( Heap )
    {
      v13 = (_BYTE *)(Heap + 8);
      *(_QWORD *)Heap = 0LL;
      *(_BYTE *)Heap = 2;
      *(_WORD *)(Heap + 2) = 8;
      if ( a1 )
      {
        v14 = 0;
        for ( i = (_BYTE *)(a1 + 8); ; i += *((unsigned __int16 *)i + 1) )
        {
          if ( v14 >= *(unsigned __int16 *)(a1 + 4) )
          {
            v5 = v30;
            break;
          }
          if ( *i == 18 && (i[1] & 0x10) == 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(i, Heap, 0LL, &v29) )
          {
            if ( a2 && !v30 && (LOBYTE(v16) = 1, (unsigned __int8)RtlpIsAttributeAceInSacl(i, a2, v16, &v29)) && v29 )
            {
              *(_WORD *)(Heap + 2) += *((_WORD *)i + 1);
              if ( *(unsigned __int16 *)(Heap + 2) > v11 )
              {
LABEL_68:
                v27 = -1073741705;
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v12);
                goto LABEL_69;
              }
              memmove(v13, i, *((unsigned __int16 *)i + 1));
              ++*(_WORD *)(Heap + 4);
              v13[1] |= 0x10u;
            }
            else
            {
              *(_WORD *)(Heap + 2) += *((_WORD *)i + 1);
              if ( *(unsigned __int16 *)(Heap + 2) > v11 )
                goto LABEL_68;
              memmove(v13, i, *((unsigned __int16 *)i + 1));
              ++*(_WORD *)(Heap + 4);
            }
            v13 += *((unsigned __int16 *)i + 1);
          }
          ++v14;
        }
      }
      if ( a2 && v5 )
      {
        v17 = 0;
        v18 = (_BYTE *)(a2 + 8);
        while ( v17 < *(unsigned __int16 *)(a2 + 4) )
        {
          if ( *v18 == 18 && (v18[1] & 0x10) == 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v18, Heap, 0LL, &v29) )
          {
            *(_WORD *)(Heap + 2) += *((_WORD *)v18 + 1);
            if ( *(unsigned __int16 *)(Heap + 2) > v11 )
              goto LABEL_68;
            memmove(v13, v18, *((unsigned __int16 *)v18 + 1));
            ++*(_WORD *)(Heap + 4);
            v13 += *((unsigned __int16 *)v18 + 1);
          }
          ++v17;
          v18 += *((unsigned __int16 *)v18 + 1);
        }
      }
      if ( a1 )
      {
        v19 = 0;
        v20 = (_BYTE *)(a1 + 8);
        while ( v19 < *(unsigned __int16 *)(a1 + 4) )
        {
          if ( *v20 == 18 && (v20[1] & 0x10) != 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v20, Heap, 0LL, &v29) )
          {
            if ( a2 && (LOBYTE(v21) = 1, (unsigned __int8)RtlpIsAttributeAceInSacl(v20, a2, v21, &v29)) && v29 )
            {
              *(_WORD *)(Heap + 2) += *((_WORD *)v20 + 1);
              if ( *(unsigned __int16 *)(Heap + 2) > v11 )
                goto LABEL_68;
              memmove(v13, v20, *((unsigned __int16 *)v20 + 1));
              ++*(_WORD *)(Heap + 4);
              v13[1] |= 0x10u;
            }
            else
            {
              *(_WORD *)(Heap + 2) += *((_WORD *)v20 + 1);
              if ( *(unsigned __int16 *)(Heap + 2) > v11 )
                goto LABEL_68;
              memmove(v13, v20, *((unsigned __int16 *)v20 + 1));
              ++*(_WORD *)(Heap + 4);
              v13[1] &= ~0x10u;
            }
            v13 += *((unsigned __int16 *)v20 + 1);
          }
          ++v19;
          v20 += *((unsigned __int16 *)v20 + 1);
        }
        v22 = 0;
        v23 = (_WORD *)(a1 + 8);
        while ( v22 < *(unsigned __int16 *)(a1 + 4) )
        {
          if ( *(_BYTE *)v23 != 18 )
          {
            *(_WORD *)(Heap + 2) += v23[1];
            if ( *(unsigned __int16 *)(Heap + 2) > v28 )
              goto LABEL_68;
            memmove(v13, v23, (unsigned __int16)v23[1]);
            ++*(_WORD *)(Heap + 4);
            v13 += (unsigned __int16)v23[1];
          }
          ++v22;
          v23 = (_WORD *)((char *)v23 + (unsigned __int16)v23[1]);
        }
        v11 = v28;
      }
      if ( a2 && v30 )
      {
        v24 = 0;
        v25 = (_WORD *)(a2 + 8);
        while ( v24 < *(unsigned __int16 *)(a2 + 4) )
        {
          if ( *(_BYTE *)v25 != 18 )
          {
            *(_WORD *)(Heap + 2) += v25[1];
            if ( *(unsigned __int16 *)(Heap + 2) > v11 )
              goto LABEL_68;
            memmove(v13, v25, (unsigned __int16)v25[1]);
            ++*(_WORD *)(Heap + 4);
            v13 += (unsigned __int16)v25[1];
          }
          ++v24;
          v25 = (_WORD *)((char *)v25 + (unsigned __int16)v25[1]);
        }
      }
      goto LABEL_65;
    }
    v27 = -1073741801;
  }
LABEL_69:
  *a3 = 0LL;
  return v27;
}
