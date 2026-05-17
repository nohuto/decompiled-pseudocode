/*
 * XREFs of RtlQuerySecurityObject @ 0x18010D880
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFilterSacl @ 0x18013A864 (RtlpFilterSacl.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlQuerySecurityObject(__int64 a1, __int16 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // r13d
  unsigned __int16 *v11; // r14
  __int64 v12; // rbx
  unsigned __int8 *v13; // r15
  unsigned int v14; // r12d
  unsigned int v15; // ecx
  char *v17; // rbp
  unsigned __int8 *v18; // rbp
  int v19; // eax
  __int64 v20; // rbx
  int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-68h]
  int v23; // [rsp+24h] [rbp-64h]
  int v24; // [rsp+28h] [rbp-60h]
  unsigned __int8 *Src; // [rsp+30h] [rbp-58h]
  unsigned int v26; // [rsp+90h] [rbp+8h] BYREF
  int v27; // [rsp+98h] [rbp+10h]
  size_t Size; // [rsp+A0h] [rbp+18h]
  unsigned int v29; // [rsp+A8h] [rbp+20h]

  v29 = a4;
  v8 = 0;
  v22 = 0;
  v26 = 0;
  v9 = 0;
  LODWORD(Size) = 0;
  Src = 0LL;
  v24 = a2 & 2;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v13 = *(unsigned __int8 **)(a1 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 8) )
        goto LABEL_2;
      v13 = (unsigned __int8 *)(a1 + *(unsigned int *)(a1 + 8));
    }
    if ( v13 )
      v22 = (4 * v13[1] + 11) & 0xFFFFFFFC;
  }
LABEL_2:
  v23 = a2 & 4;
  if ( (a2 & 4) != 0 && (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v11 = *(unsigned __int16 **)(a1 + 32);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 16) )
        goto LABEL_3;
      v11 = (unsigned __int16 *)(a1 + *(unsigned int *)(a1 + 16));
    }
    if ( v11 )
      v10 = (v11[1] + 3) & 0xFFFFFFFC;
  }
LABEL_3:
  v14 = a2 & 0x1F8;
  if ( (a2 & 0x1F8) != 0 && (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v12 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 12) )
        goto LABEL_4;
      v12 = a1 + *(unsigned int *)(a1 + 12);
    }
    if ( v12 )
    {
      RtlpFilterSacl(v12, 0LL, &v26, a2 & 0x1F8);
      v8 = v26;
      v9 = Size;
      a4 = v29;
    }
  }
LABEL_4:
  v27 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v18 = *(unsigned __int8 **)(a1 + 8);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 4) )
      {
        Src = 0LL;
        goto LABEL_5;
      }
      v18 = (unsigned __int8 *)(a1 + *(unsigned int *)(a1 + 4));
    }
    Src = v18;
    if ( v18 )
    {
      v9 = (4 * v18[1] + 11) & 0xFFFFFFFC;
      LODWORD(Size) = v9;
    }
  }
LABEL_5:
  v15 = v10 + v9 + v8 + v22 + 20;
  *a5 = v15;
  if ( v15 > a4 || !a3 )
    return 3221225507LL;
  v17 = (char *)(a3 + 20);
  *(_OWORD *)a3 = 0LL;
  *(_DWORD *)(a3 + 16) = 0;
  *(_WORD *)(a3 + 2) |= 0x8000u;
  *(_BYTE *)a3 = 1;
  if ( v14 )
  {
    if ( v8 )
    {
      RtlpFilterSacl(v12, a3 + 20, &v26, v14);
      *(_DWORD *)(a3 + 12) = 20;
      v17 += v26;
    }
    *(_WORD *)(a3 + 2) |= *(_WORD *)(a1 + 2) & 0x2830;
  }
  if ( v23 )
  {
    if ( v10 )
    {
      memmove(v17, v11, v10);
      v19 = (int)v17;
      v17 += v10;
      *(_DWORD *)(a3 + 16) = v19 - a3;
    }
    *(_WORD *)(a3 + 2) |= *(_WORD *)(a1 + 2) & 0x140C;
  }
  if ( v27 )
  {
    if ( (_DWORD)Size )
    {
      v20 = (unsigned int)Size;
      memmove(v17, Src, (unsigned int)Size);
      v21 = (int)v17;
      v17 += v20;
      *(_DWORD *)(a3 + 4) = v21 - a3;
    }
    *(_WORD *)(a3 + 2) |= *(_WORD *)(a1 + 2) & 1;
  }
  if ( v24 )
  {
    if ( v22 )
    {
      memmove(v17, v13, v22);
      *(_DWORD *)(a3 + 8) = (_DWORD)v17 - a3;
    }
    *(_WORD *)(a3 + 2) |= *(_WORD *)(a1 + 2) & 2;
  }
  return 0LL;
}
