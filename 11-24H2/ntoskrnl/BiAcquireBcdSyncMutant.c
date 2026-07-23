/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x1409A48B8
 * Callers:
 *     BcdFlushStore @ 0x14081235C (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x1408123C4 (BcdForciblyUnloadStore.c)
 *     BcdMarkAsSystemStore @ 0x14081247C (BcdMarkAsSystemStore.c)
 *     BcdOpenSystemStore @ 0x1408124F0 (BcdOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x14081265C (BcdEnumerateObjects.c)
 *     BcdQueryObject @ 0x140812924 (BcdQueryObject.c)
 *     BcdCreateObject @ 0x140859F94 (BcdCreateObject.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x1409A4E5C (BcdGetElementDataWithFlags.c)
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BiDeleteElement @ 0x1409A5F20 (BiDeleteElement.c)
 *     BiBindEfiBootManager @ 0x1409A6BC4 (BiBindEfiBootManager.c)
 *     BcdOpenStore @ 0x1409A8688 (BcdOpenStore.c)
 *     BcdDeleteObject @ 0x1409A8B70 (BcdDeleteObject.c)
 *     BcdCloseStore @ 0x140A81A08 (BcdCloseStore.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1406A7430 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenMutant @ 0x1406A9990 (ZwOpenMutant.c)
 */

NTSTATUS __fastcall BiAcquireBcdSyncMutant(char a1)
{
  HANDLE v1; // rcx
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE MutantHandle; // [rsp+68h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+20h] BYREF

  if ( a1 )
    return 0;
  MutantHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v1 = BcdMutantHandle;
  *(&ObjectAttributes.Length + 1) = 0;
  if ( !BcdMutantHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenMutant(&MutantHandle, 0x100000u, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, -1LL, 0LL);
    }
    else
    {
      if ( result < 0 )
        return result;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)MutantHandle, 0LL) )
        ZwClose(MutantHandle);
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
