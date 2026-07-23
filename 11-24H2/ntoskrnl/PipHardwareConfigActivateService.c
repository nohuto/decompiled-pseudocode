/*
 * XREFs of PipHardwareConfigActivateService @ 0x140A7F050
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PipOpenServiceEnumKeys @ 0x1409B5D44 (PipOpenServiceEnumKeys.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 *     PiOpenDriverRedirectedStateKey @ 0x140A7F158 (PiOpenDriverRedirectedStateKey.c)
 */

__int64 __fastcall PipHardwareConfigActivateService(PCWSTR SourceString)
{
  int v1; // ebx
  __int64 v2; // rdx
  int v3; // eax
  HANDLE v4; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  DestinationString = 0LL;
  if ( !SourceString )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v3 = PiOpenDriverRedirectedStateKey(&DestinationString, v2, &Handle);
  if ( v3 == -1073741275 )
  {
    v1 = 0;
  }
  else if ( v3 >= 0 || (v1 = PipOpenServiceEnumKeys(&DestinationString, 0x10000u, &Handle, 0LL, 0), v1 >= 0) )
  {
    v4 = Handle;
    v1 = PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, Handle, L"StartOverride");
    if ( v1 == -1073741772 )
      v1 = 0;
    goto LABEL_10;
  }
  v4 = Handle;
LABEL_10:
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)v1;
}
