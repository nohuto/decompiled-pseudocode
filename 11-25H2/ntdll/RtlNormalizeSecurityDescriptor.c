/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x18013AB20
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlValidSecurityDescriptor @ 0x18005FFD0 (RtlValidSecurityDescriptor.c)
 *     RtlLengthRequiredSid @ 0x180060A20 (RtlLengthRequiredSid.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpNormalizeAcl @ 0x1800E8044 (RtlpNormalizeAcl.c)
 *     RtlLengthSecurityDescriptor @ 0x1800EB2D0 (RtlLengthSecurityDescriptor.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

char __fastcall RtlNormalizeSecurityDescriptor(__int64 *a1, unsigned int a2, __int64 *a3, unsigned int *a4, char a5)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  __int64 Heap; // rdi
  char v9; // r14
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // r13
  unsigned int v14; // r12d
  __int64 v16; // r15
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // r15
  int v21; // eax
  unsigned __int8 *v22; // r15
  unsigned int v23; // eax
  unsigned int v24; // r12d
  unsigned __int8 *v25; // r15
  unsigned int v26; // eax
  unsigned int v27; // r12d
  __int64 *v28; // rax
  char v30; // [rsp+78h] [rbp+10h]

  v5 = *a1;
  v6 = a2;
  v30 = 0;
  Heap = 0LL;
  v9 = 0;
  if ( RtlValidSecurityDescriptor(*a1) && (unsigned int)v6 >= (unsigned int)RtlLengthSecurityDescriptor(v5) )
  {
    if ( a5 )
      goto LABEL_9;
    if ( a3 )
    {
      Heap = *a3;
      if ( *a3 )
      {
LABEL_8:
        *(_OWORD *)Heap = *(_OWORD *)v5;
        *(_DWORD *)(Heap + 16) = *(_DWORD *)(v5 + 16);
LABEL_9:
        v11 = *(unsigned int *)(v5 + 12);
        v12 = 20;
        if ( (_DWORD)v11 )
        {
          v13 = v11 + v5;
          v14 = *(_WORD *)(v11 + v5 + 4) != 0 ? 0x14 : 0;
          v9 = v14 != (_DWORD)v11;
          if ( v14 != (_DWORD)v11 && a5 )
          {
LABEL_12:
            if ( !v9 )
              goto LABEL_13;
LABEL_52:
            if ( !a5 )
            {
              v28 = a3;
              if ( a3 )
              {
                if ( !v30 )
                  goto LABEL_58;
              }
              else
              {
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5, v10);
                v28 = a1;
              }
              *v28 = Heap;
LABEL_58:
              if ( a4 )
                *a4 = v12;
              return v9;
            }
LABEL_13:
            if ( v30 )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v10);
            return v9;
          }
          if ( *(_WORD *)(v13 + 4) )
          {
            if ( a5 )
              v16 = 0LL;
            else
              v16 = Heap + v14;
            v9 |= RtlpNormalizeAcl(v16, v11 + v5, 0LL);
            if ( v9 && a5 )
              goto LABEL_52;
            if ( a5 )
            {
              v17 = *(_WORD *)(v13 + 2);
            }
            else
            {
              *(_DWORD *)(Heap + 12) = v14;
              v17 = *(_WORD *)(v16 + 2);
            }
            v12 = v17 + 20;
          }
          else
          {
            v9 = 1;
            if ( a5 )
              goto LABEL_13;
            *(_DWORD *)(Heap + 12) = 0;
          }
        }
        v18 = *(unsigned int *)(v5 + 16);
        if ( (_DWORD)v18 )
        {
          v9 |= v12 != (_DWORD)v18;
          if ( v9 && a5 )
            goto LABEL_13;
          v19 = v18 + v5;
          v20 = a5 ? 0LL : Heap + v12;
          v9 |= RtlpNormalizeAcl(v20, v18 + v5, 0LL);
          if ( v9 )
          {
            if ( a5 )
              goto LABEL_13;
          }
          if ( a5 )
          {
            v21 = *(unsigned __int16 *)(v19 + 2);
          }
          else
          {
            *(_DWORD *)(Heap + 16) = v12;
            v21 = *(unsigned __int16 *)(v20 + 2);
          }
          v12 += v21;
        }
        if ( v12 != *(_DWORD *)(v5 + 4) )
        {
          v9 = 1;
          if ( a5 )
            goto LABEL_13;
          *(_DWORD *)(Heap + 4) = v12;
        }
        v22 = (unsigned __int8 *)(v5 + *(unsigned int *)(v5 + 4));
        v23 = RtlLengthRequiredSid(v22[1]);
        v24 = v23;
        if ( !a5 )
          memmove((void *)(Heap + *(unsigned int *)(Heap + 4)), v22, v23);
        v12 += v24;
        if ( *(_DWORD *)(v5 + 8) )
        {
          if ( v12 != *(_DWORD *)(v5 + 8) )
          {
            v9 = 1;
            if ( a5 )
              goto LABEL_13;
            *(_DWORD *)(Heap + 8) = v12;
          }
          v25 = (unsigned __int8 *)(v5 + *(unsigned int *)(v5 + 8));
          v26 = RtlLengthRequiredSid(v25[1]);
          v27 = v26;
          if ( !a5 )
            memmove((void *)(Heap + *(unsigned int *)(Heap + 8)), v25, v26);
          v12 += v27;
        }
        goto LABEL_12;
      }
    }
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v6);
    if ( Heap )
    {
      v30 = 1;
      goto LABEL_8;
    }
  }
  return 0;
}
