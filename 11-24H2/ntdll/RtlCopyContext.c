/*
 * XREFs of RtlCopyContext @ 0x1800DDBD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpValidateContextFlags @ 0x180017E20 (RtlpValidateContextFlags.c)
 *     RtlpCopyLegacyContextX86 @ 0x1800DDED0 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyXStateChunk @ 0x1800DE120 (RtlpCopyXStateChunk.c)
 *     RtlpCopyKernelCetChunk @ 0x18011FEF8 (RtlpCopyKernelCetChunk.c)
 *     RtlpCopyLegacyContextAmd64 @ 0x18011FF3C (RtlpCopyLegacyContextAmd64.c)
 *     RtlpCopyLegacyContextArm @ 0x18012012C (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x180143B0C (RtlpCopyLegacyContextArm64.c)
 */

__int64 __fastcall RtlCopyContext(unsigned int *a1, unsigned int a2, int *a3)
{
  int v4; // ebx
  __int64 v7; // r14
  __int64 result; // rax
  unsigned int *v9; // rax
  int *v10; // rbp
  unsigned int v11; // esi
  int v12; // ebp
  int v13; // ecx
  unsigned int v14; // ebp
  __int64 v15; // rcx
  unsigned int v16; // esi
  char v17; // r12
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // edx
  int v21; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-40h]
  unsigned int *v24; // [rsp+40h] [rbp-38h]
  int v25; // [rsp+98h] [rbp+20h]

  v4 = 0;
  v21 = 0;
  v22 = 0;
  v7 = 0LL;
  result = RtlpValidateContextFlags(a2, 0LL);
  if ( (int)result < 0 )
    return result;
  v25 = a2 & 0x100000;
  if ( (a2 & 0x10000) != 0 )
  {
    v9 = a1;
    v10 = a3;
  }
  else
  {
    v25 = a2 & 0x100000;
    if ( (a2 & 0x100000) != 0 )
    {
      v10 = a3 + 12;
      v9 = a1 + 12;
    }
    else if ( (a2 & 0x200000) != 0 )
    {
      v10 = a3;
      v9 = a1;
    }
    else if ( (a2 & 0x400000) != 0 )
    {
      v10 = a3;
      v9 = a1;
    }
    else
    {
      v10 = 0LL;
      v9 = 0LL;
    }
  }
  v11 = *v9;
  v12 = *v10;
  v13 = v12 | *v9;
  v24 = v9;
  v23 = v11;
  result = RtlpValidateContextFlags(a2 | v13, 0LL);
  if ( (int)result < 0 )
    return result;
  v14 = a2 & v12;
  result = RtlpValidateContextFlags(v14, (__int64)&v21);
  if ( (int)result < 0 )
    return result;
  result = RtlpValidateContextFlags(v11, (__int64)&v22);
  v16 = result;
  if ( (int)result < 0 )
    return result;
  v17 = v21;
  if ( (~v22 & v21) != 0 )
    return 2147483653LL;
  v18 = v14 & 0x10000;
  v21 = v14 & 0x10000;
  if ( (v14 & 0x10000) != 0 )
  {
    RtlpCopyLegacyContextX86(v15, a1, v14, a3);
  }
  else if ( (v14 & 0x100000) != 0 )
  {
    RtlpCopyLegacyContextAmd64(v15, a1, v14, a3);
  }
  else if ( (v14 & 0x200000) != 0 )
  {
    RtlpCopyLegacyContextArm(v15, a1, v14, a3);
  }
  else
  {
    if ( (v14 & 0x400000) == 0 )
      goto LABEL_11;
    RtlpCopyLegacyContextArm64(v15, a1, v14, a3);
  }
  v18 = v21;
LABEL_11:
  v19 = (int)v24;
  v20 = v23;
  *v24 |= v23;
  if ( (v22 & 0xFFFFFFFE) != 0 )
  {
    if ( v18 )
    {
      v7 = (__int64)(a3 + 179);
      v4 = (_DWORD)a1 + 716;
      if ( (v14 & 0x10020) == 0x10020 && (v20 & 0x10020) != 0x10020 )
        a1[182] = 716;
    }
    else if ( v25 )
    {
      v7 = (__int64)(a3 + 308);
      v4 = (_DWORD)a1 + 1232;
    }
    else if ( (a2 & 0x200000) != 0 )
    {
      v7 = (__int64)(a3 + 104);
      v4 = (_DWORD)a1 + 416;
    }
    else if ( (a2 & 0x400000) != 0 )
    {
      v7 = (__int64)(a3 + 228);
      v4 = (_DWORD)a1 + 912;
    }
  }
  if ( (v17 & 2) == 0 || (result = RtlpCopyXStateChunk(v19, v4, v4, v7, v7), v16 = result, (int)result >= 0) )
  {
    if ( (v17 & 4) == 0 )
      return v16;
    result = RtlpCopyKernelCetChunk(v19, v4, v4, v7, v7);
    v16 = result;
    if ( (int)result >= 0 )
      return v16;
  }
  return result;
}
