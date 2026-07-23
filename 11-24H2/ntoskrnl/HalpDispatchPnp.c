/*
 * XREFs of HalpDispatchPnp @ 0x140A73220
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1404D040C (HalpPassIrpFromFdoToPdo.c)
 *     HalpInitializeLateSystemActions @ 0x1405395FC (HalpInitializeLateSystemActions.c)
 *     HalpQueryIdFdo @ 0x1406FC9D4 (HalpQueryIdFdo.c)
 *     HalpQueryIdPdo @ 0x1406FCA90 (HalpQueryIdPdo.c)
 *     HalpQueryResources @ 0x1406FCB70 (HalpQueryResources.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407002E8 (HalpQueryAcpiResourceRequirements.c)
 *     HalpQueryDeviceRelations @ 0x140A73380 (HalpQueryDeviceRelations.c)
 *     HalpQueryInterface @ 0x140AA9A00 (HalpQueryInterface.c)
 *     HalpInitSystemHelper @ 0x140B4D758 (HalpInitSystemHelper.c)
 */

NTSTATUS __fastcall HalpDispatchPnp(__int64 a1, IRP *a2)
{
  _DWORD *v2; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int MinorFunction; // ecx
  unsigned int DeviceRelations; // eax
  unsigned int Status; // ebx
  unsigned int Interface; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  bool v21; // zf
  PIO_SECURITY_CONTEXT SecurityContext; // rcx
  unsigned int v23; // eax

  v2 = *(_DWORD **)(a1 + 64);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *v2 == 192 )
  {
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( MinorFunction <= 7 )
    {
      if ( MinorFunction == 7 )
      {
        DeviceRelations = HalpQueryDeviceRelations(
                            a1,
                            CurrentStackLocation->Parameters.Read.Length,
                            &a2->IoStatus.Information);
LABEL_5:
        Status = DeviceRelations;
        goto LABEL_6;
      }
      Status = 0;
      if ( !CurrentStackLocation->MinorFunction )
      {
        if ( v2[8] == 129 )
        {
          HalpInitializeLateSystemActions();
          HalpInitSystemHelper(25LL, 26LL, 0LL);
        }
        goto LABEL_11;
      }
      v11 = MinorFunction - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 - 1 > 1 )
                goto LABEL_7;
            }
          }
        }
        goto LABEL_11;
      }
      Status = v2[8] != 132 ? 0xC0000001 : 0;
LABEL_6:
      if ( Status == -1073741637 )
      {
LABEL_7:
        Status = a2->IoStatus.Status;
LABEL_8:
        IofCompleteRequest(a2, 0);
        return Status;
      }
LABEL_11:
      a2->IoStatus.Status = Status;
      goto LABEL_8;
    }
    v15 = MinorFunction - 8;
    if ( !v15 )
    {
      DeviceRelations = HalpQueryInterface(
                          a1,
                          CurrentStackLocation->Parameters.WMI.ProviderId,
                          CurrentStackLocation->Parameters.QueryInterface.Version,
                          CurrentStackLocation->Parameters.CreatePipe.Parameters,
                          CurrentStackLocation->Parameters.QueryInterface.Size,
                          CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart,
                          (__int64)&a2->IoStatus.Information);
      goto LABEL_5;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( WORD1(SecurityContext->SecurityQos) != 1 )
        goto LABEL_7;
      v23 = HIDWORD(SecurityContext->SecurityQos) & 0xFFFFFEC3;
      SecurityContext->FullCreateOptions = 1;
      HIDWORD(SecurityContext->SecurityQos) = v23 | 0xC0;
      Status = 0;
      LODWORD(SecurityContext->AccessState) = -1;
      HIDWORD(SecurityContext->AccessState) = -1;
      HIDWORD(SecurityContext[1].AccessState) = 4;
      SecurityContext[1].DesiredAccess = 4;
      *(PSECURITY_QUALITY_OF_SERVICE *)((char *)&SecurityContext[2].SecurityQos + 4) = 0LL;
      HIDWORD(SecurityContext[2].AccessState) = 0;
      goto LABEL_6;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      DeviceRelations = HalpQueryResources(a1, &a2->IoStatus.Information);
      goto LABEL_5;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 8;
      if ( !v19 )
      {
        DeviceRelations = HalpQueryIdPdo(a1, CurrentStackLocation->Parameters.Read.Length, &a2->IoStatus.Information);
        goto LABEL_5;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 == 2;
        goto LABEL_41;
      }
    }
    else
    {
      if ( v2[8] == 129 )
      {
        DeviceRelations = HalpQueryAcpiResourceRequirements((unsigned int **)&a2->IoStatus.Information);
        goto LABEL_5;
      }
      if ( v2[8] != 130 && v2[8] != 131 )
      {
        v21 = v2[8] == 132;
LABEL_41:
        if ( !v21 )
          goto LABEL_7;
      }
    }
    Status = 0;
    goto LABEL_11;
  }
  if ( *v2 != 193 )
  {
    Status = -1073741808;
    goto LABEL_11;
  }
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 7u:
      Interface = HalpQueryDeviceRelations(a1, CurrentStackLocation->Parameters.Read.Length, &a2->IoStatus.Information);
      break;
    case 8u:
      Interface = HalpQueryInterface(
                    a1,
                    CurrentStackLocation->Parameters.WMI.ProviderId,
                    CurrentStackLocation->Parameters.QueryInterface.Version,
                    CurrentStackLocation->Parameters.CreatePipe.Parameters,
                    CurrentStackLocation->Parameters.QueryInterface.Size,
                    CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart,
                    (__int64)&a2->IoStatus.Information);
      break;
    case 0x13u:
      Interface = HalpQueryIdFdo(
                    (unsigned int)CurrentStackLocation->MinorFunction - 8,
                    CurrentStackLocation->Parameters.Read.Length,
                    &a2->IoStatus.Information);
      break;
    default:
      return HalpPassIrpFromFdoToPdo(a1, a2);
  }
  Status = Interface;
  if ( (int)(Interface + 0x80000000) >= 0 && Interface != -1073741637 )
    goto LABEL_11;
  if ( Interface != -1073741637 )
    a2->IoStatus.Status = Interface;
  return HalpPassIrpFromFdoToPdo(a1, a2);
}
