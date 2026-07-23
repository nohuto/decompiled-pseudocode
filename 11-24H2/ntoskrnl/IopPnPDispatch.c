/*
 * XREFs of IopPnPDispatch @ 0x140A55010
 * Callers:
 *     <none>
 * Callees:
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IopPnPCompleteRequest @ 0x1403CB8F4 (IopPnPCompleteRequest.c)
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     IoInvalidateDeviceRelations @ 0x14048DB00 (IoInvalidateDeviceRelations.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     PiGetDeviceRegProperty @ 0x1408BA9AC (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1409792B8 (PnpGetDeviceResourcesFromRegistry.c)
 *     IopGetRootDevices @ 0x140A5ADB8 (IopGetRootDevices.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopPnPDispatch(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _QWORD *v3; // r12
  void *Information; // rsi
  unsigned int MinorFunction; // r8d
  NTSTATUS RootDevices; // ebx
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  ULONG Length; // ecx
  ULONG v17; // ecx
  ULONG v18; // ecx
  ULONG v19; // ecx
  wchar_t *v20; // rax
  _QWORD *v21; // rdx
  PIO_SECURITY_CONTEXT v22; // rbx
  __m128i si128; // xmm0
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  unsigned int v26; // r8d
  unsigned int v27; // r8d
  unsigned int v28; // r8d
  __int64 Pool2; // rax
  void *v30; // rbx
  _QWORD *v31; // rbx
  int v32; // edx
  char v33; // r8
  PVOID v34; // rcx
  _DWORD *DeviceNode; // rax
  __int64 v36; // rdx
  char *v37; // rdi
  char *v38; // rcx
  ULONG v39; // r9d
  char *v40; // r8
  __int16 v41; // dx
  _WORD *v42; // rax
  int v43; // r8d
  _WORD *v44; // rcx
  __int16 i; // dx
  char *v46; // rcx
  __int16 v47; // dx
  signed __int64 v48; // rcx
  __int64 v49; // rdx
  GUID *SecurityContext; // rcx
  GUID *v51; // rcx
  LARGE_INTEGER ByteOffset; // rax
  LARGE_INTEGER v53; // rdx
  void *v54; // rax
  void *v55[2]; // [rsp+40h] [rbp-10h] BYREF
  ULONG v56; // [rsp+98h] [rbp+48h] BYREF
  int v57; // [rsp+A0h] [rbp+50h] BYREF
  int v58; // [rsp+A8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  Information = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v55[0] = 0LL;
  if ( MinorFunction <= 7 )
  {
    if ( MinorFunction == 7 )
    {
      if ( a1 == *((struct _DEVICE_OBJECT **)IopRootDeviceNode + 4) && !CurrentStackLocation->Parameters.Read.Length )
      {
        RootDevices = IopGetRootDevices(v55);
LABEL_66:
        Information = v55[0];
        goto LABEL_6;
      }
      if ( CurrentStackLocation->Parameters.Read.Length != 4 )
        goto LABEL_5;
      Pool2 = ExAllocatePool2(0x100uLL, 0x10uLL, 0x64647050u);
      v30 = (void *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 1;
        *(_QWORD *)(Pool2 + 8) = a1;
        PsReferenceSiloContext(a1);
        Information = v30;
        goto LABEL_30;
      }
LABEL_23:
      RootDevices = -1073741670;
      goto LABEL_6;
    }
    if ( !MinorFunction )
      goto LABEL_30;
    v24 = MinorFunction - 1;
    if ( !v24 )
      goto LABEL_30;
    v25 = v24 - 1;
    if ( !v25 )
    {
      if ( !a1 || (DeviceNode = a1->DeviceObjectExtension->DeviceNode) == 0LL || (DeviceNode[99] & 0x10000) != 0 )
        IoDeleteDevice(a1);
      IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)IopRootDeviceNode + 4), SingleBusRelations);
      goto LABEL_30;
    }
    v26 = v25 - 1;
    if ( !v26 )
    {
LABEL_30:
      RootDevices = 0;
      goto LABEL_6;
    }
    v27 = v26 - 1;
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        if ( v28 == 1 )
          goto LABEL_30;
        goto LABEL_5;
      }
    }
LABEL_60:
    RootDevices = -1073741823;
    goto LABEL_6;
  }
  v10 = MinorFunction - 8;
  if ( !v10 )
  {
    RootDevices = a2->IoStatus.Status;
    if ( a1 )
      v34 = a1->DeviceObjectExtension->DeviceNode;
    else
      v34 = 0LL;
    if ( v34 != IopRootDeviceNode )
      goto LABEL_6;
    SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( SecurityContext != &GUID_ARBITER_INTERFACE_STANDARD
      && RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) != 16 )
    {
      v51 = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v51 == &GUID_TRANSLATOR_INTERFACE_STANDARD
        || RtlCompareMemory(v51, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
      {
        ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
        *(_QWORD *)(ByteOffset.QuadPart + 32) = IopTranslatorHandlerCm;
        *(_QWORD *)(ByteOffset.QuadPart + 40) = IopTranslatorHandlerIo;
        goto LABEL_30;
      }
      goto LABEL_6;
    }
    v53 = CurrentStackLocation->Parameters.Read.ByteOffset;
    RootDevices = 0;
    *(_QWORD *)(v53.QuadPart + 32) = ArbArbiterHandler;
    switch ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists )
    {
      case 1u:
        v54 = &IopRootPortArbiter;
        break;
      case 2u:
        v54 = &IopRootIrqArbiter;
        break;
      case 3u:
        goto LABEL_125;
      case 4u:
        v54 = &IopRootDmaArbiter;
        break;
      case 6u:
        v54 = &IopRootBusNumberArbiter;
        break;
      case 7u:
LABEL_125:
        v54 = &IopRootMemArbiter;
        break;
      default:
        RootDevices = -1073741811;
        goto LABEL_6;
    }
    *(_QWORD *)(v53.QuadPart + 8) = v54;
    goto LABEL_6;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( a1 )
      v21 = a1->DeviceObjectExtension->DeviceNode;
    else
      v21 = 0LL;
    v22 = CurrentStackLocation->Parameters.Create.SecurityContext;
    LODWORD(v22->SecurityQos) = 65600;
    if ( a1 == *((struct _DEVICE_OBJECT **)IopRootDeviceNode + 4) )
    {
      HIDWORD(v22->SecurityQos) |= 0x1C0u;
      HIDWORD(v22->AccessState) = 0;
    }
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v22->DesiredAccess = 0;
    v22->FullCreateOptions = 1;
    *(__m128i *)&v22[1].SecurityQos = si128;
    v22[1].DesiredAccess = _mm_cvtsi128_si32(si128);
    if ( HIDWORD(v22->AccessState) == -1 )
    {
      v56 = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v21[6],
                  0LL,
                  0x11u,
                  (__int64)&v57,
                  (__int64)&v58,
                  (__int64)&v56,
                  0) >= 0
        && v57 == 4
        && v56 == 4 )
      {
        HIDWORD(v22->AccessState) = v58;
      }
    }
    goto LABEL_30;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v32 = 0;
    v33 = 4;
LABEL_107:
    RootDevices = PnpGetDeviceResourcesFromRegistry((__int64)a1, v32, v33, v55, &v56);
    if ( RootDevices != -1073741772 )
      goto LABEL_66;
    goto LABEL_30;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v32 = 1;
    v33 = 2;
    goto LABEL_107;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 7;
    if ( v15 )
    {
      if ( v15 == 3 )
        goto LABEL_30;
LABEL_5:
      Information = (void *)a2->IoStatus.Information;
      RootDevices = a2->IoStatus.Status;
      goto LABEL_6;
    }
    if ( a1 == *((struct _DEVICE_OBJECT **)IopRootDeviceNode + 4) )
      goto LABEL_5;
    RootDevices = a2->IoStatus.Status;
    if ( RootDevices >= 0 )
    {
      if ( a2->IoStatus.Information )
        goto LABEL_5;
    }
    if ( a1 )
      v3 = a1->DeviceObjectExtension->DeviceNode;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v17 = Length - 1;
      if ( !v17 || (v18 = v17 - 1) == 0 )
      {
        if ( RootDevices != -1073741637 )
          goto LABEL_6;
        RootDevices = PiGetDeviceRegProperty(
                        v3[6],
                        7LL,
                        7,
                        (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                        0LL,
                        &v56);
        if ( RootDevices == -1073741789 )
        {
          v37 = (char *)ExAllocatePool2(0x100uLL, v56, 0x64647050u);
          if ( !v37 )
            goto LABEL_23;
          RootDevices = PiGetDeviceRegProperty(
                          v3[6],
                          v36,
                          7,
                          (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                          v37,
                          &v56);
          v38 = v37;
          if ( RootDevices >= 0 )
          {
            v39 = v56;
            v40 = 0LL;
            if ( v37 < &v37[v56 & 0xFFFFFFFE] )
            {
              do
              {
                v41 = *(_WORD *)v38;
                if ( *(_WORD *)v38 )
                {
                  if ( (unsigned __int16)(v41 - 32) > 0x5Fu || v41 == 44 )
                  {
                    *(_WORD *)v38 = 63;
                    v39 = v56;
                  }
                }
                else
                {
                  if ( v40 && v38 == v40 + 2 )
                    break;
                  v40 = v38;
                }
                v38 += 2;
              }
              while ( v38 < &v37[v39 & 0xFFFFFFFE] );
            }
            Information = v37;
            goto LABEL_6;
          }
          ExFreePoolWithTag(v37, 0);
        }
        if ( RootDevices != -1073741275 )
          goto LABEL_6;
        goto LABEL_5;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 != 2 )
        {
          Information = (void *)a2->IoStatus.Information;
          goto LABEL_6;
        }
        v20 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x4EuLL, 0x64647050u);
        if ( v20 )
        {
          Information = v20;
          wcscpy(v20, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
          RootDevices = 0;
          goto LABEL_6;
        }
        goto LABEL_23;
      }
    }
    v42 = (_WORD *)ExAllocatePool2(0x100uLL, *((unsigned __int16 *)v3 + 20), 0x64647050u);
    if ( !v42 )
      goto LABEL_23;
    v43 = 0;
    v44 = (_WORD *)v3[6];
    Information = v42;
    RootDevices = 0;
    if ( CurrentStackLocation->Parameters.Read.Length )
    {
      while ( *v44 )
      {
        if ( *v44 == 92 && ++v43 == 2 )
        {
          v46 = (char *)(v44 + 1);
          v47 = *(_WORD *)v46;
          if ( *(_WORD *)v46 )
          {
            v48 = v46 - (char *)v42;
            do
            {
              *v42++ = v47;
              v47 = *(_WORD *)((char *)v42 + v48);
            }
            while ( v47 );
          }
          break;
        }
        ++v44;
      }
    }
    else
    {
      for ( i = *v44; *v44; i = *v44 )
      {
        if ( i == 92 && ++v43 == 2 )
          break;
        ++v44;
        *v42++ = i;
      }
    }
  }
  else
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 1 || a2->IoStatus.Information )
      goto LABEL_5;
    if ( a1 )
      v31 = a1->DeviceObjectExtension->DeviceNode;
    else
      v31 = 0LL;
    PiGetDeviceRegProperty(v31[6], 7LL, 1, 14, 0LL, &v56);
    if ( !v56 )
      goto LABEL_60;
    Information = (void *)ExAllocatePool2(0x100uLL, v56, 0x64647050u);
    if ( !Information )
      goto LABEL_23;
    RootDevices = PiGetDeviceRegProperty(v31[6], v49, 1, 14, Information, &v56);
    if ( RootDevices < 0 )
    {
      if ( RootDevices == -1073741275 )
        RootDevices = -1073741772;
      ExFreePoolWithTag(Information, 0);
      Information = 0LL;
    }
  }
LABEL_6:
  IopPnPCompleteRequest(a2, RootDevices, (ULONG_PTR)Information);
  return (unsigned int)RootDevices;
}
