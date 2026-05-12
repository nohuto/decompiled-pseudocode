/*
 * XREFs of AllocateNVMeSGLBufferContext @ 0x1401194C0
 * Callers:
 *     CreateNVMeScatterGatherListBufferPool @ 0x140119A90 (CreateNVMeScatterGatherListBufferPool.c)
 *     GetNVMeSGLBufferContext @ 0x14011A3F0 (GetNVMeSGLBufferContext.c)
 * Callees:
 *     RaidAllocatePoolEx @ 0x14008AB5C (RaidAllocatePoolEx.c)
 */

__int64 __fastcall AllocateNVMeSGLBufferContext(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = RaidAllocatePoolEx(74LL, 712LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL), a3);
  if ( result )
  {
    *(_WORD *)(result + 124) = 584;
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 16) = result + 128;
    *(_QWORD *)(result + 24) = 0LL;
    *(_QWORD *)(result + 88) = 0LL;
    *(_BYTE *)(result + 126) = 0;
    *(_DWORD *)(result + 120) = a2;
  }
  return result;
}
