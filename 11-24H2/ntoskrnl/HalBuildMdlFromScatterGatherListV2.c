/*
 * XREFs of HalBuildMdlFromScatterGatherListV2 @ 0x140444590
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 */

__int64 __fastcall HalBuildMdlFromScatterGatherListV2(__int64 a1, unsigned int *a2, struct _MDL *a3, struct _MDL **a4)
{
  __int64 v7; // rbx
  unsigned int v8; // r9d
  unsigned int *v9; // r15
  struct _MDL *v10; // rdi
  _QWORD *p_Next; // r14
  int v12; // eax
  unsigned int v13; // r8d
  ULONG v14; // edx
  unsigned int v15; // r12d
  char v16; // cl
  PMDL v17; // rax
  struct _MDL *v18; // r8
  int v19; // eax
  unsigned int *v20; // r11
  struct _MDL *v21; // r14
  char v22; // dl
  __int64 v23; // rbp
  unsigned __int64 v24; // r10
  __int64 v25; // rsi
  struct _MDL *v26; // rdx
  unsigned __int64 v27; // r9
  __int64 v28; // r10
  unsigned int v29; // r9d
  __int64 v30; // rbp
  __int16 v31; // ax
  __int64 v32; // rax
  PMDL Mdl; // rax
  struct _MDL *Next; // rbx
  unsigned int v35; // [rsp+30h] [rbp-38h]
  __int64 v36; // [rsp+38h] [rbp-30h]
  unsigned int v37; // [rsp+80h] [rbp+18h]

  if ( !a3 )
    return 3221225485LL;
  if ( !*(_BYTE *)(a1 + 440) && *(_BYTE *)(a1 + 445) )
  {
    *a4 = a3;
    return 0LL;
  }
  v7 = *((_QWORD *)a2 + 1);
  if ( v7 && *(_QWORD *)(v7 + 16) )
    return 3221225587LL;
  v8 = *a2;
  v9 = a2 + 4;
  v10 = 0LL;
  v35 = *a2;
  p_Next = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 1;
  while ( v15 < v8 )
  {
    v28 = *(_QWORD *)v9;
    v29 = v9[2];
    v30 = *(_QWORD *)v9 & 0xFFFLL;
    v36 = *(_QWORD *)v9;
    v37 = v29;
    if ( !v16 && (v12 || (_DWORD)v30) )
    {
      Mdl = IoAllocateMdl((PVOID)v13, v14, 1u, 0, 0LL);
      if ( !Mdl )
        goto LABEL_31;
      Mdl->MdlFlags |= 0x2802u;
      if ( v10 )
        *p_Next = Mdl;
      else
        v10 = Mdl;
      v29 = v37;
      v14 = 0;
      LOWORD(v28) = v36;
      v16 = 0;
      p_Next = &Mdl->Next;
    }
    else
    {
      v16 = 0;
      if ( v14 )
        goto LABEL_25;
    }
    v13 = v30;
LABEL_25:
    v31 = v28 + v29;
    v14 += v29;
    v8 = v35;
    v12 = v31 & 0xFFF;
    v9 += 6;
    ++v15;
  }
  if ( !v14 )
  {
LABEL_14:
    v18 = v10 + 1;
    v19 = 0;
    v20 = a2 + 4;
    v21 = v10;
    v22 = 1;
    if ( *a2 )
    {
      v23 = *a2;
      do
      {
        v24 = *(_QWORD *)v20;
        v25 = v20[2];
        if ( !v22 && (v19 || (v24 & 0xFFF) != 0) )
        {
          v21 = v21->Next;
          v18 = v21 + 1;
        }
        v26 = (struct _MDL *)(v24 >> 12);
        v27 = ((*(_QWORD *)v20 & 0xFFFuLL) + v25 + 4095) >> 12;
        if ( (_DWORD)v27 )
        {
          v32 = (unsigned int)v27;
          do
          {
            v18->Next = v26;
            v18 = (struct _MDL *)((char *)v18 + 8);
            v26 = (struct _MDL *)((char *)v26 + 1);
            --v32;
          }
          while ( v32 );
        }
        v22 = 0;
        v19 = (v24 + v25) & 0xFFF;
        v20 += 6;
        --v23;
      }
      while ( v23 );
    }
    *a4 = v10;
    if ( v7 )
      *(_QWORD *)(v7 + 16) = v10;
    return 0LL;
  }
  v17 = IoAllocateMdl((PVOID)v13, v14, 1u, 0, 0LL);
  if ( v17 )
  {
    v17->MdlFlags |= 0x2802u;
    if ( v10 )
      *p_Next = v17;
    else
      v10 = v17;
    goto LABEL_14;
  }
LABEL_31:
  if ( v10 )
  {
    do
    {
      Next = v10->Next;
      IoFreeMdl(v10);
      v10 = Next;
    }
    while ( Next );
  }
  return 3221225626LL;
}
