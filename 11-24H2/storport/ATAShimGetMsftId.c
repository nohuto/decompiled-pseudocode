/*
 * XREFs of ATAShimGetMsftId @ 0x1400BDA00
 * Callers:
 *     ATADeviceIdShimStorageDeviceIdCompletionHook @ 0x1400BD990 (ATADeviceIdShimStorageDeviceIdCompletionHook.c)
 * Callees:
 *     RaTrimString @ 0x140009488 (RaTrimString.c)
 *     RaidAddATADeviceIdMapping @ 0x14006F10C (RaidAddATADeviceIdMapping.c)
 *     RaidSaveATADeviceIdMapping @ 0x14006F934 (RaidSaveATADeviceIdMapping.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall ATAShimGetMsftId(__int64 a1, __int64 a2)
{
  int v3; // ebx
  unsigned __int16 *v4; // rdi
  UUID v5; // xmm6
  __int64 v6; // rax
  char v7; // al
  UUID v8; // xmm0
  char v9; // al
  __int64 result; // rax
  STRING String1; // [rsp+20h] [rbp-50h] BYREF
  UUID Uuid; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h]

  Uuid = 0LL;
  v13 = 0LL;
  String1 = 0LL;
  v3 = RaTrimString(0x48536152u, (unsigned __int16 *)(a1 + 120), &String1);
  if ( v3 < 0 )
    return 3221225473LL;
  ExAcquireResourceExclusiveLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension, 1u);
  v4 = *(unsigned __int16 **)&WPP_MAIN_CB.SectorSize;
  v5 = 0LL;
  while ( v4 != &WPP_MAIN_CB.SectorSize )
  {
    if ( !RtlCompareString(&String1, (const STRING *)v4 + 1, 0) )
    {
      v5 = (UUID)*((_OWORD *)v4 + 2);
      break;
    }
    v4 = *(unsigned __int16 **)v4;
  }
  Uuid = v5;
  v6 = *(_QWORD *)&v5.Data1 - v13;
  if ( *(_QWORD *)&v5.Data1 == (_QWORD)v13 )
    v6 = *(_QWORD *)Uuid.Data4 - *((_QWORD *)&v13 + 1);
  if ( !v6 )
  {
    v3 = ExUuidCreate(&Uuid);
    if ( v3 >= 0 )
    {
      v3 = RaidSaveATADeviceIdMapping(String1.Buffer, String1.Length, &Uuid);
      if ( v3 >= 0 )
        v3 = RaidAddATADeviceIdMapping(String1.Buffer, String1.Length, (struct _STRING *)&Uuid);
    }
  }
  ExReleaseResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
  ExFreePoolWithTag(String1.Buffer, 0x48536152u);
  if ( v3 < 0 )
    return 3221225473LL;
  v7 = *(_BYTE *)a2 & 0xF1;
  *(_QWORD *)&String1.Length = *(_QWORD *)"MSFT    ";
  v8 = Uuid;
  *(_BYTE *)a2 = v7 | 1;
  v9 = *(_BYTE *)(a2 + 1) & 0xC1;
  *(_BYTE *)(a2 + 3) = 24;
  *(_BYTE *)(a2 + 1) = v9 | 1;
  *(_QWORD *)(a2 + 4) = *(_QWORD *)&String1.Length;
  result = 0LL;
  *(UUID *)(a2 + 12) = v8;
  return result;
}
