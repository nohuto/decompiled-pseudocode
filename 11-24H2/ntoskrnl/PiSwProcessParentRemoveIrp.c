/*
 * XREFs of PiSwProcessParentRemoveIrp @ 0x1409BEA08
 * Callers:
 *     IopRemoveDevice @ 0x1409BE494 (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     McTemplateK0zzzzdd_EtwWriteTransfer @ 0x1405A5B84 (McTemplateK0zzzzdd_EtwWriteTransfer.c)
 *     PiSwLock @ 0x1408B6E3C (PiSwLock.c)
 *     PiSwFindSwDevice @ 0x1409BF560 (PiSwFindSwDevice.c)
 *     PiSwDestroyDeviceObject @ 0x1409F3944 (PiSwDestroyDeviceObject.c)
 *     PiSwProcessRemove @ 0x1409F3978 (PiSwProcessRemove.c)
 *     PiSwCloseDescendants @ 0x140A81628 (PiSwCloseDescendants.c)
 */

void __fastcall PiSwProcessParentRemoveIrp(__int64 a1)
{
  char *v1; // rbp
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 *v5; // rdi
  struct _DEVICE_OBJECT *v6; // r14
  __int64 *DeviceExtension; // r15
  char *DeviceNode; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rax
  char *v11; // r8
  const wchar_t *v12; // rcx
  __int64 SwDevice; // rax
  __int64 v14; // rdx
  int v15; // r11d
  const wchar_t *v16; // r10
  const wchar_t *v17; // r8
  const wchar_t *v18; // rcx
  const wchar_t *v19; // r9

  v1 = 0LL;
  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v3 = 0LL;
  v4 = (v3 + 40) & -(__int64)(v3 != 0);
  PiSwLock();
  v5 = (__int64 *)PiSwGlobalPdoAssociationList;
  while ( v5 != &PiSwGlobalPdoAssociationList )
  {
    v10 = v5;
    v11 = v1;
    v5 = (__int64 *)*v5;
    if ( v10[2] == a1 )
    {
      v6 = (struct _DEVICE_OBJECT *)v10[3];
      DeviceExtension = (__int64 *)v6->DeviceExtension;
      DeviceNode = (char *)v6->DeviceObjectExtension->DeviceNode;
      v9 = *DeviceExtension;
      v1 = DeviceNode + 40;
      if ( !DeviceNode )
        v1 = v11;
      if ( (byte_140EEFF64 & 0x40) != 0 )
      {
        if ( v9 )
          v15 = *(_DWORD *)(v9 + 4);
        else
          LOBYTE(v15) = 0;
        if ( v4 )
          v16 = *(const wchar_t **)(v4 + 8);
        else
          v16 = &word_140AEDAC0;
        if ( v1 )
          v17 = (const wchar_t *)*((_QWORD *)v1 + 1);
        else
          v17 = &word_140AEDAC0;
        if ( v9 )
        {
          v18 = *(const wchar_t **)(v9 + 16);
          v19 = *(const wchar_t **)(v9 + 8);
        }
        else
        {
          v18 = &word_140AEDAC0;
          v19 = &word_140AEDAC0;
        }
        McTemplateK0zzzzdd_EtwWriteTransfer(
          (__int64)v18,
          v9,
          (__int64)v17,
          v19,
          v18,
          v17,
          v16,
          v15,
          *((_DWORD *)DeviceExtension + 2));
      }
      if ( (DeviceExtension[1] & 0x20) == 0 )
        PiSwProcessRemove(v6, 0LL, v11);
      PiSwDestroyDeviceObject(v6);
    }
  }
  if ( v4 )
  {
    v12 = *(const wchar_t **)(v4 + 8);
    if ( v12 )
    {
      SwDevice = PiSwFindSwDevice(v12);
      LOBYTE(v14) = 1;
      if ( !SwDevice || (*(_DWORD *)(SwDevice + 4) & 1) == 0 && !*(_DWORD *)(SwDevice + 180) )
        PiSwCloseDescendants(v4, v14);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
}
