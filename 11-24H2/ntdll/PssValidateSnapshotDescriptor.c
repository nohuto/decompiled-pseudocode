/*
 * XREFs of PssValidateSnapshotDescriptor @ 0x18015B348
 * Callers:
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180118458 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180118A0C (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PssValidateSnapshotDescriptor(__int64 *a1)
{
  __int64 result; // rax

  if ( a1[109] < 0 || a1[112] < 0 || a1[115] < 0 || a1[118] < 0 || a1[122] < 0 || a1[126] < 0 )
    return 3221225480LL;
  result = 3221225480LL;
  if ( a1[141] >= 0 )
    return 0LL;
  return result;
}
