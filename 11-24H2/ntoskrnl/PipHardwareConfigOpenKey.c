/*
 * XREFs of PipHardwareConfigOpenKey @ 0x140ABA270
 * Callers:
 *     PipCheckComputerSupported @ 0x1407179C0 (PipCheckComputerSupported.c)
 *     PipHardwareConfigGetIndex @ 0x140717CC8 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140718298 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigGetLastUseTime @ 0x140981FCC (PipHardwareConfigGetLastUseTime.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140C222B0 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitComputerIds @ 0x140C65CF0 (PipInitComputerIds.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall PipHardwareConfigOpenKey(__int64 a1, unsigned int a2, HANDLE *a3)
{
  int CachedContextBaseKey; // ebx
  HANDLE v6; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF

  Handle = 0LL;
  v9 = 0LL;
  if ( a3 )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 15, &v9);
    if ( CachedContextBaseKey < 0
      || (CachedContextBaseKey = PnpCtxRegOpenKey(
                                   *(__int64 *)&PiPnpRtlCtx,
                                   v9,
                                   (__int64)L"Current",
                                   0,
                                   a2,
                                   (__int64)&Handle),
          CachedContextBaseKey < 0) )
    {
      v6 = Handle;
    }
    else
    {
      v6 = 0LL;
      *a3 = Handle;
      Handle = 0LL;
    }
    if ( v6 )
      ZwClose(v6);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)CachedContextBaseKey;
}
