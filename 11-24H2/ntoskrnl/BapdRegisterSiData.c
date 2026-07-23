/*
 * XREFs of BapdRegisterSiData @ 0x140B6D748
 * Callers:
 *     PopBootLoaderSiDataProcess @ 0x140B6F990 (PopBootLoaderSiDataProcess.c)
 *     BapdpRegisterWbclData @ 0x140C42188 (BapdpRegisterWbclData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     BapdGetISRegistryKey @ 0x140B6D9C8 (BapdGetISRegistryKey.c)
 */

void __fastcall BapdRegisterSiData(ULONG *a1, unsigned int a2, int a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  const WCHAR *v8; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+30h] BYREF

  if ( a1 )
  {
    KeyHandle = 0LL;
    v4 = a2;
    DestinationString = 0LL;
    if ( (int)BapdGetISRegistryKey(&KeyHandle) >= 0 )
    {
      if ( a1 != (ULONG *)-4LL && *a1 )
      {
        v8 = L"WBCLDrtm";
        if ( a3 != 2 )
          v8 = L"WBCL";
        RtlInitUnicodeString(&DestinationString, v8);
        ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, a1 + 1, *a1);
      }
      if ( a3 != 2 )
      {
        v6 = *a1 + 4;
        v7 = v6;
        if ( v4 >= v6 + 48 && *(ULONG *)((char *)a1 + v6) <= 0x30 && *(ULONG *)((char *)a1 + v6 + 4) <= 2 )
        {
          RtlInitUnicodeString(&DestinationString, L"EventCount");
          ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, (char *)a1 + v7 + 8, 8u);
          RtlInitUnicodeString(&DestinationString, L"BootCount");
          ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, (char *)a1 + v7 + 16, 8u);
          RtlInitUnicodeString(&DestinationString, L"CounterId");
          ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, (char *)a1 + v7 + 24, 8u);
          if ( *(ULONG *)((char *)a1 + v7 + 4) == 2 && *(ULONG *)((char *)a1 + v7) == 48 && *((_BYTE *)a1 + v7 + 32) )
          {
            RtlInitUnicodeString(&DestinationString, L"TPMActivePCRBanks");
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)a1 + v7 + 40, 4u);
            RtlInitUnicodeString(&DestinationString, L"TPMActiveLogFormat");
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)a1 + v7 + 44, 4u);
            RtlInitUnicodeString(&DestinationString, L"TPMDigestAlgID");
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)a1 + v7 + 36, 4u);
          }
          if ( !a3 )
          {
            RtlInitUnicodeString(&DestinationString, L"InitialEventCount");
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, (char *)a1 + v7 + 8, 8u);
            RtlInitUnicodeString(&DestinationString, L"InitialBootCount");
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, (char *)a1 + v7 + 16, 8u);
            RtlInitUnicodeString(&DestinationString, L"InitialCounterId");
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, (char *)a1 + v7 + 24, 8u);
          }
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
}
