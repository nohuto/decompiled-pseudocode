/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x1402EEB24
 * Callers:
 *     KiLockExtendedServiceTable @ 0x140505B38 (KiLockExtendedServiceTable.c)
 *     KiLockServiceTable @ 0x1406964A8 (KiLockServiceTable.c)
 *     KiVerifyXcpt15 @ 0x140BE0C40 (KiVerifyXcpt15.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 *     KiFatalExceptionFilter @ 0x140C5E818 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(void *a1, _QWORD *a2, ULONG *a3)
{
  PVOID v5; // rax

  v5 = RtlImageDirectoryEntryToData(a1, 1u, 3u, a3);
  *a2 = v5;
  if ( !v5 )
    *a3 = 0;
  return 0LL;
}
