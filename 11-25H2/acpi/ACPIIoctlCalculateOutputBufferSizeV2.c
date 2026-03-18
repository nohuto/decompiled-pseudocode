/*
 * XREFs of ACPIIoctlCalculateOutputBufferSizeV2 @ 0x14003A9B8
 * Callers:
 *     ACPIIoctlEvalPostProcessingV2 @ 0x14003A8D8 (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x14003A9B8 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x14003AAC0 (ACPIIoctlCalculateOutputBufferV2.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV2 @ 0x14003A9B8 (ACPIIoctlCalculateOutputBufferSizeV2.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferSizeV2(__int64 a1, _DWORD *a2, int *a3, char a4, char a5)
{
  __int16 v5; // r10
  int v9; // ebx
  __int64 result; // rax
  int v11; // ecx
  int *v12; // rsi
  char v13; // al
  unsigned int v14; // edi
  unsigned int v15; // eax
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_WORD *)(a1 + 2);
  v16 = 0;
  if ( v5 == 1 )
  {
    v9 = 16;
    if ( a4 != 1 )
      v9 = 12;
  }
  else if ( (unsigned __int16)(v5 - 2) <= 1u )
  {
    v15 = *(_DWORD *)(a1 + 24);
    if ( v15 < 4 )
      v15 = 4;
    v9 = v15 + 8;
  }
  else
  {
    if ( v5 == 4 )
    {
      v11 = 1;
      v12 = *(int **)(a1 + 32);
      if ( a5 )
        v11 = *v12;
      v13 = -a5;
      *a3 = v11;
      v14 = 0;
      v9 = v13 == 0 ? 8 : 0;
      while ( v14 < *v12 )
      {
        result = ACPIIoctlCalculateOutputBufferSizeV2(
                   (unsigned int)v12 + 8 * (v14 + 4 * v14 + 1),
                   (_DWORD)a2,
                   (unsigned int)&v16,
                   a4,
                   0);
        if ( (int)result < 0 )
          return result;
        ++v14;
      }
      goto LABEL_5;
    }
    if ( v5 )
      return 3222536207LL;
    v9 = 0;
  }
  *a3 = 1;
LABEL_5:
  *a2 += v9;
  return 0LL;
}
