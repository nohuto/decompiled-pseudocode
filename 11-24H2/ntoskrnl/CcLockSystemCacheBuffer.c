/*
 * XREFs of CcLockSystemCacheBuffer @ 0x1404051E8
 * Callers:
 *     CcCopyBytesToUserBuffer @ 0x140405000 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     FsRtlIsNtstatusExpected @ 0x14044B3D0 (FsRtlIsNtstatusExpected.c)
 */

PVOID __fastcall CcLockSystemCacheBuffer(void *a1, struct _MDL **a2, ULONG a3, LOCK_OPERATION a4, int *a5)
{
  PVOID MappedSystemVa; // rsi
  struct _MDL *Mdl; // rax
  struct _MDL *v9; // rbx
  int v10; // ecx

  MappedSystemVa = 0LL;
  *a5 = 0;
  Mdl = IoAllocateMdl(a1, a3, 0, 0, 0LL);
  v9 = Mdl;
  if ( !Mdl )
    goto LABEL_7;
  MmProbeAndLockPages(Mdl, 0, a4);
  v10 = *a5;
  if ( *a5 >= 0 )
  {
    if ( (v9->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = v9->MappedSystemVa;
    }
    else
    {
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u);
      v10 = *a5;
    }
    if ( MappedSystemVa )
    {
LABEL_8:
      if ( v10 >= 0 )
        goto LABEL_11;
      goto LABEL_9;
    }
LABEL_7:
    v10 = -1073741670;
    *a5 = -1073741670;
    goto LABEL_8;
  }
LABEL_9:
  if ( v9 )
  {
    MmUnlockPages(v9);
    IoFreeMdl(v9);
    v9 = 0LL;
  }
LABEL_11:
  *a2 = v9;
  return MappedSystemVa;
}
