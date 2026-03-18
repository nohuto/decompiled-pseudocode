/*
 * XREFs of UsbhSelectConfigOrInterfaceComplete @ 0x1400369F0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x140015600 (UsbhDecPdoIoCount.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x140039B0C (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhCalculateInterfaceBandwidth @ 0x14003A278 (UsbhCalculateInterfaceBandwidth.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x14003D254 (UsbhSetOutOfBandwidthTimer.c)
 */

__int64 __fastcall UsbhSelectConfigOrInterfaceComplete(PDEVICE_OBJECT DeviceObject, ULONG_PTR Irp, __int64 Context)
{
  _DWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  _IO_SECURITY_CONTEXT *v10; // rdi
  __int64 PortData; // r14
  unsigned int *v12; // rsi
  unsigned int *i; // rdi

  v5 = PdoExt(Context);
  FdoExt(*((_QWORD *)v5 + 148));
  v8 = *((unsigned __int16 *)v5 + 714);
  v9 = *((_QWORD *)v5 + 148);
  if ( *(int *)(Irp + 48) < 0 )
  {
    v10 = *(_IO_SECURITY_CONTEXT **)(*(_QWORD *)(Irp + 184) + 8LL);
    PortData = UsbhGetPortData(v9, v8, v6, v7);
    UsbhCancelOutOfBandwidthTimer(*((_QWORD *)v5 + 148), *((unsigned __int16 *)v5 + 714));
    if ( PortData && HIDWORD(v10->SecurityQos) == -2147481856 )
    {
      UsbhSetOutOfBandwidthTimer(*((_QWORD *)v5 + 148), *((unsigned __int16 *)v5 + 714), *(unsigned int *)(Irp + 48));
      *(_DWORD *)(PortData + 436) = 0;
      if ( WORD1(v10->SecurityQos) )
      {
        if ( WORD1(v10->SecurityQos) == 1 )
          *(_DWORD *)(PortData + 436) = UsbhCalculateInterfaceBandwidth(
                                          *((_QWORD *)v5 + 148),
                                          Context,
                                          &v10[1].AccessState);
      }
      else
      {
        v12 = (unsigned int *)((char *)v10 + LOWORD(v10->SecurityQos));
        for ( i = &v10[1].DesiredAccess; i < v12; i = (unsigned int *)((char *)i + *(unsigned __int16 *)i) )
          *(_DWORD *)(PortData + 436) += UsbhCalculateInterfaceBandwidth(*((_QWORD *)v5 + 148), Context, i);
      }
    }
  }
  else
  {
    UsbhCancelOutOfBandwidthTimer(v9, v8);
  }
  UsbhDecPdoIoCount(Context, Irp);
  if ( *(_BYTE *)(Irp + 65) )
    *(_BYTE *)(*(_QWORD *)(Irp + 184) + 3LL) |= 1u;
  return 0LL;
}
