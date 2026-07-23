/*
 * XREFs of MiInitializeImageHeaderPage @ 0x1402EE5B0
 * Callers:
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiInitializeImageHeaderPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int8 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  v5 = MiMapPageInHyperSpaceWorker(a2, &v9, 0x80000000);
  memset_0((void *)(v5 + a3), 0, 4096 - a3);
  LOBYTE(v6) = v9;
  result = MiUnmapPageInHyperSpaceWorker(v5, v6, 0x80000000LL);
  if ( (a3 & 0x1FF) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
    result = *(unsigned int *)(v8 + 56);
    *(_DWORD *)(v8 + 56) = result ^ ((unsigned __int16)a3 ^ (unsigned __int16)*(_DWORD *)(v8 + 56)) & 0xFFF;
  }
  return result;
}
