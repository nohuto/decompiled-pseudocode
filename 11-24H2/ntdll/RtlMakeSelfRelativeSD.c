/*
 * XREFs of RtlMakeSelfRelativeSD @ 0x1800CEFB0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800CEBBC (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1800CEF90 (RtlAbsoluteToSelfRelativeSD.c)
 * Callees:
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlMakeSelfRelativeSD(__int64 a1, char *a2, unsigned int *a3)
{
  __int16 v3; // r9
  int v4; // ebp
  unsigned __int8 *v7; // rax
  unsigned int v8; // ecx
  unsigned int *v9; // rax
  unsigned __int16 *v10; // r12
  size_t v11; // rbx
  unsigned __int8 *v12; // rax
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  unsigned int v15; // ecx
  char *v16; // rsi
  int v17; // eax
  int v18; // ebp
  unsigned __int16 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int Size; // [rsp+70h] [rbp+8h]
  unsigned __int16 *v26; // [rsp+78h] [rbp+10h]
  unsigned __int8 *Src; // [rsp+80h] [rbp+18h]
  unsigned __int8 *v28; // [rsp+88h] [rbp+20h]

  v3 = *(_WORD *)(a1 + 2);
  v4 = 0;
  if ( v3 < 0 )
  {
    v22 = *(unsigned int *)(a1 + 4);
    if ( !(_DWORD)v22 )
    {
      Src = 0LL;
      goto LABEL_43;
    }
    v7 = (unsigned __int8 *)(a1 + v22);
  }
  else
  {
    v7 = *(unsigned __int8 **)(a1 + 8);
  }
  Src = v7;
  if ( v7 )
  {
    v8 = (4 * v7[1] + 11) & 0xFFFFFFFC;
    goto LABEL_5;
  }
LABEL_43:
  v8 = 0;
LABEL_5:
  Size = v8;
  v9 = (unsigned int *)(a1 + 16);
  if ( (v3 & 4) == 0 )
  {
LABEL_6:
    v10 = 0LL;
LABEL_7:
    v11 = 0LL;
    goto LABEL_12;
  }
  if ( v3 < 0 )
  {
    v23 = *v9;
    if ( !(_DWORD)v23 )
      goto LABEL_6;
    v10 = (unsigned __int16 *)(a1 + v23);
  }
  else
  {
    v10 = *(unsigned __int16 **)(a1 + 32);
  }
  if ( !v10 )
    goto LABEL_7;
  v11 = (v10[1] + 3) & 0xFFFFFFFC;
LABEL_12:
  if ( v3 < 0 )
  {
    v21 = *(unsigned int *)(a1 + 8);
    if ( !(_DWORD)v21 )
    {
      v28 = 0LL;
      goto LABEL_37;
    }
    v12 = (unsigned __int8 *)(a1 + v21);
  }
  else
  {
    v12 = *(unsigned __int8 **)v9;
  }
  v28 = v12;
  if ( v12 )
  {
    v13 = (4 * v12[1] + 11) & 0xFFFFFFFC;
    goto LABEL_16;
  }
LABEL_37:
  v13 = 0;
LABEL_16:
  if ( (v3 & 0x10) == 0 )
  {
LABEL_17:
    v26 = 0LL;
LABEL_18:
    v14 = 0;
    goto LABEL_19;
  }
  if ( v3 < 0 )
  {
    v24 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v24 )
      goto LABEL_17;
    v20 = (unsigned __int16 *)(a1 + v24);
  }
  else
  {
    v20 = *(unsigned __int16 **)(a1 + 24);
  }
  v26 = v20;
  if ( !v20 )
    goto LABEL_18;
  v14 = (v20[1] + 3) & 0xFFFFFFFC;
LABEL_19:
  v15 = v11 + v14 + v13 + v8 + 20;
  if ( v15 > *a3 )
  {
    *a3 = v15;
    return 3221225507LL;
  }
  else if ( a2 )
  {
    memset_thunk_772440563353939046(a2, 0, v15);
    v16 = a2 + 20;
    *(_DWORD *)a2 = *(_DWORD *)a1;
    if ( v14 )
    {
      memmove(a2 + 20, v26, v14);
      v16 += v14;
      v17 = 20;
    }
    else
    {
      v17 = 0;
    }
    *((_DWORD *)a2 + 3) = v17;
    if ( (_DWORD)v11 )
    {
      memmove(v16, v10, v11);
      v18 = (int)v16;
      v16 += v11;
      v4 = v18 - (_DWORD)a2;
    }
    *((_DWORD *)a2 + 4) = v4;
    if ( Size )
    {
      memmove(v16, Src, Size);
      *((_DWORD *)a2 + 1) = (_DWORD)v16 - (_DWORD)a2;
      v16 += Size;
    }
    if ( v13 )
    {
      memmove(v16, v28, v13);
      *((_DWORD *)a2 + 2) = (_DWORD)v16 - (_DWORD)a2;
    }
    *((_WORD *)a2 + 1) |= 0x8000u;
    return 0LL;
  }
  else
  {
    return 3221225485LL;
  }
}
