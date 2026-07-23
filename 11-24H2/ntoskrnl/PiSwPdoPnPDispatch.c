/*
 * XREFs of PiSwPdoPnPDispatch @ 0x1409F33B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     _PnpStringFromGuid @ 0x1408B4EBC (_PnpStringFromGuid.c)
 *     PiSwLock @ 0x1408B6E3C (PiSwLock.c)
 *     PnpAllocatePWSTR @ 0x1408D1794 (PnpAllocatePWSTR.c)
 *     PiSwCompleteCreate @ 0x1409F0EA8 (PiSwCompleteCreate.c)
 *     PnpAllocateMultiSZ @ 0x1409F3874 (PnpAllocateMultiSZ.c)
 *     PiSwDestroyDeviceObject @ 0x1409F3944 (PiSwDestroyDeviceObject.c)
 *     PiSwProcessRemove @ 0x1409F3978 (PiSwProcessRemove.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1409F3D04 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1409F3F3C (PiSwDeviceMakeCompatibleIds.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _QWORD *DeviceExtension; // rdi
  signed int Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int MinorFunction; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  _QWORD *v10; // r10
  ULONG v11; // ecx
  ULONG v12; // ecx
  void *v13; // rcx
  signed int MultiSZ; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  __int64 v21; // rax
  ULONG_PTR v22; // rbx
  _QWORD *v23; // rdx
  ULONG Length; // ecx
  _WORD *v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  __int64 v32; // r8
  __int64 v33; // rdx
  char v34; // cl
  bool v35; // si
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // eax
  bool v39; // si
  PIO_SECURITY_CONTEXT SecurityContext; // r8
  __m128i si128; // xmm0
  int v42; // ecx
  int v43; // edx
  unsigned int v44; // ecx
  unsigned int v45; // edx
  __int64 v46; // rdx
  ULONG_PTR v47; // rdx
  ULONG_PTR v48; // rax
  ULONG v49; // ecx
  ULONG v50; // ecx
  wchar_t *Pool2; // rax
  __int64 v52; // rax

  DeviceExtension = DeviceObject->DeviceExtension;
  Status = Irp->IoStatus.Status;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (DeviceExtension[1] & 0x10) != 0 )
  {
    Status = -1073741810;
    goto LABEL_31;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 9 )
  {
    v8 = MinorFunction - 12;
    if ( !v8 )
    {
      PiSwLock();
      v23 = (_QWORD *)*DeviceExtension;
      if ( *DeviceExtension )
      {
        Length = CurrentStackLocation->Parameters.Read.Length;
        if ( Length )
        {
          if ( Length != 1 )
            goto LABEL_30;
          v25 = (_WORD *)v23[7];
        }
        else
        {
          v25 = (_WORD *)v23[6];
        }
        if ( !v25 )
          goto LABEL_30;
        v26 = 0x7FFFFFFFLL;
        goto LABEL_28;
      }
LABEL_57:
      Status = -1073741810;
      goto LABEL_30;
    }
    v9 = v8 - 7;
    if ( !v9 )
    {
      PiSwLock();
      v10 = (_QWORD *)*DeviceExtension;
      if ( *DeviceExtension )
      {
        v11 = CurrentStackLocation->Parameters.Read.Length;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( !v12 )
          {
            v13 = (void *)v10[3];
            if ( v13 )
            {
              MultiSZ = PnpAllocateMultiSZ(v13);
LABEL_29:
              Status = MultiSZ;
            }
LABEL_30:
            ExReleaseResourceLite(&PiSwLockObj);
            KeLeaveCriticalRegion();
            goto LABEL_31;
          }
          v49 = v12 - 1;
          if ( !v49 )
          {
            MultiSZ = PiSwDeviceMakeCompatibleIds(*DeviceExtension, &Irp->IoStatus.Information);
            goto LABEL_29;
          }
          v50 = v49 - 1;
          if ( v50 )
          {
            if ( v50 != 2 || !v10[5] )
              goto LABEL_30;
            Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x4EuLL, 0x57706E50u);
            Irp->IoStatus.Information = (ULONG_PTR)Pool2;
            if ( !Pool2 )
            {
              Status = -1073741670;
              goto LABEL_30;
            }
            MultiSZ = PnpStringFromGuid(*(int **)(*DeviceExtension + 40LL), Pool2);
            goto LABEL_29;
          }
          v25 = (_WORD *)v10[2];
          v26 = 200LL;
        }
        else
        {
          v25 = (_WORD *)v10[1];
          v26 = 200LL;
        }
LABEL_28:
        MultiSZ = PnpAllocatePWSTR(v25, v26, 0x57706E50u, (PVOID *)&Irp->IoStatus.Information);
        goto LABEL_29;
      }
      goto LABEL_57;
    }
    v28 = v9 - 1;
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( v29 )
      {
        v30 = v29 - 1;
        if ( !v30 )
        {
          Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
          goto LABEL_31;
        }
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 != 2 )
            goto LABEL_31;
          PiSwCompleteCreate(DeviceObject);
          goto LABEL_45;
        }
        PiSwLock();
        v33 = *((_DWORD *)DeviceExtension + 2) | 4u;
        *((_DWORD *)DeviceExtension + 2) = v33;
        v34 = v33;
        if ( (v33 & 8) != 0 )
        {
          v52 = *DeviceExtension;
          if ( *DeviceExtension )
          {
            if ( *(PDEVICE_OBJECT *)(v52 + 120) == DeviceObject && (*(_DWORD *)(v52 + 4) & 2) != 0 )
            {
              v34 = v33 | 0x40;
              *((_DWORD *)DeviceExtension + 2) = v33 | 0x40;
            }
          }
        }
        v35 = (v34 & 8) != 0 && (v34 & 0x40) == 0;
        LOBYTE(v33) = v35;
        PiSwProcessRemove(DeviceObject, v33, v32);
        goto LABEL_44;
      }
      v48 = ExAllocatePool2(0x100uLL, 0x18uLL, 0x57706E50u);
      if ( v48 )
      {
        *(_DWORD *)(v48 + 20) = 0;
        *(_DWORD *)(v48 + 16) = 15;
        *(GUID *)v48 = GUID_BUS_TYPE_SW_DEVICE;
        Irp->IoStatus.Information = v48;
        goto LABEL_45;
      }
LABEL_62:
      Status = -1073741670;
      goto LABEL_31;
    }
    PiSwLock();
    if ( !*DeviceExtension )
      goto LABEL_57;
    v47 = Irp->IoStatus.Information | 2;
    if ( (*(_DWORD *)(*DeviceExtension + 64LL) & 4) == 0 )
      v47 = Irp->IoStatus.Information & 0xFFFFFFFFFFFFFFFDuLL;
    Irp->IoStatus.Information = v47;
LABEL_48:
    Status = 0;
    goto LABEL_30;
  }
  if ( MinorFunction == 9 )
  {
    PiSwLock();
    if ( !*DeviceExtension )
      goto LABEL_57;
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    SecurityContext->DesiredAccess = 0;
    SecurityContext->FullCreateOptions = 1;
    *(__m128i *)&SecurityContext[1].SecurityQos = si128;
    SecurityContext[1].DesiredAccess = _mm_cvtsi128_si32(si128);
    SecurityContext[1].FullCreateOptions = 0;
    LODWORD(SecurityContext[2].SecurityQos) = 0;
    v42 = HIDWORD(SecurityContext->SecurityQos) | 0x240;
    HIDWORD(SecurityContext->SecurityQos) = v42;
    v43 = v42 ^ ((unsigned __int8)v42 ^ (unsigned __int8)(16 * *(_DWORD *)(*DeviceExtension + 64LL))) & 0x10;
    HIDWORD(SecurityContext->SecurityQos) = v43;
    v44 = v43 & 0xFFFFFF7F | ((*(_DWORD *)(*DeviceExtension + 64LL) & 2) << 6);
    HIDWORD(SecurityContext->SecurityQos) = v44;
    v45 = v44 & 0xFFFDFFFF | ((*(_DWORD *)(*DeviceExtension + 64LL) & 4) << 15);
    HIDWORD(SecurityContext->SecurityQos) = v45;
    HIDWORD(SecurityContext->SecurityQos) = v45 & 0xFFFFFEFF | ~(32
                                                               * (unsigned __int16)*(_DWORD *)(*DeviceExtension + 64LL)) & 0x100;
    goto LABEL_48;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    PiSwLock();
    if ( (DeviceExtension[1] & 1) == 0 )
    {
      LOBYTE(v46) = 1;
      Status = PiSwDeviceInterfacesUpdateState(*DeviceExtension, v46);
      if ( Status < 0 )
        PiSwDeviceInterfacesUpdateState(*DeviceExtension, 0LL);
      else
        *((_DWORD *)DeviceExtension + 2) |= 1u;
      goto LABEL_30;
    }
    goto LABEL_48;
  }
  v15 = MinorFunction - 1;
  if ( !v15 )
  {
LABEL_45:
    Status = 0;
    goto LABEL_31;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    PiSwLock();
    v38 = *((_DWORD *)DeviceExtension + 2) | 2;
    *((_DWORD *)DeviceExtension + 2) = v38;
    v39 = (v38 & 8) != 0 && (v38 & 0x40) == 0;
    LOBYTE(v36) = v39;
    PiSwProcessRemove(DeviceObject, v36, v37);
    if ( !v39 )
      PiSwDestroyDeviceObject(DeviceObject);
LABEL_44:
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegion();
    goto LABEL_45;
  }
  v17 = v16 - 1;
  if ( !v17 )
    goto LABEL_45;
  v18 = v17 - 1;
  if ( !v18 )
    goto LABEL_45;
  v19 = v18 - 1;
  if ( !v19 )
    goto LABEL_45;
  v20 = v19 - 1;
  if ( !v20 )
    goto LABEL_45;
  if ( v20 == 1 && CurrentStackLocation->Parameters.Read.Length == 4 )
  {
    v21 = ExAllocatePool2(0x100uLL, 0x10uLL, 0x57706E50u);
    v22 = v21;
    if ( !v21 )
      goto LABEL_62;
    *(_DWORD *)v21 = 1;
    *(_QWORD *)(v21 + 8) = DeviceObject;
    PsReferenceSiloContext(DeviceObject);
    Irp->IoStatus.Information = v22;
    goto LABEL_45;
  }
LABEL_31:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
