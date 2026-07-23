/*
 * XREFs of MiCopySinglePage @ 0x1403F4224
 * Callers:
 *     MmCopyMemory @ 0x1403F3930 (MmCopyMemory.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPageSecured @ 0x1403F4404 (MiIsPageSecured.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
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
    v10 = MiSafeLockPage(a2);
    if ( v10 == 17 )
      return 3221225793LL;
  }
  else
  {
    v10 = 17;
  }
  if ( *(char *)(v9 + 35) < 0 || (unsigned int)MiIsPageSecured(v9) )
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
    v13 = a3 + MiMapPageInHyperSpaceWorker(a2, 0LL, -1610612736);
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
