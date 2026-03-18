/*
 * XREFs of OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1403C3480
 * Callers:
 *     ObpDereferenceNamedObject @ 0x1403C1AC8 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x1403C1E18 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403C29A0 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x1403C2E70 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x1403C3010 (IopDeleteFileObjectExtension.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObHandleRevocationBlockAddObject @ 0x1409AAE30 (ObHandleRevocationBlockAddObject.c)
 *     ObpProcessRemoveObjectQueue @ 0x1409D2630 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( (*(_BYTE *)(a1 + 26) & 0x40) == 0 )
    return 0LL;
  result = 0LL;
  v2 = *(_QWORD *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x7F]);
  if ( *(_BYTE *)(v2 + 24) )
    return v2;
  return result;
}
