/*
 * XREFs of RaidAddATADeviceIdMapping @ 0x14006F10C
 * Callers:
 *     RaidLoadATADeviceIdMappings @ 0x14006F48C (RaidLoadATADeviceIdMappings.c)
 *     ATAShimGetMsftId @ 0x1400BDA00 (ATAShimGetMsftId.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RtlStringCbCopyA @ 0x14006FC78 (RtlStringCbCopyA.c)
 */

__int64 __fastcall RaidAddATADeviceIdMapping(NTSTRSAFE_PCSTR pszSrc, int a2, struct _STRING *a3)
{
  unsigned int v3; // edi
  struct _STRING *Pool; // rbx
  __int64 v8; // rdx
  size_t v9; // rsi
  char *v10; // rax
  char *Buffer; // rcx
  PCSZ v12; // r10
  _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax

  v3 = 0;
  Pool = (struct _STRING *)RaidAllocatePool(64LL, 48LL, 1213423954LL, 0LL);
  if ( !Pool )
    return (unsigned int)-1073741670;
  v8 = (unsigned int)(a2 + 1);
  v9 = v8;
  v10 = (char *)RaidAllocatePool(64LL, v8, 1213423954LL, 0LL);
  if ( !v10 )
  {
    Buffer = Pool[1].Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0x48536152u);
    ExFreePoolWithTag(Pool, 0x48536152u);
    return (unsigned int)-1073741670;
  }
  RtlStringCbCopyA(v10, v9, pszSrc);
  Pool->Buffer = (char *)Pool;
  *(_QWORD *)&Pool->Length = Pool;
  RtlInitAnsiString(Pool + 1, v12);
  Pool[2] = *a3;
  DeviceObjectExtension = WPP_MAIN_CB.DeviceObjectExtension;
  if ( *(struct _DEVICE_OBJECT **)WPP_MAIN_CB.DeviceObjectExtension != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
    __fastfail(3u);
  *(_QWORD *)&Pool->Length = &WPP_MAIN_CB.SectorSize;
  Pool->Buffer = (char *)DeviceObjectExtension;
  *(_QWORD *)&DeviceObjectExtension->Type = Pool;
  WPP_MAIN_CB.DeviceObjectExtension = (_DEVOBJ_EXTENSION *)Pool;
  return v3;
}
