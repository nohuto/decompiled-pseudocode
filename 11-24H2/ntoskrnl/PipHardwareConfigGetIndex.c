/*
 * XREFs of PipHardwareConfigGetIndex @ 0x140717CC8
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x1408BA0C4 (_PnpCtxRegQueryValue.c)
 *     PipHardwareConfigOpenKey @ 0x140ABA270 (PipHardwareConfigOpenKey.c)
 */

__int64 __fastcall PipHardwareConfigGetIndex(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0;
  Handle = 0LL;
  if ( a2 )
  {
    v3 = PipHardwareConfigOpenKey(a1, 131097LL, &Handle);
    if ( v3 >= 0 )
    {
      LODWORD(v6) = 4;
      v3 = PnpCtxRegQueryValue(v4, Handle, L"Id", &v7, a2, &v6);
    }
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
