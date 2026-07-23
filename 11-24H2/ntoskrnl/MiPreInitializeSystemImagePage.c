/*
 * XREFs of MiPreInitializeSystemImagePage @ 0x1404C5268
 * Callers:
 *     MiAllocateDriverPage @ 0x140A62088 (MiAllocateDriverPage.c)
 * Callees:
 *     MiClearPfnReuseFields @ 0x140218960 (MiClearPfnReuseFields.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiPreInitializeSystemImagePage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r10
  unsigned __int8 v6; // r9
  int v8; // [rsp+30h] [rbp+8h]

  v4 = 48 * a1 - 0x220000000000LL;
  MiLockPageInline(v4, a2, a3, a4);
  *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
  HIWORD(v8) = HIWORD(*(_DWORD *)(v4 + 32));
  LOWORD(v8) = 0;
  *(_DWORD *)(v4 + 32) = v8;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 24) &= 0xFFFFFF0000000000uLL;
  MiClearPfnReuseFields(v4);
  *(_QWORD *)(v4 + 16) = v5;
  MiSetOriginalPtePfnFromFreeList((__int64 *)(v4 + 16));
  return MiUnlockPage(v4, v6);
}
