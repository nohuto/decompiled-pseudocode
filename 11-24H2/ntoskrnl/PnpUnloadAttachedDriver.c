/*
 * XREFs of PnpUnloadAttachedDriver @ 0x140A8D55C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14048D53C (PnpRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpUnloadAttachedDriver(_QWORD *a1)
{
  bool v1; // zf
  __int64 v2; // rbx
  ULONG_PTR v4; // rsi
  wchar_t *Pool2; // rdi
  __int64 v6; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1[5] == 0LL;
  v2 = a1[6];
  DestinationString = 0LL;
  if ( v1 || a1[1] )
    return 0LL;
  v4 = CmRegistryMachineSystemCurrentControlSetServices.Length + 6 + (unsigned int)*(unsigned __int16 *)(v2 + 24);
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v4, 0x65647050u);
  if ( Pool2 )
  {
    RtlStringCbPrintfW(
      Pool2,
      v4,
      L"%s\\%s",
      CmRegistryMachineSystemCurrentControlSetServices.Buffer,
      *(_QWORD *)(v2 + 32));
    RtlInitUnicodeString(&DestinationString, Pool2);
    LOBYTE(v6) = 1;
    IopUnloadDriver(&DestinationString, v6);
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    return 0LL;
  }
  return 3221225626LL;
}
