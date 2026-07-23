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

BOOLEAN __cdecl RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        PULONG NewSecurityDescriptorLength,
        BOOLEAN CheckOnly)
{
  _DWORD *v5; // rbp
  SIZE_T v6; // rbx
  _DWORD *Heap; // rdi
  BOOLEAN v9; // r14
  __int64 v10; // rcx
  ULONG v11; // ebx
  char *v12; // r13
  unsigned int v13; // r12d
  __int64 v15; // r15
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  char *v18; // r12
  __int64 v19; // r15
  int v20; // eax
  unsigned __int8 *v21; // r15
  ULONG v22; // eax
  ULONG v23; // r12d
  unsigned __int8 *v24; // r15
  ULONG v25; // eax
  ULONG v26; // r12d
  PSECURITY_DESCRIPTOR *v27; // rax
  char v29; // [rsp+78h] [rbp+10h]

  v5 = *SecurityDescriptor;
  v6 = SecurityDescriptorLength;
  v29 = 0;
  Heap = 0LL;
  v9 = 0;
  if ( RtlValidSecurityDescriptor(*SecurityDescriptor) && (unsigned int)v6 >= RtlLengthSecurityDescriptor(v5) )
  {
    if ( CheckOnly )
      goto LABEL_9;
    if ( NewSecurityDescriptor )
    {
      Heap = *NewSecurityDescriptor;
      if ( *NewSecurityDescriptor )
      {
LABEL_8:
        *(_OWORD *)Heap = *(_OWORD *)v5;
        Heap[4] = v5[4];
LABEL_9:
        v10 = (unsigned int)v5[3];
        v11 = 20;
        if ( (_DWORD)v10 )
        {
          v12 = (char *)v5 + v10;
          v13 = *(_WORD *)((char *)v5 + v10 + 4) != 0 ? 0x14 : 0;
          v9 = v13 != (_DWORD)v10;
          if ( v13 != (_DWORD)v10 && CheckOnly )
          {
LABEL_12:
            if ( !v9 )
              goto LABEL_13;
LABEL_52:
            if ( !CheckOnly )
            {
              v27 = NewSecurityDescriptor;
              if ( NewSecurityDescriptor )
              {
                if ( !v29 )
                  goto LABEL_58;
              }
              else
              {
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
                v27 = SecurityDescriptor;
              }
              *v27 = Heap;
LABEL_58:
              if ( NewSecurityDescriptorLength )
                *NewSecurityDescriptorLength = v11;
              return v9;
            }
LABEL_13:
            if ( v29 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
            return v9;
          }
          if ( *((_WORD *)v12 + 2) )
          {
            if ( CheckOnly )
              v15 = 0LL;
            else
              v15 = (__int64)Heap + v13;
            v9 |= RtlpNormalizeAcl(v15, (__int64)v5 + v10, 0LL);
            if ( v9 && CheckOnly )
              goto LABEL_52;
            if ( CheckOnly )
            {
              v16 = *((_WORD *)v12 + 1);
            }
            else
            {
              Heap[3] = v13;
              v16 = *(_WORD *)(v15 + 2);
            }
            v11 = v16 + 20;
          }
          else
          {
            v9 = 1;
            if ( CheckOnly )
              goto LABEL_13;
            Heap[3] = 0;
          }
        }
        v17 = (unsigned int)v5[4];
        if ( (_DWORD)v17 )
        {
          v9 |= v11 != (_DWORD)v17;
          if ( v9 && CheckOnly )
            goto LABEL_13;
          v18 = (char *)v5 + v17;
          v19 = CheckOnly ? 0LL : (__int64)Heap + v11;
          v9 |= RtlpNormalizeAcl(v19, (__int64)v5 + v17, 0LL);
          if ( v9 )
          {
            if ( CheckOnly )
              goto LABEL_13;
          }
          if ( CheckOnly )
          {
            v20 = *((unsigned __int16 *)v18 + 1);
          }
          else
          {
            Heap[4] = v11;
            v20 = *(unsigned __int16 *)(v19 + 2);
          }
          v11 += v20;
        }
        if ( v11 != v5[1] )
        {
          v9 = 1;
          if ( CheckOnly )
            goto LABEL_13;
          Heap[1] = v11;
        }
        v21 = (unsigned __int8 *)v5 + (unsigned int)v5[1];
        v22 = RtlLengthRequiredSid(v21[1]);
        v23 = v22;
        if ( !CheckOnly )
          memmove((char *)Heap + (unsigned int)Heap[1], v21, v22);
        v11 += v23;
        if ( v5[2] )
        {
          if ( v11 != v5[2] )
          {
            v9 = 1;
            if ( CheckOnly )
              goto LABEL_13;
            Heap[2] = v11;
          }
          v24 = (unsigned __int8 *)v5 + (unsigned int)v5[2];
          v25 = RtlLengthRequiredSid(v24[1]);
          v26 = v25;
          if ( !CheckOnly )
            memmove((char *)Heap + (unsigned int)Heap[2], v24, v25);
          v11 += v26;
        }
        goto LABEL_12;
      }
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v6);
    if ( Heap )
    {
      v29 = 1;
      goto LABEL_8;
    }
  }
  return 0;
}
