/*
 * XREFs of RtlCopyContext @ 0x1800DA4A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyLegacyContextX86 @ 0x1800DAA50 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyXStateChunk @ 0x1800DACA0 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContextAmd64 @ 0x18012180C (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextArm @ 0x1801219FC (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x1801451FC (RtlpCopyLegacyContextArm64.c)
 */

__int64 __fastcall RtlCopyContext(int *a1, int a2, _DWORD *a3)
{
  int v3; // ebx
  _DWORD *v4; // r10
  __int64 v7; // r15
  bool v8; // cl
  __int64 result; // rax
  int *v10; // r12
  int *v11; // rsi
  int v12; // r12d
  int v13; // esi
  int v14; // r9d
  bool v15; // cl
  unsigned int v16; // esi
  int v17; // r14d
  bool v18; // cl
  int v19; // r9d
  __int64 v20; // rcx
  unsigned int v21; // ebp
  int *v22; // [rsp+30h] [rbp-48h]
  char v23; // [rsp+88h] [rbp+10h]
  int v25; // [rsp+98h] [rbp+20h]

  v3 = 0;
  v4 = a3;
  v7 = 0LL;
  if ( (a2 & 0x27FFFF80) != 0x10000
    && (a2 & 0x7FFFF20) != 0x100000
    && (a2 & 0x7FFFFF0) != 0x200000
    && (a2 & 0x7FFFFC0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v8 = 0;
  if ( (a2 & 0x400020) != 0x400020 )
    v8 = (a2 & 0x10040) != 65600 && (a2 & 0x100040) != 1048640;
  if ( !v8 && !MEMORY[0x7FFE03D8] || (a2 & 0x100080) == 0x100080 )
    return 3221225659LL;
  if ( (a2 & 0x10000) != 0 )
  {
    v10 = a1;
    v22 = a1;
    v11 = a3;
  }
  else if ( (a2 & 0x100000) != 0 )
  {
    v10 = a1 + 12;
    v22 = a1 + 12;
    v11 = a3 + 12;
  }
  else if ( (a2 & 0x200000) != 0 )
  {
    v11 = a3;
    v22 = a1;
    v10 = a1;
  }
  else if ( (a2 & 0x400000) != 0 )
  {
    v11 = a3;
    v22 = a1;
    v10 = a1;
  }
  else
  {
    v11 = 0LL;
    v22 = 0LL;
    v10 = 0LL;
  }
  v12 = *v10;
  v13 = *v11;
  v14 = a2 | v13 | v12;
  if ( (v14 & 0x27FFFF80) != 0x10000
    && (v14 & 0x7FFFF20) != 0x100000
    && (v14 & 0x7FFFFF0) != 0x200000
    && (v14 & 0x7FFFFC0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v15 = 0;
  if ( (v14 & 0x400020) != 0x400020 )
    v15 = (v14 & 0x10040) != 65600 && (v14 & 0x100040) != 1048640;
  if ( !v15 && !MEMORY[0x7FFE03D8] || (v14 & 0x100080) == 0x100080 )
    return 3221225659LL;
  v16 = a2 & v13;
  if ( (v16 & 0x27FFFF80) != 0x10000
    && (v16 & 0x7FFFF20) != 0x100000
    && (v16 & 0x7FFFFF0) != 0x200000
    && (v16 & 0x7FFFFC0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v17 = 1;
  v25 = 1;
  v23 = 1;
  v18 = 0;
  v19 = 1;
  if ( (v16 & 0x400020) != 0x400020 )
    v18 = (v16 & 0x10040) != 65600 && (v16 & 0x100040) != 1048640;
  if ( !v18 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v19 = 3;
    v23 = 3;
  }
  if ( (v16 & 0x100080) == 0x100080 )
    return 3221225659LL;
  if ( (v12 & 0x27FFFF80) != 0x10000
    && (v12 & 0x7FFFF20) != 0x100000
    && (v12 & 0x7FFFFF0) != 0x200000
    && (v12 & 0x7FFFFC0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v20 = 0LL;
  if ( (v12 & 0x400020) != 0x400020 )
    v20 = ((v12 & 0x10040) != 65600) & (unsigned __int8)((v12 & 0x100040) != 1048640);
  if ( !(_BYTE)v20 )
  {
    if ( MEMORY[0x7FFE03D8] )
    {
      v17 = 3;
      v25 = 3;
      goto LABEL_32;
    }
    return 3221225659LL;
  }
LABEL_32:
  if ( (v12 & 0x100080) == 0x100080 )
    return 3221225659LL;
  v21 = 0;
  if ( (~v17 & v19) != 0 )
    return 2147483653LL;
  if ( (v16 & 0x10000) != 0 )
  {
    RtlpCopyLegacyContextX86(v20, a1, v16, a3);
  }
  else
  {
    if ( (v16 & 0x100000) != 0 )
    {
      RtlpCopyLegacyContextAmd64(v20, a1, v16, a3);
    }
    else
    {
      if ( (v16 & 0x200000) != 0 )
      {
        RtlpCopyLegacyContextArm(v20, a1, v16, a3);
        v4 = a3;
        goto LABEL_36;
      }
      if ( (v16 & 0x400000) == 0 )
        goto LABEL_37;
      RtlpCopyLegacyContextArm64(v20, a1, v16, a3);
    }
    v4 = a3;
  }
LABEL_36:
  LOBYTE(v19) = v23;
LABEL_37:
  *v22 |= v12;
  if ( (v25 & 0xFFFFFFFE) != 0 )
  {
    if ( (v16 & 0x10000) != 0 )
    {
      v7 = (__int64)(v4 + 179);
      v3 = (_DWORD)a1 + 716;
      if ( (v16 & 0x10020) == 0x10020 && (v12 & 0x10020) != 0x10020 )
        a1[182] = 716;
    }
    else if ( (a2 & 0x100000) != 0 )
    {
      v7 = (__int64)(v4 + 308);
      v3 = (_DWORD)a1 + 1232;
    }
    else if ( (a2 & 0x200000) != 0 )
    {
      v7 = (__int64)(v4 + 104);
      v3 = (_DWORD)a1 + 416;
    }
    else if ( (a2 & 0x400000) != 0 )
    {
      v7 = (__int64)(v4 + 228);
      v3 = (_DWORD)a1 + 912;
    }
  }
  if ( (v19 & 2) == 0 )
    return v21;
  result = RtlpCopyXStateChunk(v20, v3, v3, v7, v7);
  v21 = result;
  if ( (int)result >= 0 )
    return v21;
  return result;
}
