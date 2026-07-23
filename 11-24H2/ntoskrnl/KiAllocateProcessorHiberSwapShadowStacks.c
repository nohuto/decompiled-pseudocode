/*
 * XREFs of KiAllocateProcessorHiberSwapShadowStacks @ 0x1405B99D4
 * Callers:
 *     KeAllocateKernelHiberSwapShadowStacks @ 0x1405B98D8 (KeAllocateKernelHiberSwapShadowStacks.c)
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 * Callees:
 *     KiCreateKernelShadowStack @ 0x140A0ABE0 (KiCreateKernelShadowStack.c)
 *     KiDeleteKernelShadowStack @ 0x140A12CA4 (KiDeleteKernelShadowStack.c)
 */

__int64 __fastcall KiAllocateProcessorHiberSwapShadowStacks(__int64 a1, int a2)
{
  int KernelShadowStack; // ebp
  int v4; // esi
  __int64 i; // rbx
  unsigned int v6; // esi
  __int64 *v7; // rbx
  __int64 v8; // rdx

  KernelShadowStack = 0;
  v4 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL);
  if ( a2 )
  {
    for ( i = 0LL; (unsigned int)i <= 4; i = (unsigned int)(i + 1) )
    {
      KernelShadowStack = KiCreateKernelShadowStack(
                            0,
                            2,
                            0,
                            v4,
                            a1 + 8 * ((unsigned int)i + 4988LL),
                            a1 + 39864 + 8 * i);
      if ( KernelShadowStack < 0 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v6 = 0;
    v7 = (__int64 *)(a1 + 39864);
    do
    {
      v8 = v7[5];
      if ( !v8 )
        break;
      KiDeleteKernelShadowStack(0, v8, 2, 0, *v7);
      v7[5] = 0LL;
      ++v6;
      *v7++ = 0LL;
    }
    while ( v6 <= 4 );
  }
  return (unsigned int)KernelShadowStack;
}
