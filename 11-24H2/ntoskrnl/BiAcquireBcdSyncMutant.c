/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x1409BE268
 * Callers:
 *     BcdFlushStore @ 0x140811C1C (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140811C84 (BcdForciblyUnloadStore.c)
 *     BcdMarkAsSystemStore @ 0x140811D3C (BcdMarkAsSystemStore.c)
 *     BcdOpenSystemStore @ 0x140811DB0 (BcdOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x140811F1C (BcdEnumerateObjects.c)
 *     BcdQueryObject @ 0x1408121E4 (BcdQueryObject.c)
 *     BcdCreateObject @ 0x14085E224 (BcdCreateObject.c)
 *     BcdCloseStore @ 0x14085EED8 (BcdCloseStore.c)
 *     BcdOpenObject @ 0x1409BE0D4 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x1409BE80C (BcdGetElementDataWithFlags.c)
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409BF5DC (BcdCloseObject.c)
 *     BiDeleteElement @ 0x1409BF8D0 (BiDeleteElement.c)
 *     BiBindEfiBootManager @ 0x1409C0574 (BiBindEfiBootManager.c)
 *     BcdOpenStore @ 0x1409C2038 (BcdOpenStore.c)
 *     BcdDeleteObject @ 0x1409C2520 (BcdDeleteObject.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1406A6490 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenMutant @ 0x1406A89F0 (ZwOpenMutant.c)
 */

int __fastcall BiAcquireBcdSyncMutant(char a1)
{
  HANDLE v1; // rcx
  int result; // eax
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+20h] BYREF

  if ( a1 )
    return 0;
  Handle = 0LL;
  v1 = BcdMutantHandle;
  if ( !BcdMutantHandle )
  {
    result = ZwOpenMutant((__int64)&Handle, 0x100000LL);
    if ( result == -1073741772 )
    {
      _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, -1LL, 0LL);
    }
    else
    {
      if ( result < 0 )
        return result;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)Handle, 0LL) )
        ZwClose(Handle);
    }
    v1 = BcdMutantHandle;
  }
  if ( v1 == (HANDLE)-1LL )
    return 0;
  Timeout.QuadPart = -600000000LL;
  result = ZwWaitForSingleObject(v1, 0, &Timeout);
  if ( result == 258 )
    return -1073741823;
  return result;
}
