/*
 * XREFs of MiCopySinglePage @ 0x140395C54
 * Callers:
 *     MmCopyMemory @ 0x140395E40 (MmCopyMemory.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x140313770 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPageSecured @ 0x140395B74 (MiIsPageSecured.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, ULONG_PTR a2, __int64 a3, size_t a4, char a5)
{
  __int64 v9; // rbx
  char v10; // di
  int v11; // r14d
  unsigned __int64 v13; // [rsp+70h] [rbp-40h]

  v9 = 48 * a2 - 0x220000000000LL;
  if ( (a5 & 1) != 0 )
  {
    v10 = MiSafeLockPage(a2, a2, a3);
    if ( v10 == 17 )
      return 3221225793LL;
  }
  else
  {
    v10 = 17;
  }
  if ( *(char *)(v9 + 35) < 0 || (unsigned int)MiIsPageSecured(v9, a2, a3) )
  {
    if ( v10 != 17 )
      MiUnlockPage(v9, v10);
    return 3221227273LL;
  }
  else
  {
    v11 = (unsigned __int8)BYTE2(*(_DWORD *)(v9 + 32)) >> 6;
    if ( v11 == 3 )
      MiChangePageAttribute(v9, 1u);
    MiMakeProtectionPfnCompatible(1, v9);
    v13 = a3 + MiMapPageInHyperSpaceWorker(a2, 0LL, 2684354560LL);
    memmove(a1, (const void *)v13, a4);
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    if ( v11 == 3 )
      MiChangePageAttribute(v9, 3u);
    if ( v10 != 17 )
      MiUnlockPage(v9, v10);
    return 0LL;
  }
}
