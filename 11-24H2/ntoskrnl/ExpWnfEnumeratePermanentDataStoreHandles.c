/*
 * XREFs of ExpWnfEnumeratePermanentDataStoreHandles @ 0x1407C69B4
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x1407C665C (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1407C6A00 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
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
