/*
 * XREFs of PiSwProcessRemove @ 0x1409F3978
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x1409BEA08 (PiSwProcessParentRemoveIrp.c)
 *     PiSwPdoPnPDispatch @ 0x1409F33B0 (PiSwPdoPnPDispatch.c)
 *     PiSwGetChildPdo @ 0x140AC1360 (PiSwGetChildPdo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     IoInvalidateDeviceRelations @ 0x14048DB00 (IoInvalidateDeviceRelations.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405A5298 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzztdd_EtwWriteTransfer @ 0x1405A5A44 (McTemplateK0zzztdd_EtwWriteTransfer.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x1408D192C (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x1409F0BC8 (PiSwPnPInfoFree.c)
 *     PiSwFreeInterfaceList @ 0x1409F0E64 (PiSwFreeInterfaceList.c)
 *     PiSwBusRelationAdd @ 0x1409F2DD8 (PiSwBusRelationAdd.c)
 *     PiSwBusRelationRemove @ 0x1409F32DC (PiSwBusRelationRemove.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1409F3D04 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwUnassociateDeviceObject @ 0x1409F3E28 (PiSwUnassociateDeviceObject.c)
 *     PiSwDeviceDereference @ 0x1409F3E68 (PiSwDeviceDereference.c)
 *     PiSwMakePdoInactive @ 0x1409F40D4 (PiSwMakePdoInactive.c)
 *     PiSwQueuedCreateInfoFree @ 0x1409F40F4 (PiSwQueuedCreateInfoFree.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwProcessRemove(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  const wchar_t *v5; // r11
  const wchar_t **v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax
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
  if ( (byte_140EEFF64 & 0x40) != 0 )
  {
    v26 = &word_140AEDAC0;
    if ( v7 )
    {
      v27 = *((_DWORD *)v7 + 1);
      v28 = v7[2];
    }
    else
    {
      LOBYTE(v27) = 0;
      v28 = &word_140AEDAC0;
    }
    if ( v7 )
      v26 = v7[1];
    McTemplateK0zzztdd_EtwWriteTransfer(v8, (__int64)v28, (__int64)v7, v26, v28, v5, a2, v27, *(_DWORD *)(v2 + 8));
  }
  result = *(unsigned int *)(v2 + 8);
  if ( (result & 0x20) == 0 )
  {
    if ( (result & 1) != 0 )
    {
      *(_DWORD *)(v2 + 8) = result & 0xFFFFFFFE;
      result = PiSwDeviceInterfacesUpdateState(Buffer, 0LL);
    }
    if ( !a2 )
    {
      PiSwMakePdoInactive(a1);
      if ( (*(_DWORD *)(v2 + 8) & 0x48) != 8 )
        PiSwUnassociateDeviceObject(a1);
      result = *((unsigned int *)Buffer + 1);
      if ( (result & 2) != 0 )
      {
        result = PiSwBusRelationRemove(Buffer, v10, v11);
        v14 = Buffer;
        if ( Buffer[11] )
        {
          *((_DWORD *)Buffer + 1) &= ~4u;
          PiSwPnPInfoFree((__int64)(Buffer + 3));
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
          PiSwFreeInterfaceList((_QWORD **)Buffer + 23);
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
          result = (__int64)Buffer;
          Buffer[11] = 0LL;
          v14 = Buffer;
        }
        if ( !v14[14] )
        {
          if ( (byte_140EEFF64 & 0x40) != 0 )
            McTemplateK0zz_EtwWriteTransfer(
              v12,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InstanceTable_Remove,
              v13,
              v14[1],
              v14[2]);
          RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
          return PiSwDeviceDereference(Buffer);
        }
      }
    }
  }
  return result;
}
