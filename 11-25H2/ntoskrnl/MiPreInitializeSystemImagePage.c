/*
 * XREFs of MiPreInitializeSystemImagePage @ 0x1404CBE94
 * Callers:
 *     MiAllocateDriverPage @ 0x140A69E40 (MiAllocateDriverPage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiClearPfnReuseFields @ 0x1402C4CC0 (MiClearPfnReuseFields.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 */

__int64 __fastcall MiPreInitializeSystemImagePage(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r10
  unsigned __int8 v3; // r9
  int v5; // [rsp+30h] [rbp+8h]

  v1 = 48 * a1 - 0x220000000000LL;
  MiLockPageInline(v1);
  *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
  HIWORD(v5) = HIWORD(*(_DWORD *)(v1 + 32));
  LOWORD(v5) = 0;
  *(_DWORD *)(v1 + 32) = v5;
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 24) &= 0xFFFFFF0000000000uLL;
  MiClearPfnReuseFields(v1);
  *(_QWORD *)(v1 + 16) = v2;
  MiSetOriginalPtePfnFromFreeList((__int64 *)(v1 + 16));
  return MiUnlockPage(v1, v3);
}
