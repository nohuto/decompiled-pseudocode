/*
 * XREFs of UsbhFdoReturnDeviceConfigInfo @ 0x1C0030E68
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0015370 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 *     memset @ 0x1C0023880 (memset.c)
 *     UsbhFreeID @ 0x1C00503BC (UsbhFreeID.c)
 *     UsbhCopyPnpString @ 0x1C00599F0 (UsbhCopyPnpString.c)
 */

__int64 __fastcall UsbhFdoReturnDeviceConfigInfo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  char *v12; // rcx

  v6 = PdoExt(a2);
  v7 = FdoExt(a1);
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext && LODWORD(SecurityContext->SecurityQos) == 1 )
  {
    if ( HIDWORD(SecurityContext->SecurityQos) == 204 )
    {
      memset((char *)&SecurityContext->AccessState + 4, 0, 0xC0uLL);
      LODWORD(SecurityContext->AccessState) = 0;
      v10 = 0;
      LODWORD(SecurityContext->SecurityQos) = 1;
      HIDWORD(SecurityContext->SecurityQos) = 204;
      if ( (v7[640] & 0x8000) != 0 )
      {
        LODWORD(SecurityContext->AccessState) = 1;
        v10 = 1;
      }
      if ( (v7[640] & 0x80u) != 0 )
      {
        v10 |= 8u;
        LODWORD(SecurityContext->AccessState) = v10;
      }
      if ( _bittest(v7 + 640, 0x10u) )
      {
        v10 |= 4u;
        LODWORD(SecurityContext->AccessState) = v10;
      }
      v11 = v7[640];
      if ( (v11 & 0x8001) == 0x8001 || (v11 & 0x40) != 0 )
      {
        v10 |= 2u;
        LODWORD(SecurityContext->AccessState) = v10;
      }
      if ( (v7[640] & 0x80000) != 0 )
      {
        v10 |= 0x20u;
        LODWORD(SecurityContext->AccessState) = v10;
      }
      if ( (v7[640] & 1) != 0 )
      {
        v10 |= 0x10u;
        LODWORD(SecurityContext->AccessState) = v10;
      }
      if ( v7[758] == 100 )
        LODWORD(SecurityContext->AccessState) = v10 | 0x40;
      if ( _bittest(v6 + 355, 0x10u) )
      {
        HIDWORD(SecurityContext[5].AccessState) |= 1u;
        *(_OWORD *)&SecurityContext[5].DesiredAccess = *(_OWORD *)(v6 + 650);
        *(_OWORD *)&SecurityContext[6].AccessState = *(_OWORD *)(v6 + 654);
        *(_OWORD *)&SecurityContext[7].SecurityQos = *(_OWORD *)(v6 + 658);
        *(_OWORD *)&SecurityContext[7].DesiredAccess = *(_OWORD *)(v6 + 662);
        LODWORD(SecurityContext[8].AccessState) = v6[666];
      }
      v9 = UsbhCopyPnpString((char *)&SecurityContext[1].SecurityQos + 4, v6 + 528);
      if ( v9 >= 0 )
      {
        v9 = UsbhCopyPnpString((char *)&SecurityContext->AccessState + 4, v6 + 524);
        if ( v9 >= 0 )
        {
          v9 = UsbhCopyPnpString(&SecurityContext[1].FullCreateOptions, v6 + 552);
          if ( v9 >= 0 )
            goto LABEL_29;
          UsbhFreeID((char *)&SecurityContext[1].SecurityQos + 4);
          v12 = (char *)&SecurityContext->AccessState + 4;
        }
        else
        {
          v12 = (char *)&SecurityContext[1].SecurityQos + 4;
        }
        UsbhFreeID(v12);
      }
    }
    else
    {
      v9 = -1073741789;
    }
  }
  else
  {
    v9 = -1073741811;
  }
LABEL_29:
  a3->IoStatus.Status = v9;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return (unsigned int)v9;
}
