/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x1801393B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLengthRequiredSid @ 0x180001330 (RtlLengthRequiredSid.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlValidSecurityDescriptor @ 0x180039690 (RtlValidSecurityDescriptor.c)
 *     RtlpNormalizeAcl @ 0x1800C84D4 (RtlpNormalizeAcl.c)
 *     RtlLengthSecurityDescriptor @ 0x1800E9F10 (RtlLengthSecurityDescriptor.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

char __fastcall RtlNormalizeSecurityDescriptor(
        __int64 *a1,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned int *a4,
        char a5)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 Heap; // rdi
  char v9; // r14
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r13
  unsigned int v13; // r12d
  __int64 v15; // r15
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // r15
  int v20; // eax
  unsigned __int8 *v21; // r15
  unsigned int v22; // eax
  unsigned int v23; // r12d
  unsigned __int8 *v24; // r15
  unsigned int v25; // eax
  unsigned int v26; // r12d
  _QWORD *v27; // rax
  char v29; // [rsp+78h] [rbp+10h]

  v5 = *a1;
  v6 = a2;
  v29 = 0;
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
        v10 = *(unsigned int *)(v5 + 12);
        v11 = 20;
        if ( (_DWORD)v10 )
        {
          v12 = v10 + v5;
          v13 = *(_WORD *)(v10 + v5 + 4) != 0 ? 0x14 : 0;
          v9 = v13 != (_DWORD)v10;
          if ( v13 != (_DWORD)v10 && a5 )
          {
LABEL_12:
            if ( !v9 )
              goto LABEL_13;
LABEL_52:
            if ( !a5 )
            {
              v27 = a3;
              if ( a3 )
              {
                if ( !v29 )
                  goto LABEL_58;
              }
              else
              {
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
                v27 = a1;
              }
              *v27 = Heap;
LABEL_58:
              if ( a4 )
                *a4 = v11;
              return v9;
            }
LABEL_13:
            if ( v29 )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
            return v9;
          }
          if ( *(_WORD *)(v12 + 4) )
          {
            if ( a5 )
              v15 = 0LL;
            else
              v15 = Heap + v13;
            v9 |= RtlpNormalizeAcl(v15, v10 + v5, 0LL);
            if ( v9 && a5 )
              goto LABEL_52;
            if ( a5 )
            {
              v16 = *(_WORD *)(v12 + 2);
            }
            else
            {
              *(_DWORD *)(Heap + 12) = v13;
              v16 = *(_WORD *)(v15 + 2);
            }
            v11 = v16 + 20;
          }
          else
          {
            v9 = 1;
            if ( a5 )
              goto LABEL_13;
            *(_DWORD *)(Heap + 12) = 0;
          }
        }
        v17 = *(unsigned int *)(v5 + 16);
        if ( (_DWORD)v17 )
        {
          v9 |= v11 != (_DWORD)v17;
          if ( v9 && a5 )
            goto LABEL_13;
          v18 = v17 + v5;
          v19 = a5 ? 0LL : Heap + v11;
          v9 |= RtlpNormalizeAcl(v19, v17 + v5, 0LL);
          if ( v9 )
          {
            if ( a5 )
              goto LABEL_13;
          }
          if ( a5 )
          {
            v20 = *(unsigned __int16 *)(v18 + 2);
          }
          else
          {
            *(_DWORD *)(Heap + 16) = v11;
            v20 = *(unsigned __int16 *)(v19 + 2);
          }
          v11 += v20;
        }
        if ( v11 != *(_DWORD *)(v5 + 4) )
        {
          v9 = 1;
          if ( a5 )
            goto LABEL_13;
          *(_DWORD *)(Heap + 4) = v11;
        }
        v21 = (unsigned __int8 *)(v5 + *(unsigned int *)(v5 + 4));
        v22 = RtlLengthRequiredSid(v21[1]);
        v23 = v22;
        if ( !a5 )
          memmove((void *)(Heap + *(unsigned int *)(Heap + 4)), v21, v22);
        v11 += v23;
        if ( *(_DWORD *)(v5 + 8) )
        {
          if ( v11 != *(_DWORD *)(v5 + 8) )
          {
            v9 = 1;
            if ( a5 )
              goto LABEL_13;
            *(_DWORD *)(Heap + 8) = v11;
          }
          v24 = (unsigned __int8 *)(v5 + *(unsigned int *)(v5 + 8));
          v25 = RtlLengthRequiredSid(v24[1]);
          v26 = v25;
          if ( !a5 )
            memmove((void *)(Heap + *(unsigned int *)(Heap + 8)), v24, v25);
          v11 += v26;
        }
        goto LABEL_12;
      }
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v6);
    if ( Heap )
    {
      v29 = 1;
      goto LABEL_8;
    }
  }
  return 0;
}
