/*
 * XREFs of PiSwProcessRemove @ 0x1409A35FC
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14083A790 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x1409A1544 (PiSwProcessParentRemoveIrp.c)
 *     PiSwGetChildPdo @ 0x140AC044C (PiSwGetChildPdo.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403EAAD0 (RtlDeleteElementGenericTableAvl.c)
 *     IoInvalidateDeviceRelations @ 0x1404943F0 (IoInvalidateDeviceRelations.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405A4A98 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzztdd_EtwWriteTransfer @ 0x1405A5244 (McTemplateK0zzztdd_EtwWriteTransfer.c)
 *     PnpFreeDevPropertyArray @ 0x1408392C0 (PnpFreeDevPropertyArray.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14083AC54 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwBusRelationAdd @ 0x14083AE48 (PiSwBusRelationAdd.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140934F70 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x1409A33E8 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x1409A34E8 (PiSwUnassociateDeviceObject.c)
 *     PiSwDeviceDereference @ 0x1409A3528 (PiSwDeviceDereference.c)
 *     PiSwMakePdoInactive @ 0x1409A38D4 (PiSwMakePdoInactive.c)
 *     PiSwPnPInfoFree @ 0x1409A39B0 (PiSwPnPInfoFree.c)
 *     PiSwFreeInterfaceList @ 0x1409A3A3C (PiSwFreeInterfaceList.c)
 *     PiSwQueuedCreateInfoFree @ 0x1409A4BA4 (PiSwQueuedCreateInfoFree.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwProcessRemove(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  const wchar_t *v5; // r11
  const wchar_t **v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  const wchar_t **v14; // r9
  const wchar_t **v15; // rcx
  const wchar_t *v16; // rax
  const wchar_t *v17; // rcx
  const wchar_t **v18; // rdx
  wchar_t *v19; // rcx
  const wchar_t **v20; // r9
  PVOID *v21; // rdx
  __int64 v22; // r8
  int v23; // edx
  struct _DEVICE_OBJECT *v24; // rax
  struct _DEVICE_OBJECT *v25; // rbx
  const wchar_t *v26; // r9
  int v27; // r10d
  const wchar_t *v28; // rdx
  const wchar_t *v29; // rcx
  const wchar_t **Buffer; // [rsp+60h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 312);
  v5 = 0LL;
  v7 = *(const wchar_t ***)v2;
  Buffer = *(const wchar_t ***)v2;
  v8 = *(_QWORD *)(v4 + 40);
  if ( v8 )
    v5 = *(const wchar_t **)(v8 + 48);
  if ( (byte_140EEFA6C & 0x40) != 0 )
  {
    v26 = &word_140AD8570;
    if ( v7 )
    {
      v27 = *((_DWORD *)v7 + 1);
      v28 = v7[2];
    }
    else
    {
      LOBYTE(v27) = 0;
      v28 = &word_140AD8570;
    }
    if ( v7 )
      v26 = v7[1];
    McTemplateK0zzztdd_EtwWriteTransfer(v8, (__int64)v28, (__int64)v7, v26, v28, v5, a2, v27, *(_DWORD *)(v2 + 8));
  }
  v9 = *(_DWORD *)(v2 + 8);
  if ( (v9 & 0x20) == 0 )
  {
    if ( (v9 & 1) != 0 )
    {
      *(_DWORD *)(v2 + 8) = v9 & 0xFFFFFFFE;
      PiSwDeviceInterfacesUpdateState((__int64)Buffer, 0);
    }
    if ( !a2 )
    {
      PiSwMakePdoInactive(a1);
      if ( (*(_DWORD *)(v2 + 8) & 0x48) != 8 )
        PiSwUnassociateDeviceObject(a1);
      if ( (*((_DWORD *)Buffer + 1) & 2) != 0 )
      {
        PiSwBusRelationRemove(Buffer, v10, v11);
        v14 = Buffer;
        if ( Buffer[11] )
        {
          *((_DWORD *)Buffer + 1) &= ~4u;
          PiSwPnPInfoFree(Buffer + 3);
          v15 = Buffer;
          v16 = Buffer[11];
          *(_OWORD *)(Buffer + 3) = *(_OWORD *)(v16 + 4);
          *(_OWORD *)(v15 + 5) = *(_OWORD *)(v16 + 12);
          *(_OWORD *)(v15 + 7) = *(_OWORD *)(v16 + 20);
          v17 = Buffer[11];
          *(_OWORD *)(v17 + 4) = 0LL;
          *(_OWORD *)(v17 + 12) = 0LL;
          *(_OWORD *)(v17 + 20) = 0LL;
          v18 = Buffer;
          v19 = (wchar_t *)Buffer[19];
          if ( v19 )
          {
            ExFreePoolWithTag(v19, 0x57706E50u);
            v18 = Buffer;
          }
          *((_DWORD *)v18 + 40) = *((_DWORD *)v18[11] + 16);
          Buffer[19] = (const wchar_t *)*((_QWORD *)Buffer[11] + 7);
          *((_DWORD *)Buffer[11] + 16) = 0;
          *((_QWORD *)Buffer[11] + 7) = 0LL;
          v20 = Buffer;
          v21 = (PVOID *)Buffer[21];
          if ( v21 )
          {
            PnpFreeDevPropertyArray(*((_DWORD *)Buffer + 44), v21, 0x57706E50u);
            v20 = Buffer;
          }
          *((_DWORD *)v20 + 44) = *((_DWORD *)v20[11] + 20);
          Buffer[21] = (const wchar_t *)*((_QWORD *)Buffer[11] + 9);
          *((_DWORD *)Buffer[11] + 20) = 0;
          *((_QWORD *)Buffer[11] + 9) = 0LL;
          *((_DWORD *)Buffer + 41) = *((_DWORD *)Buffer[11] + 17);
          PiSwFreeInterfaceList(Buffer + 23);
          v23 = PiSwBusRelationAdd(*(wchar_t **)Buffer[11], (__int64)Buffer, v22);
          if ( v23 < 0 )
          {
            v29 = Buffer[18];
            if ( v29 && _InterlockedExchange64((volatile __int64 *)v29 + 13, 0LL) )
            {
              *((_QWORD *)Buffer[18] + 7) = 0LL;
              *((_DWORD *)Buffer[18] + 12) = v23;
              IofCompleteRequest((PIRP)Buffer[18], 0);
              Buffer[18] = 0LL;
            }
          }
          else
          {
            *((_DWORD *)Buffer + 1) &= ~2u;
            v24 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)Buffer[14], 0x746C6644u);
            v25 = v24;
            if ( v24 )
            {
              IoInvalidateDeviceRelations(v24, SingleBusRelations);
              ObfDereferenceObject(v25);
            }
          }
          PiSwQueuedCreateInfoFree((PVOID)Buffer[11]);
          Buffer[11] = 0LL;
          v14 = Buffer;
        }
        if ( !v14[14] )
        {
          if ( (byte_140EEFA6C & 0x40) != 0 )
            McTemplateK0zz_EtwWriteTransfer(
              v12,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InstanceTable_Remove,
              v13,
              v14[1],
              v14[2]);
          RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
          PiSwDeviceDereference(Buffer);
        }
      }
    }
  }
}
