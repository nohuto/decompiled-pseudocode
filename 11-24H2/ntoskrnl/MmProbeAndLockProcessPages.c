/*
 * XREFs of MmProbeAndLockProcessPages @ 0x1409F6900
 * Callers:
 *     CcAsyncReadPrefetch @ 0x140461E40 (CcAsyncReadPrefetch.c)
 *     DifMmProbeAndLockProcessPagesWrapper @ 0x140634570 (DifMmProbeAndLockProcessPagesWrapper.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __stdcall MmProbeAndLockProcessPages(
        PMDL MemoryDescriptorList,
        PEPROCESS Process,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  int v6; // ebx
  LOCK_OPERATION v7; // edi
  _OWORD v8[3]; // [rsp+28h] [rbp-60h] BYREF

  memset(v8, 0, sizeof(v8));
  v6 = 0;
  v7 = Operation != IoReadAccess;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    v6 = 1;
    KiStackAttachProcess(Process, 0, (__int64)v8);
  }
  MmProbeAndLockPages(MemoryDescriptorList, AccessMode, v7);
  if ( v6 )
    KiUnstackDetachProcess((__int64)v8, 0);
}
