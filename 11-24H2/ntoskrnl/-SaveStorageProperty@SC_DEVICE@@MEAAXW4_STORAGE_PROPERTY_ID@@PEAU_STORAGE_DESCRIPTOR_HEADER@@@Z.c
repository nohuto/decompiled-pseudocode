/*
 * XREFs of ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14069FD20
 * Callers:
 *     ?SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14069EE60 (-SaveStorageProperty@SC_DISK@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 * Callees:
 *     ?ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z @ 0x14069E3A8 (-ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 */

void __fastcall SC_DEVICE::SaveStorageProperty(
        SC_DEVICE *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // eax

  if ( a2 )
  {
    switch ( a2 )
    {
      case StorageAdapterProperty:
        v6 = 152LL;
        break;
      case StorageDeviceIdProperty:
        v6 = 184LL;
        break;
      case StorageMiniportProperty:
        v6 = 192LL;
        break;
      case StorageAdapterCryptoProperty|StorageDeviceIdProperty:
        v6 = 176LL;
        break;
      case StorageDeviceLedStateProperty:
        v6 = 168LL;
        break;
      default:
        if ( a3 )
          PspUserApcKernelRoutine(a3);
        return;
    }
  }
  else
  {
    v6 = 160LL;
  }
  v7 = *(_QWORD *)((char *)this + v6);
  if ( v7 )
    PspUserApcKernelRoutine(v7);
  *(_QWORD *)((char *)this + v6) = a3;
  if ( a2 )
  {
    if ( a2 == (StorageAdapterCryptoProperty|StorageDeviceIdProperty) )
    {
      memset_0((char *)this + 88, 0, 0x40uLL);
      v8 = *((_QWORD *)this + 22);
      if ( v8 )
      {
        v9 = 4;
        if ( *(_DWORD *)(v8 + 8) < 4u )
          v9 = *(_DWORD *)(v8 + 8);
        memmove((char *)this + 88, (const void *)(v8 + 12), 16LL * v9);
      }
    }
  }
  else
  {
    ScExtractDeviceStrings(
      *((struct _STORAGE_DEVICE_DESCRIPTOR **)this + 20),
      (struct _UNICODE_STRING *)((char *)this + 24),
      (struct _UNICODE_STRING *)((char *)this + 40),
      (struct _UNICODE_STRING *)((char *)this + 56),
      (struct _UNICODE_STRING *)((char *)this + 72));
  }
}
