/*
 * XREFs of ?ReadConfigurationPath@NetSetupPropertyBag@@QEAAJAEAUNetSetupConfigurationPath@@@Z @ 0x1401409B0
 * Callers:
 *     ndisLWMBuildConfigurationKeyPath @ 0x140169030 (ndisLWMBuildConfigurationKeyPath.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 *     KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___ @ 0x14014D548 (KRegKey--QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x140169780 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 */

int __fastcall NetSetupPropertyBag::ReadConfigurationPath(
        NetSetupPropertyBag *this,
        struct NetSetupConfigurationPath *a2)
{
  int result; // eax
  size_t v4; // r8
  ULONG v5; // r9d
  NTSTATUS inited; // ebx
  HANDLE v7; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  result = NetSetupPropertyBag::OpenPropertyKey(
             this,
             (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_ConfigurationPath,
             (struct KRegKey *)&Handle);
  inited = result;
  if ( !result )
  {
    DestinationString = 0LL;
    inited = RtlUnicodeStringInitWorker(&DestinationString, 0LL, v4, v5);
    if ( inited >= 0 )
      inited = KRegKey::QueryValueBlob__lambda_4865fb945cd28a177f845da523c8204e___(&Handle, &DestinationString, a2);
    v7 = Handle;
    if ( !Handle )
      return inited;
    goto LABEL_7;
  }
  v7 = Handle;
  if ( Handle )
  {
LABEL_7:
    ZwClose(v7);
    return inited;
  }
  return result;
}
