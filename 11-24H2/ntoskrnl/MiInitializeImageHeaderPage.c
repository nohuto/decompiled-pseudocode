/*
 * XREFs of MiInitializeImageHeaderPage @ 0x14048E2E4
 * Callers:
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140266854 (MiUnmapPageInHyperSpaceWorker.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int8 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  v5 = MiMapPageInHyperSpaceWorker(a2, &v8, 0x80000000LL);
  memset_0((void *)(v5 + a3), 0, 4096 - a3);
  result = MiUnmapPageInHyperSpaceWorker(v5, v8, 0x80000000);
  if ( (a3 & 0x1FF) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
    result = *(unsigned int *)(v7 + 56);
    *(_DWORD *)(v7 + 56) = result ^ ((unsigned __int16)a3 ^ (unsigned __int16)*(_DWORD *)(v7 + 56)) & 0xFFF;
  }
  return result;
}
