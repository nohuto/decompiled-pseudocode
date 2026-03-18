/*
 * XREFs of ACPIIoctlCalculateOutputBufferV2 @ 0x14003AAC0
 * Callers:
 *     ACPIIoctlEvalPostProcessingV2 @ 0x14003A8D8 (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x14003AAC0 (ACPIIoctlCalculateOutputBufferV2.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x14003A9B8 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x14003AAC0 (ACPIIoctlCalculateOutputBufferV2.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferV2(__int64 a1, unsigned __int64 a2, char a3, char a4)
{
  __int16 v5; // cx
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  unsigned int *v10; // r12
  __int64 v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // ebp
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  unsigned int v16; // eax
  int v17[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_WORD *)(a1 + 2);
  v8 = a2;
  if ( v5 == 1 )
  {
    *(_WORD *)a2 = 0;
    if ( a3 == 1 )
    {
      *(_DWORD *)(a2 + 4) = 8;
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 16);
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 4;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 16);
    }
    return 0LL;
  }
  if ( (unsigned __int16)(v5 - 2) <= 1u )
  {
    *(_WORD *)a2 = (v5 != 2) + 1;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 24);
    memmove((void *)(a2 + 8), *(const void **)(a1 + 32), *(unsigned int *)(a1 + 24));
    return 0LL;
  }
  if ( v5 != 4 )
    return 3222536207LL;
  v10 = *(unsigned int **)(a1 + 32);
  v18 = 0;
  v17[0] = 0;
  result = ACPIIoctlCalculateOutputBufferSizeV2(a1, &v18, v17, a3, 1);
  if ( (int)result >= 0 )
  {
    if ( a4 )
    {
      v12 = v18;
    }
    else
    {
      v16 = v18;
      *(_DWORD *)(v8 + 4) = v18;
      *(_WORD *)v8 = 3;
      v8 += 8LL;
      if ( v16 < 4 )
        v16 = 4;
      v12 = v16 + 8;
    }
    v13 = 0;
    v14 = v8 + v12;
    while ( v8 < v14 && v13 < *v10 )
    {
      LOBYTE(v11) = a3;
      result = ACPIIoctlCalculateOutputBufferV2(&v10[8 * v13 + 2 + 2 * v13], v8, v11, 0LL);
      if ( (int)result < 0 )
        return result;
      v15 = *(unsigned int *)(v8 + 4);
      ++v13;
      if ( (unsigned int)v15 < 4 )
        v15 = 4LL;
      v8 += v15 + 8;
    }
    return 0LL;
  }
  return result;
}
