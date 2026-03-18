/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x140966848
 * Callers:
 *     BcdFlushStore @ 0x1408020A4 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x14080210C (BcdForciblyUnloadStore.c)
 *     BcdMarkAsSystemStore @ 0x1408021C4 (BcdMarkAsSystemStore.c)
 *     BcdOpenSystemStore @ 0x140802238 (BcdOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x1408023A4 (BcdEnumerateObjects.c)
 *     BcdQueryObject @ 0x14080266C (BcdQueryObject.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14096B820 (BcdGetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x140A24A18 (BcdDeleteObject.c)
 *     BcdOpenStore @ 0x140A24A98 (BcdOpenStore.c)
 *     BcdCloseStore @ 0x140A24B8C (BcdCloseStore.c)
 *     BiBindEfiBootManager @ 0x140A25DC8 (BiBindEfiBootManager.c)
 *     BcdCreateObject @ 0x140A26248 (BcdCreateObject.c)
 *     BiDeleteElement @ 0x140A26F84 (BiDeleteElement.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x14069B1C0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenMutant @ 0x14069D720 (ZwOpenMutant.c)
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
