/*
 * XREFs of RtlpCreateServerAcl @ 0x1800BE59C
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800BEAF0 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1800C0E40 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x1800C5940 (RtlCreateAcl.c)
 *     RtlUShortAdd @ 0x180137D08 (RtlUShortAdd.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpCreateServerAcl(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  __int64 v6; // rcx
  _BYTE *v9; // rax
  unsigned __int16 *v10; // rdi
  unsigned int v11; // ebp
  unsigned __int16 v12; // r9
  unsigned int v13; // r11d
  __int64 v14; // r10
  __int64 result; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r10
  int v19; // r11d
  ACL *Heap; // rax
  ULONG v21; // edx
  ACL *v22; // r15
  unsigned int v23; // ebp
  unsigned int v24; // eax
  char *v25; // rbx
  unsigned __int8 *v26; // r15
  char v27; // al
  char *v28; // r12
  unsigned __int8 *v29; // r14
  char *v30; // rbx
  char *v31; // rbx
  __int64 v32; // rcx
  __int16 v33; // ax
  ACL *v34; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+70h] [rbp+18h]

  Src = a3;
  v6 = 8LL;
  LOWORD(v34) = 8;
  if ( !a1 )
  {
    v9 = a5;
    *a4 = 0LL;
    *v9 = 0;
    return 0LL;
  }
  v10 = (unsigned __int16 *)(a1 + 8);
  v11 = *(unsigned __int16 *)(a1 + 4);
  v12 = 4 * (a3[1] + 2);
  v13 = 0;
  v14 = a1 + 8;
  while ( v13 < v11 )
  {
    if ( *(_BYTE *)v14 )
    {
      if ( !a2 || *(_BYTE *)v14 != 4 )
        goto LABEL_15;
      v17 = (unsigned __int16)(4 * *(unsigned __int8 *)(v14 + 13));
      v16 = (unsigned int)(v17 + 8);
      if ( (unsigned __int16)(v17 + 8) <= v12 )
      {
        v16 = v12;
        LOWORD(v16) = v12 - v17 - 8;
      }
      else
      {
        LOWORD(v16) = v17 + 8 - v12;
      }
    }
    else
    {
      result = RtlUShortAdd(v6, v12, &v34);
      if ( (int)result < 0 )
        return result;
      v6 = (unsigned __int16)v34;
      v16 = 4LL;
    }
    result = RtlUShortAdd(v6, v16, &v34);
    if ( (int)result < 0 )
      return result;
    v6 = (unsigned __int16)v34;
LABEL_15:
    result = RtlUShortAdd(v6, *(unsigned __int16 *)(v14 + 2), &v34);
    if ( (int)result < 0 )
      return result;
    v13 = v19 + 1;
    v6 = (unsigned __int16)v34;
    v14 = *(unsigned __int16 *)(v18 + 2) + v18;
  }
  Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, (unsigned __int16)v6);
  *a4 = Heap;
  if ( !Heap )
    return 3221225626LL;
  v21 = (unsigned __int16)v34;
  *a5 = 1;
  RtlCreateAcl(Heap, v21, 3u);
  v22 = *a4;
  v23 = 0;
  LOWORD(v24) = *(_WORD *)(a1 + 4);
  v34 = v22;
  v25 = (char *)&v22[1];
  if ( (_WORD)v24 )
  {
    v26 = (unsigned __int8 *)Src;
    do
    {
      v27 = *(_BYTE *)v10;
      if ( !*(_BYTE *)v10 || a2 && v27 == 4 )
      {
        v28 = v25;
        if ( v27 )
          v29 = (unsigned __int8 *)&v10[2 * *((unsigned __int8 *)v10 + 13) + 10];
        else
          v29 = (unsigned __int8 *)(v10 + 4);
        *(_QWORD *)v25 = *(_QWORD *)v10;
        v30 = v25 + 12;
        memmove(v30, v26, 4LL * v26[1] + 8);
        v31 = &v30[(unsigned __int8)(4 * (v26[1] + 2))];
        memmove(v31, v29, 4LL * v29[1] + 8);
        v32 = v29[1];
        v33 = v26[1] + 7;
        *v28 = 4;
        *((_WORD *)v28 + 4) = 1;
        v25 = &v31[4 * v32 + 8];
        *((_WORD *)v28 + 1) = 4 * (v33 + v32);
      }
      else
      {
        memmove(v25, v10, v10[1]);
        v25 += v10[1];
      }
      ++v23;
      v10 = (unsigned __int16 *)((char *)v10 + v10[1]);
      v24 = *(unsigned __int16 *)(a1 + 4);
    }
    while ( v23 < v24 );
    v22 = v34;
  }
  v22->AceCount = v24;
  return 0LL;
}
