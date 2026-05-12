/*
 * XREFs of NvmeAdapterRetrieveRegistrySettings @ 0x14019C070
 * Callers:
 *     InitializeNvmeAdapter @ 0x1401BEFA0 (InitializeNvmeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     PortRegistryReadDeviceKey @ 0x1401B8954 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1401BB6D4 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall NvmeAdapterRetrieveRegistrySettings(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // ecx
  __int64 v5; // rcx
  bool v6; // sf
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  int KeyHandle; // [rsp+30h] [rbp-9h] BYREF
  __int64 p_Uuid; // [rsp+38h] [rbp-1h] BYREF
  unsigned int v13; // [rsp+40h] [rbp+7h] BYREF
  int v14; // [rsp+44h] [rbp+Bh] BYREF
  int v15; // [rsp+48h] [rbp+Fh] BYREF
  struct _UNICODE_STRING v16; // [rsp+50h] [rbp+17h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp+27h] BYREF
  __int64 v18; // [rsp+70h] [rbp+37h] BYREF
  UUID Uuid; // [rsp+78h] [rbp+3Fh] BYREF

  v13 = 0;
  v14 = 0;
  v15 = 0;
  v18 = 0LL;
  DestinationString = 0LL;
  v16 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"StorPort");
  Uuid = 0LL;
  RtlInitUnicodeString(&v16, L"AdapterGuid");
  v2 = *(_QWORD *)(a1 + 32);
  p_Uuid = (__int64)&Uuid;
  KeyHandle = 16;
  if ( (int)PortRegistryReadDeviceKey(v2, (int)&DestinationString, (int)&v16, 3, (__int64)&p_Uuid, &KeyHandle) < 0
    && ExUuidCreate(&Uuid) >= 0 )
  {
    PortRegistryWriteDeviceKey(
      *(_QWORD *)(a1 + 32),
      (unsigned int)&DestinationString,
      (unsigned int)&v16,
      3,
      p_Uuid,
      16);
  }
  *(UUID *)(a1 + 1032) = Uuid;
  RtlInitUnicodeString(&v16, L"ControllerDbgLogListEntryCount");
  v3 = *(_QWORD *)(a1 + 32);
  p_Uuid = (__int64)&v13;
  KeyHandle = 4;
  if ( (int)PortRegistryReadDeviceKey(v3, (int)&DestinationString, (int)&v16, 4, (__int64)&p_Uuid, &KeyHandle) < 0 )
  {
    *(_DWORD *)(a1 + 1060) = 256;
  }
  else
  {
    v4 = v13;
    if ( v13 <= 0x60000 )
    {
      if ( v13 - 1 <= 0x3E )
      {
        v4 = 64;
        v13 = 64;
      }
    }
    else
    {
      v4 = 393216;
      v13 = 393216;
    }
    *(_DWORD *)(a1 + 1060) = v4;
  }
  *(_DWORD *)(a1 + 1064) = NvmeDbgLogControl;
  RtlInitUnicodeString(&v16, L"ControllerDbgLogControlEnable");
  v5 = *(_QWORD *)(a1 + 32);
  p_Uuid = (__int64)&v18;
  KeyHandle = 8;
  v6 = (int)PortRegistryReadDeviceKey(v5, (int)&DestinationString, (int)&v16, 11, (__int64)&p_Uuid, &KeyHandle) < 0;
  v7 = v18;
  if ( v6 )
    v7 = qword_1401704F0;
  *(_QWORD *)(a1 + 1072) = v7;
  if ( v7 )
  {
    if ( !*(_DWORD *)(a1 + 1060) )
      *(_QWORD *)(a1 + 1072) = 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 1060) = 0;
  }
  RtlInitUnicodeString(&v16, L"ControllerDbgLogUseGlobalIndex");
  v8 = *(_QWORD *)(a1 + 32);
  p_Uuid = (__int64)&v14;
  KeyHandle = 4;
  if ( (int)PortRegistryReadDeviceKey(v8, (int)&DestinationString, (int)&v16, 4, (__int64)&p_Uuid, &KeyHandle) < 0 )
    *(_DWORD *)(a1 + 1056) &= ~1u;
  else
    *(_DWORD *)(a1 + 1056) = (v14 != 0) | *(_DWORD *)(a1 + 1056) & 0xFFFFFFFE;
  RtlInitUnicodeString(&v16, L"ControllerDbgLogUsePreciseTimestamp");
  v9 = *(_QWORD *)(a1 + 32);
  p_Uuid = (__int64)&v15;
  KeyHandle = 4;
  result = PortRegistryReadDeviceKey(v9, (int)&DestinationString, (int)&v16, 4, (__int64)&p_Uuid, &KeyHandle);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a1 + 1056) &= ~2u;
  }
  else
  {
    result = (v15 != 0 ? 2 : 0) | *(_DWORD *)(a1 + 1056) & 0xFFFFFFFD;
    *(_DWORD *)(a1 + 1056) = result;
  }
  return result;
}
