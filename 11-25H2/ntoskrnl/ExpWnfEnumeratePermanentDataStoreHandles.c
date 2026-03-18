/*
 * XREFs of ExpWnfEnumeratePermanentDataStoreHandles @ 0x1407B6D84
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x1407B6A2C (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1407B6DD0 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 */

__int64 __fastcall ExpWnfEnumeratePermanentDataStoreHandles(int a1, int a2, int a3, HANDLE *KeyHandle)
{
  if ( a1 == 2 || a3 )
    return 3221225524LL;
  else
    return ExpWnfGetPermanentDataStoreHandleByScopeId(
             a1,
             a2,
             0,
             (int)KeyHandle,
             (unsigned int)(a2 - 2) <= 1,
             0,
             KeyHandle);
}
