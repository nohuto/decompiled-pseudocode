/*
 * XREFs of PiDrvDbResolveNodeFilePaths @ 0x140737084
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x140737564 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 *     CmIsStateSeparationEnabled @ 0x1404941EC (CmIsStateSeparationEnabled.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x140734E84 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1407368E0 (PiDrvDbResolveFilePathKeyValues.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDrvDbResolveNodeFilePaths(__int64 a1, int a2)
{
  unsigned int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // eax
  int NodeSystemRoot; // eax
  const UNICODE_STRING *v10; // r9
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  const UNICODE_STRING *v13; // [rsp+70h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF

  Handle = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = 1;
  if ( (*(_DWORD *)(a1 + 492) & 1) == 0
    || (v6 = PnpCtxRegOpenKey(0, a2, (unsigned int)L"Setup\\ResolveFilePaths", 0, 131097, (__int64)&Handle),
        v5 = v6,
        v6 == -1073741772) )
  {
    v5 = 0;
    goto LABEL_18;
  }
  if ( v6 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 64);
    if ( (v7 & 1) == 0 && CmIsStateSeparationEnabled() )
      v4 = 3;
    if ( (v7 & 8) == 0 )
    {
      if ( !RtlCreateUnicodeString(&DestinationString, L"\\SystemRoot") )
      {
LABEL_10:
        v5 = -1073741670;
        goto LABEL_18;
      }
LABEL_15:
      NodeSystemRoot = PiDrvDbGetNodeSystemRoot(a1, &v13);
      v10 = v13;
      if ( NodeSystemRoot < 0 )
        v10 = 0LL;
      v5 = PiDrvDbResolveFilePathKeyValues(a2, v4, &DestinationString, v10);
      goto LABEL_18;
    }
    v8 = *(unsigned __int16 *)(a1 + 18) + 38;
    if ( v8 > 0xFFFE )
    {
      v5 = -2147483643;
      goto LABEL_18;
    }
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v8;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, v8, 0x67727453u);
    if ( !DestinationString.Buffer )
      goto LABEL_10;
    v5 = RtlUnicodeStringPrintf(&DestinationString, L"%ws\\%wZ", L"\\DriverStore\\Nodes", a1 + 16);
    if ( v5 >= 0 )
      goto LABEL_15;
  }
LABEL_18:
  RtlFreeAnsiString(&DestinationString);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
