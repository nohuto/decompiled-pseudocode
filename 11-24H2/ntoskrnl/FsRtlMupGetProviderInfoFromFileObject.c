/*
 * XREFs of FsRtlMupGetProviderInfoFromFileObject @ 0x140AA8230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall FsRtlMupGetProviderInfoFromFileObject(
        PFILE_OBJECT pFileObject,
        ULONG Level,
        PVOID pBuffer,
        PULONG pBufferSize)
{
  if ( pFsRtlpMupCalls )
    return guard_dispatch_icall_no_overrides(pFileObject, *(_QWORD *)&Level, pBuffer, pBufferSize);
  else
    return -1073741637;
}
