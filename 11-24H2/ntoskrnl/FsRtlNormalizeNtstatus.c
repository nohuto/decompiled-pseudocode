/*
 * XREFs of FsRtlNormalizeNtstatus @ 0x14044B3A0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x14044B3D0 (FsRtlIsNtstatusExpected.c)
 */

NTSTATUS __stdcall FsRtlNormalizeNtstatus(NTSTATUS Exception, NTSTATUS GenericException)
{
  NTSTATUS v3; // edi

  v3 = Exception;
  if ( !FsRtlIsNtstatusExpected(Exception) )
    return GenericException;
  return v3;
}
