/*
 * XREFs of MmProbeAndLockProcessPages @ 0x1409FCD70
 * Callers:
 *     CcAsyncReadPrefetch @ 0x1404627C8 (CcAsyncReadPrefetch.c)
 *     DifMmProbeAndLockProcessPagesWrapper @ 0x1406285B0 (DifMmProbeAndLockProcessPagesWrapper.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
    KiUnstackDetachProcess((__int64)v8, 0LL);
}
