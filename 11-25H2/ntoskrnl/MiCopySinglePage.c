/*
 * XREFs of MiCopySinglePage @ 0x140377E44
 * Callers:
 *     MmCopyMemory @ 0x140378030 (MmCopyMemory.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiIsPageSecured @ 0x140377B2C (MiIsPageSecured.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, char a5)
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
      MiChangePageAttribute(v9, 1);
    MiMakeProtectionPfnCompatible(1, v9);
    v13 = a3 + MiMapPageInHyperSpaceWorker(a2, 0LL, -1610612736);
    memmove(a1, (const void *)v13, a4);
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
    if ( v11 == 3 )
      MiChangePageAttribute(v9, 3);
    if ( v10 != 17 )
      MiUnlockPage(v9, v10);
    return 0LL;
  }
}
