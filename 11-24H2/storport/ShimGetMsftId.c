/*
 * XREFs of ShimGetMsftId @ 0x1400BDE8C
 * Callers:
 *     DeviceIdShimStorageDeviceIdCompletionHook @ 0x1400BDCA0 (DeviceIdShimStorageDeviceIdCompletionHook.c)
 * Callees:
 *     StorCompareScsiDeviceId @ 0x140033B0C (StorCompareScsiDeviceId.c)
 *     RaidAddEnclosureIdMapping @ 0x14006F228 (RaidAddEnclosureIdMapping.c)
 *     RaidSaveEnclosureIdMapping @ 0x14006FA68 (RaidSaveEnclosureIdMapping.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     PortRegistryReadDeviceKey @ 0x1401B8954 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1401BB6D4 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall ShimGetMsftId(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r14
  ULONG v5; // r15d
  int v6; // eax
  int v7; // ebx
  PVOID *v8; // rsi
  UUID v9; // xmm6
  __int64 v10; // rax
  __int64 result; // rax
  char v12; // al
  UUID v13; // xmm0
  char v14; // al
  int KeyHandle; // [rsp+38h] [rbp-49h] BYREF
  __int64 p_Uuid; // [rsp+40h] [rbp-41h] BYREF
  struct _UNICODE_STRING v17; // [rsp+50h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  UUID Uuid; // [rsp+78h] [rbp-9h] BYREF
  __int128 v20; // [rsp+88h] [rbp+7h]

  v2 = *(_BYTE **)(a1 + 144);
  KeyHandle = 16;
  v5 = (unsigned __int8)v2[3] | ((unsigned __int8)v2[2] << 8);
  p_Uuid = (__int64)&Uuid;
  v20 = 0LL;
  DestinationString = 0LL;
  v17 = 0LL;
  Uuid = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v17, L"GeneratedID");
  v6 = PortRegistryReadDeviceKey(
         *(_QWORD *)(a1 + 8),
         (int)&DestinationString,
         (int)&v17,
         3,
         (__int64)&p_Uuid,
         &KeyHandle);
  if ( v6 == -1073741772 )
  {
    v7 = 0;
    ExAcquireResourceExclusiveLite(&EnclosureIdListLock, 1u);
    v8 = (PVOID *)EnclosureIdList;
    v9 = 0LL;
    while ( v8 != &EnclosureIdList )
    {
      if ( !(unsigned int)StorCompareScsiDeviceId(v2, v8[2]) )
      {
        v9 = *(UUID *)(v8 + 3);
        break;
      }
      v8 = (PVOID *)*v8;
    }
    Uuid = v9;
    v10 = *(_QWORD *)&v9.Data1 - v20;
    if ( *(_QWORD *)&v9.Data1 == (_QWORD)v20 )
      v10 = *(_QWORD *)Uuid.Data4 - *((_QWORD *)&v20 + 1);
    if ( !v10 )
    {
      v7 = ExUuidCreate(&Uuid);
      if ( v7 >= 0 )
      {
        v7 = RaidSaveEnclosureIdMapping(v2, v5, &Uuid);
        if ( v7 >= 0 )
          v7 = RaidAddEnclosureIdMapping(v2, v5, &Uuid);
      }
    }
    ExReleaseResourceLite(&EnclosureIdListLock);
    if ( v7 < 0 )
      return 3221225473LL;
    v6 = PortRegistryWriteDeviceKey(
           *(_QWORD *)(a1 + 8),
           (unsigned int)&DestinationString,
           (unsigned int)&v17,
           3,
           p_Uuid,
           KeyHandle);
  }
  if ( v6 < 0 )
    return 3221225473LL;
  v12 = *(_BYTE *)a2 & 0xF1;
  p_Uuid = *(_QWORD *)"MSFT    ";
  v13 = Uuid;
  *(_BYTE *)a2 = v12 | 1;
  v14 = *(_BYTE *)(a2 + 1) & 0xC1;
  *(_BYTE *)(a2 + 3) = 24;
  *(_BYTE *)(a2 + 1) = v14 | 1;
  *(_QWORD *)(a2 + 4) = p_Uuid;
  result = 0LL;
  *(UUID *)(a2 + 12) = v13;
  return result;
}
