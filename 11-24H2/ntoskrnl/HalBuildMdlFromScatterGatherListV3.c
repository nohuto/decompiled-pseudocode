/*
 * XREFs of HalBuildMdlFromScatterGatherListV3 @ 0x14047B100
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 */

__int64 __fastcall HalBuildMdlFromScatterGatherListV3(__int64 a1, unsigned int *a2, struct _MDL *a3, struct _MDL **a4)
{
  __int64 v8; // rsi
  struct _MDL *v9; // rax
  unsigned int v10; // r10d
  unsigned int *v11; // r13
  struct _MDL *v12; // rdi
  _QWORD *p_Next; // r12
  int v14; // eax
  unsigned int v15; // r8d
  ULONG v16; // edx
  unsigned int v17; // r9d
  char v18; // cl
  __int64 v19; // r11
  unsigned int v20; // r10d
  __int64 v21; // rbp
  PMDL Mdl; // rax
  __int16 v23; // ax
  PMDL v24; // rax
  struct _MDL *Next; // rbx
  struct _MDL *v26; // r8
  int v27; // eax
  unsigned int *v28; // r11
  struct _MDL *v29; // rbp
  char v30; // dl
  __int64 v31; // r12
  unsigned __int64 v32; // r10
  __int64 v33; // r15
  struct _MDL *v34; // rdx
  unsigned __int64 v35; // r9
  __int64 v36; // rax
  unsigned int v37; // [rsp+30h] [rbp-48h]
  __int64 v38; // [rsp+38h] [rbp-40h]
  unsigned int v39; // [rsp+80h] [rbp+8h]
  unsigned int v40; // [rsp+90h] [rbp+18h]

  if ( !a3 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 520) == 3 )
  {
    if ( !*(_BYTE *)(a1 + 445) )
      return 3221225474LL;
LABEL_4:
    *a4 = a3;
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 440) && *(_BYTE *)(a1 + 445) )
    goto LABEL_4;
  v8 = *((_QWORD *)a2 + 1);
  if ( v8 )
    v9 = *(struct _MDL **)(v8 + 16);
  else
    v9 = *(struct _MDL **)(a1 + 552);
  if ( v9 )
  {
    *a4 = v9;
    return 0LL;
  }
  v10 = *a2;
  v11 = a2 + 4;
  v12 = 0LL;
  v37 = *a2;
  p_Next = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 1;
  while ( 1 )
  {
    v39 = v17;
    if ( v17 >= v10 )
      break;
    v19 = *(_QWORD *)v11;
    v20 = v11[2];
    v21 = *(_QWORD *)v11 & 0xFFFLL;
    v38 = *(_QWORD *)v11;
    v40 = v20;
    if ( !v18 && (v14 || (_DWORD)v21) )
    {
      Mdl = IoAllocateMdl((PVOID)v15, v16, 1u, 0, 0LL);
      if ( !Mdl )
        goto LABEL_32;
      Mdl->MdlFlags |= 0x2802u;
      if ( v12 )
        *p_Next = Mdl;
      else
        v12 = Mdl;
      v17 = v39;
      v16 = 0;
      v20 = v40;
      v18 = 0;
      LOWORD(v19) = v38;
      p_Next = &Mdl->Next;
    }
    else
    {
      v18 = 0;
      if ( v16 )
        goto LABEL_27;
    }
    v15 = v21;
LABEL_27:
    v23 = v19 + v20;
    v16 += v20;
    v10 = v37;
    v14 = v23 & 0xFFF;
    v11 += 6;
    ++v17;
  }
  if ( v16 )
  {
    v24 = IoAllocateMdl((PVOID)v15, v16, 1u, 0, 0LL);
    if ( !v24 )
    {
LABEL_32:
      if ( v12 )
      {
        do
        {
          Next = v12->Next;
          IoFreeMdl(v12);
          v12 = Next;
        }
        while ( Next );
      }
      return 3221225626LL;
    }
    v24->MdlFlags |= 0x2802u;
    if ( v12 )
      *p_Next = v24;
    else
      v12 = v24;
  }
  v26 = v12 + 1;
  v27 = 0;
  v28 = a2 + 4;
  v29 = v12;
  v30 = 1;
  if ( *a2 )
  {
    v31 = *a2;
    do
    {
      v32 = *(_QWORD *)v28;
      v33 = v28[2];
      if ( !v30 && (v27 || (v32 & 0xFFF) != 0) )
      {
        v29 = v29->Next;
        v26 = v29 + 1;
      }
      v34 = (struct _MDL *)(v32 >> 12);
      v35 = ((*(_QWORD *)v28 & 0xFFFuLL) + v33 + 4095) >> 12;
      if ( (_DWORD)v35 )
      {
        v36 = (unsigned int)v35;
        do
        {
          v26->Next = v34;
          v26 = (struct _MDL *)((char *)v26 + 8);
          v34 = (struct _MDL *)((char *)v34 + 1);
          --v36;
        }
        while ( v36 );
      }
      v30 = 0;
      v27 = (v32 + v33) & 0xFFF;
      v28 += 6;
      --v31;
    }
    while ( v31 );
  }
  *a4 = v12;
  if ( v8 )
    *(_QWORD *)(v8 + 16) = v12;
  else
    *(_QWORD *)(a1 + 552) = v12;
  return 0LL;
}
