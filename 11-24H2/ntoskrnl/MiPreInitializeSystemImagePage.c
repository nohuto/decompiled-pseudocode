/*
 * XREFs of MiPreInitializeSystemImagePage @ 0x1404CBDEC
 * Callers:
 *     MiAllocateDriverPage @ 0x140A68CD8 (MiAllocateDriverPage.c)
 * Callees:
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiClearPfnReuseFields @ 0x1403A1D30 (MiClearPfnReuseFields.c)
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
