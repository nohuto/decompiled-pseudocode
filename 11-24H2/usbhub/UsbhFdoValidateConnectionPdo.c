/*
 * XREFs of UsbhFdoValidateConnectionPdo @ 0x1400296B0
 * Callers:
 *     UsbhFdoUrbPdoFilter @ 0x14000AF60 (UsbhFdoUrbPdoFilter.c)
 *     UsbhPdoInternalDeviceControl @ 0x14000B2A0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x140015600 (UsbhDecPdoIoCount.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

__int64 __fastcall UsbhFdoValidateConnectionPdo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  PDEVICE_OBJECT *v6; // r13
  _DWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 PortData; // rbp
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  unsigned int PortState; // ebx
  int v16; // eax
  int v18[14]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v18[0] = 0;
  LODWORD(v19) = 0;
  v6 = (PDEVICE_OBJECT *)FdoExt(a1);
  v7 = PdoExt(a2);
  PortData = UsbhGetPortData(a1, *((unsigned __int16 *)v7 + 714), v8, v9);
  v11 = *((unsigned __int16 *)v7 + 714);
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_DWORD *)v13 = 1262709603;
        *(_QWORD *)(v13 + 16) = PortData;
        *(_QWORD *)(v13 + 24) = v11;
      }
    }
  }
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( *((_DWORD *)v6 + 340) != 5 )
  {
    PortState = -1073741810;
    v16 = -1073713152;
LABEL_7:
    HIDWORD(SecurityContext->SecurityQos) = v16;
    a3->IoStatus.Status = PortState;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1667973937, PortData, (int)PortState);
    return PortState;
  }
  if ( !PortData )
  {
    PortState = -1073741811;
    v16 = -2147482880;
    goto LABEL_7;
  }
  PortState = UsbhQueryPortState(a1, *(unsigned __int16 *)(PortData + 4), (__int64)&v19, v18);
  if ( (PortState & 0xC0000000) == 0xC0000000 )
  {
    v16 = v18[0];
    goto LABEL_7;
  }
  if ( (v19 & 1) != 0 && (v19 & 3) != 0 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    PortState = IofCallDriver(v6[152], a3);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  }
  else
  {
    HIDWORD(SecurityContext->SecurityQos) = -1073713152;
    PortState = -1073741810;
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1667973938, PortData, -1073741810LL);
  }
  return PortState;
}
