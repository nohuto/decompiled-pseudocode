/*
 * XREFs of PiSwIrpStartCreateWorker @ 0x1409F13D4
 * Callers:
 *     PiSwStartCreate @ 0x14072EFAC (PiSwStartCreate.c)
 *     PiSwIrpStartCreate @ 0x1409F0D04 (PiSwIrpStartCreate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1402B827C (McTemplateK0zzd_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PsGetCurrentThreadProcessId @ 0x14041D840 (PsGetCurrentThreadProcessId.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     RtlStringCbLengthW @ 0x14044CF68 (RtlStringCbLengthW.c)
 *     IoInvalidateDeviceRelations @ 0x14048DB00 (IoInvalidateDeviceRelations.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405A5298 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zztt_EtwWriteTransfer @ 0x1405A5450 (McTemplateK0zztt_EtwWriteTransfer.c)
 *     McTemplateK0zzzdzzq_EtwWriteTransfer @ 0x1405A5788 (McTemplateK0zzzdzzq_EtwWriteTransfer.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PiSwIrpCleanup @ 0x14072E8F0 (PiSwIrpCleanup.c)
 *     PiSwQueuedCreateInfoCreate @ 0x14072EE9C (PiSwQueuedCreateInfoCreate.c)
 *     PiSwPropertySet @ 0x1408B5A60 (PiSwPropertySet.c)
 *     PiSwLock @ 0x1408B6E3C (PiSwLock.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1408BB740 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpFreeDevPropertyArray @ 0x1408D192C (PnpFreeDevPropertyArray.c)
 *     PiSwPnPInfoFree @ 0x1409F0BC8 (PiSwPnPInfoFree.c)
 *     PiSwFreeInterfaceList @ 0x1409F0E64 (PiSwFreeInterfaceList.c)
 *     PiSwDeviceCreate @ 0x1409F1928 (PiSwDeviceCreate.c)
 *     PiSwValidateCreateData @ 0x1409F1994 (PiSwValidateCreateData.c)
 *     PiSwInstanceInfoInit @ 0x1409F1CC0 (PiSwInstanceInfoInit.c)
 *     PiSwPnPInfoInit @ 0x1409F2AF4 (PiSwPnPInfoInit.c)
 *     PnpCopyDevPropertyArray @ 0x1409F2BB0 (PnpCopyDevPropertyArray.c)
 *     PiSwBusRelationAdd @ 0x1409F2DD8 (PiSwBusRelationAdd.c)
 *     PiSwBusRelationRemove @ 0x1409F32DC (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x1409F3E68 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x1409F40F4 (PiSwQueuedCreateInfoFree.c)
 *     PiSwFindPdoAssociation @ 0x140A72894 (PiSwFindPdoAssociation.c)
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140A92EC8 (PiSwDoesCreateChangesRequireReEnum.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpStartCreateWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  struct _DEVICE_OBJECT *v3; // r14
  struct _DEVICE_OBJECT *v4; // r12
  char v5; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  int Data; // ebx
  __int64 v11; // r8
  PVOID *inserted; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r8
  void *v16; // r11
  const wchar_t **v17; // rcx
  BOOLEAN v18; // bl
  int v19; // eax
  int v20; // eax
  int v21; // eax
  PVOID v22; // r8
  __int64 Pool2; // rax
  NTSTATUS v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  _DWORD *v29; // rcx
  PVOID *v30; // rdx
  void *v31; // rcx
  struct _DEVICE_OBJECT *v32; // rax
  __int64 v33; // r8
  _QWORD *v34; // rbx
  void *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // eax
  PVOID v39; // rcx
  PVOID *v40; // rdx
  int v41; // r8d
  void *v42; // rcx
  int CurrentThreadProcessId; // eax
  char *Buffer; // [rsp+50h] [rbp-30h] BYREF
  __int64 v45; // [rsp+58h] [rbp-28h] BYREF
  size_t pcbLength; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  BOOLEAN NewElement; // [rsp+C8h] [rbp+48h] BYREF
  int v49; // [rsp+D0h] [rbp+50h] BYREF
  PVOID P; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  Buffer = 0LL;
  P = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  NewElement = 0;
  v5 = 0;
  pcbLength = 0LL;
  DestinationString = 0LL;
  Data = PiSwValidateCreateData();
  if ( Data < 0 )
    goto LABEL_7;
  if ( (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zzzdzzq_EtwWriteTransfer(
      v9,
      v8,
      v11,
      *(const wchar_t **)a1,
      *(const wchar_t **)(a1 + 16),
      *(const wchar_t **)(a1 + 8),
      *(_DWORD *)(a1 + 64),
      *(const wchar_t **)(a1 + 72),
      *(const wchar_t **)(a1 + 80),
      *(_DWORD *)(a1 + 104));
  PiSwLock();
  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 184);
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL) )
    {
      Data = -1073741637;
      goto LABEL_6;
    }
  }
  Data = PiSwDeviceCreate(&Buffer);
  if ( Data >= 0 )
  {
    Data = PiSwInstanceInfoInit(Buffer + 8, a1);
    if ( Data >= 0 )
    {
      inserted = (PVOID *)RtlInsertElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer, 8u, &NewElement);
      LOBYTE(v16) = 0;
      if ( !inserted )
        goto LABEL_63;
      v17 = (const wchar_t **)*inserted;
      v18 = NewElement;
      P = *inserted;
      if ( (byte_140EEFF64 & 0x40) != 0 )
      {
        McTemplateK0zzd_EtwWriteTransfer(
          (__int64)v17,
          (__int64)KMPnPEvt_SwDevice_InstanceTable_Add,
          v15,
          v17[1],
          v17[2],
          NewElement == 0);
        v17 = (const wchar_t **)P;
      }
      if ( v18 )
      {
        Buffer = 0LL;
        _InterlockedIncrement((volatile signed __int32 *)v17);
        v19 = PiSwPnPInfoInit((char *)P + 24, a1);
        LOBYTE(v16) = 0;
        Data = v19;
        if ( v19 < 0 )
          goto LABEL_64;
        *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
        if ( !*(_QWORD *)(a1 + 96) )
          goto LABEL_35;
        Pool2 = ExAllocatePool2(0x100uLL, *(unsigned int *)(a1 + 88), 0x57706E50u);
        LOBYTE(v16) = 0;
        *((_QWORD *)P + 19) = Pool2;
        v14 = (_QWORD *)*((_QWORD *)P + 19);
        if ( v14 )
        {
          memmove(v14, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
LABEL_35:
          v20 = PnpCopyDevPropertyArray(
                  *(_DWORD *)(a1 + 104),
                  *(_QWORD *)(a1 + 112),
                  v15,
                  (int)P + 176,
                  (__int64)P + 168);
          LOBYTE(v16) = 0;
          Data = v20;
          if ( v20 < 0 )
            goto LABEL_64;
          v21 = PiSwBusRelationAdd(*(_QWORD *)(a1 + 8), P);
          LOBYTE(v16) = 0;
          Data = v21;
          if ( v21 < 0 )
            goto LABEL_64;
          *((_DWORD *)P + 41) = PsGetCurrentThreadProcessId();
LABEL_38:
          v3 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)P + 14), 0x746C6644u);
LABEL_39:
          v16 = 0LL;
LABEL_40:
          v5 = 1;
          goto LABEL_41;
        }
LABEL_63:
        Data = -1073741670;
        goto LABEL_64;
      }
      _InterlockedIncrement((volatile signed __int32 *)v17);
      v22 = P;
      if ( (*((_DWORD *)P + 1) & 1) != 0 )
      {
        Data = -1073741771;
        goto LABEL_6;
      }
      if ( (byte_140EEFF64 & 0x40) != 0 )
      {
        McTemplateK0zztt_EtwWriteTransfer(
          (*((_DWORD *)P + 1) >> 1) & 1,
          (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_EnumerationStatus,
          (__int64)P,
          *((const wchar_t **)P + 1),
          *((const wchar_t **)P + 2),
          (*((_DWORD *)P + 1) & 2) != 0,
          *((_QWORD *)P + 15) != 0LL);
        v22 = P;
      }
      if ( (*((_DWORD *)v22 + 1) & 2) == 0 )
      {
        v25 = *((_QWORD *)v22 + 15);
        if ( v25 )
        {
          v26 = *(unsigned int *)(*(_QWORD *)(v25 + 64) + 8LL);
          if ( (v26 & 2) == 0 )
          {
            if ( !(unsigned __int8)PiSwDoesCreateChangesRequireReEnum(v22, a1) )
            {
              v49 = 0;
              v45 = 0LL;
              if ( (byte_140EEFF64 & 0x40) != 0 )
                McTemplateK0zz_EtwWriteTransfer(
                  v26,
                  (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_PropertyUpdate,
                  v27,
                  *((const wchar_t **)P + 1),
                  *((const wchar_t **)P + 2));
              v28 = PnpCopyDevPropertyArray(
                      *(_DWORD *)(a1 + 104),
                      *(_QWORD *)(a1 + 112),
                      v27,
                      (unsigned int)&v49,
                      (__int64)&v45);
              v16 = 0LL;
              Data = v28;
              if ( v28 < 0 )
                goto LABEL_6;
              v29 = P;
              v30 = (PVOID *)*((_QWORD *)P + 21);
              if ( v30 )
              {
                PnpFreeDevPropertyArray(*((_DWORD *)P + 44), v30, 0x57706E50u);
                v29 = P;
                v16 = 0LL;
              }
              v29[44] = v49;
              v14 = P;
              *((_QWORD *)P + 21) = v45;
LABEL_41:
              if ( !a2 )
                goto LABEL_42;
              if ( v5 )
              {
                _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)PiSwIrpCancelStartCreate);
                if ( !*(_BYTE *)(a2 + 68) )
                {
                  *((_QWORD *)P + 18) = a2;
                  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
                  goto LABEL_42;
                }
                Data = -1073741536;
              }
              else
              {
                v24 = RtlStringCbCopyW(
                        *(NTSTRSAFE_PWSTR *)(a2 + 24),
                        *(unsigned int *)(v2 + 8),
                        *((NTSTRSAFE_PCWSTR *)P + 10));
                LOBYTE(v16) = 0;
                Data = v24;
                if ( v24 >= 0 )
                {
                  Data = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(a2 + 24), *(unsigned int *)(v2 + 8), &pcbLength);
                  if ( Data >= 0 )
                  {
LABEL_42:
                    *((_DWORD *)P + 1) |= 1u;
                    if ( a2 )
                    {
                      v14 = *(_QWORD **)(v2 + 48);
                      v14[4] = P;
                      P = v16;
                    }
                    if ( v3 )
                    {
                      IoInvalidateDeviceRelations(v3, SingleBusRelations);
                      LOBYTE(v16) = 0;
                    }
                    if ( v4 )
                    {
                      IoInvalidateDeviceRelations(v4, SingleBusRelations);
                      LOBYTE(v16) = 0;
                    }
                    if ( Data >= 0 )
                      goto LABEL_6;
                  }
                }
              }
LABEL_64:
              if ( NewElement != (_BYTE)v16 )
              {
                if ( (byte_140EEFF64 & 0x40) != 0 )
                  McTemplateK0zz_EtwWriteTransfer(
                    (__int64)v14,
                    (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InstanceTable_Remove,
                    v15,
                    *((const wchar_t **)P + 1),
                    *((const wchar_t **)P + 2));
                RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &P);
                PiSwDeviceDereference(P);
                if ( *((_QWORD *)P + 14) )
                  PiSwBusRelationRemove(P);
              }
              goto LABEL_6;
            }
            v22 = P;
          }
          if ( (byte_140EEFF64 & 0x40) != 0 )
          {
            McTemplateK0zz_EtwWriteTransfer(
              v26,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_QueueCreate,
              (__int64)v22,
              *((const wchar_t **)v22 + 1),
              *((const wchar_t **)v22 + 2));
            v22 = P;
          }
          v31 = (void *)*((_QWORD *)v22 + 11);
          if ( v31 )
          {
            PiSwQueuedCreateInfoFree(v31);
            *((_QWORD *)P + 11) = 0LL;
            v22 = P;
          }
          Data = PiSwQueuedCreateInfoCreate((PVOID *)v22 + 11, a1);
          if ( Data < 0 )
            goto LABEL_6;
          *((_DWORD *)P + 1) |= 2u;
          goto LABEL_38;
        }
      }
      v32 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*((_QWORD *)v22 + 14), 0x746C6644u);
      v34 = P;
      v3 = v32;
      if ( v32 )
      {
        LOBYTE(v33) = 1;
        if ( PiSwFindPdoAssociation(P, v32, v33) )
        {
          ObfDereferenceObject(v35);
          v3 = 0LL;
          if ( (byte_140EEFF64 & 0x40) != 0 )
            McTemplateK0zz_EtwWriteTransfer(
              v36,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_QueueCreate,
              v37,
              *((const wchar_t **)P + 1),
              *((const wchar_t **)P + 2));
          v38 = PiSwQueuedCreateInfoCreate((PVOID *)P + 11, a1);
          v16 = 0LL;
          Data = v38;
          if ( v38 < 0 )
            goto LABEL_6;
          goto LABEL_40;
        }
      }
      if ( wcsicmp(*(const wchar_t **)(v34[14] + 8LL), *(const wchar_t **)(a1 + 8)) )
      {
        RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(a1 + 8));
        v4 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
      }
      *((_DWORD *)P + 1) &= ~4u;
      PiSwBusRelationRemove(P);
      PiSwPnPInfoFree((__int64)P + 24);
      v39 = P;
      if ( *((_QWORD *)P + 19) )
      {
        ExFreePoolWithTag(*((PVOID *)P + 19), 0x57706E50u);
        *((_QWORD *)P + 19) = 0LL;
        *((_DWORD *)P + 40) = 0;
        v39 = P;
      }
      v40 = (PVOID *)*((_QWORD *)v39 + 21);
      if ( v40 )
      {
        PnpFreeDevPropertyArray(*((_DWORD *)v39 + 44), v40, 0x57706E50u);
        *((_DWORD *)P + 44) = 0;
        *((_QWORD *)P + 21) = 0LL;
        v39 = P;
      }
      PiSwFreeInterfaceList((_QWORD **)v39 + 23);
      Data = PiSwPnPInfoInit((char *)P + 24, a1);
      if ( Data < 0 )
        goto LABEL_6;
      *((_DWORD *)P + 40) = *(_DWORD *)(a1 + 88);
      if ( *(_QWORD *)(a1 + 96) )
      {
        *((_QWORD *)P + 19) = ExAllocatePool2(0x100uLL, *(unsigned int *)(a1 + 88), 0x57706E50u);
        v42 = (void *)*((_QWORD *)P + 19);
        if ( !v42 )
        {
          Data = -1073741670;
          goto LABEL_6;
        }
        memmove(v42, *(const void **)(a1 + 96), *(unsigned int *)(a1 + 88));
      }
      Data = PnpCopyDevPropertyArray(*(_DWORD *)(a1 + 104), *(_QWORD *)(a1 + 112), v41, (int)P + 176, (__int64)P + 168);
      if ( Data >= 0 )
      {
        Data = PiSwBusRelationAdd(*(_QWORD *)(a1 + 8), P);
        if ( Data >= 0 )
        {
          CurrentThreadProcessId = PsGetCurrentThreadProcessId();
          v14 = P;
          *((_DWORD *)P + 41) = CurrentThreadProcessId;
          *((_DWORD *)P + 1) &= ~2u;
          goto LABEL_39;
        }
      }
    }
  }
LABEL_6:
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( Data >= 0 && !v5 )
  {
    v11 = *(_QWORD *)(a1 + 112);
    if ( v11 )
    {
      Data = PiSwPropertySet(*(_QWORD *)(a2 + 24), 1LL, v11, *(_DWORD *)(a1 + 104));
      if ( Data == -1073741772 )
        Data = 0;
    }
  }
LABEL_7:
  if ( a2 )
  {
    if ( Data < 0 )
    {
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    else
    {
      if ( v5 )
      {
        Data = 259;
        goto LABEL_9;
      }
      *(_QWORD *)(a2 + 56) = pcbLength + 2;
    }
    *(_DWORD *)(a2 + 48) = Data;
    IofCompleteRequest((PIRP)a2, 0);
  }
  else if ( Data >= 0 )
  {
    if ( (byte_140EEFF64 & 0x40) != 0 )
      McTemplateK0zztt_EtwWriteTransfer(
        v9,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_LifetimeChanged,
        v11,
        *((const wchar_t **)P + 1),
        *((const wchar_t **)P + 2),
        *((_DWORD *)P + 45),
        1);
    *((_DWORD *)P + 45) = 1;
    PiSwIrpCleanup((__int64)P, v8, v11);
  }
LABEL_9:
  if ( P )
    PiSwDeviceDereference(P);
  if ( Buffer )
    PiSwDeviceDereference(Buffer);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)Data;
}
