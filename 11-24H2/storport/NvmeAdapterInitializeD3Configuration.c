/*
 * XREFs of NvmeAdapterInitializeD3Configuration @ 0x14012E8F0
 * Callers:
 *     InitializeNvmeAdapter @ 0x1401BEFA0 (InitializeNvmeAdapter.c)
 * Callees:
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1400384B4 (RaidQueryAcpiDsdStorageD3Property.c)
 *     PortRegistryReadDeviceKey @ 0x1401B8954 (PortRegistryReadDeviceKey.c)
 */

__int64 __fastcall NvmeAdapterInitializeD3Configuration(_QWORD *a1)
{
  __int64 v1; // rdx
  struct _DEVICE_OBJECT *v3; // rcx
  BOOL v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx
  struct _UNICODE_STRING v9; // [rsp+30h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int KeyHandle; // [rsp+70h] [rbp+20h] BYREF
  int v12; // [rsp+78h] [rbp+28h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  v1 = a1[20];
  v12 = 0;
  v13 = 0;
  v3 = (struct _DEVICE_OBJECT *)a1[1];
  v4 = StorageD3AllowedOnCurrentPlatform != 0;
  DestinationString = 0LL;
  v9 = 0LL;
  if ( RaidQueryAcpiDsdStorageD3Property(v3, (_DWORD *)(v1 + 272)) )
    v4 = *(_DWORD *)(a1[20] + 272LL) != 0;
  RtlInitUnicodeString(&DestinationString, L"StorPort");
  RtlInitUnicodeString(&v9, L"StorageD3InModernStandby");
  v5 = a1[4];
  v14 = (__int64)&v12;
  KeyHandle = 4;
  if ( (int)PortRegistryReadDeviceKey(v5, (int)&DestinationString, (int)&v9, 4, (__int64)&v14, &KeyHandle) >= 0 )
    v4 = v12 != 0;
  *(_DWORD *)(a1[20] + 176LL) = v4 | *(_DWORD *)(a1[20] + 176LL) & 0xFFFFFFFE;
  *(_DWORD *)(a1[20] + 176LL) |= 0x10u;
  *(_DWORD *)(a1[20] + 176LL) &= ~8u;
  RtlInitUnicodeString(&v9, L"DisableD3Cold");
  v6 = a1[4];
  v14 = (__int64)&v13;
  KeyHandle = 4;
  result = PortRegistryReadDeviceKey(v6, (int)&DestinationString, (int)&v9, 4, (__int64)&v14, &KeyHandle);
  if ( (int)result >= 0 )
  {
    v8 = a1[20];
    result = (v13 == 0 ? 0x10 : 0) | *(_DWORD *)(v8 + 176) & 0xFFFFFFEF;
    *(_DWORD *)(v8 + 176) = result;
  }
  return result;
}
