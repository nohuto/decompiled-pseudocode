/*
 * XREFs of CmpIsKeyBodyEligibleForDump @ 0x140BB926C
 * Callers:
 *     CmDumpKeyToFile @ 0x1407CCD84 (CmDumpKeyToFile.c)
 *     CmpDumpKeyToBuffer @ 0x140BB9130 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmpIsKeyBodyEligibleForDump(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 32) == CmpMasterHive )
    return 3221225506LL;
  result = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( (int)result >= 0 )
    return (*(_DWORD *)(a2 + 184) & 0x40000) == 0 ? 0xC000000D : 0;
  return result;
}
