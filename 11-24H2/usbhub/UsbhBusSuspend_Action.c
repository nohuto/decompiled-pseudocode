/*
 * XREFs of UsbhBusSuspend_Action @ 0x1400408AC
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x14001FC5C (UsbhDispatch_BusEvent.c)
 *     UsbhReleaseBusStateLock @ 0x140033BCC (UsbhReleaseBusStateLock.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhPCE_Suspend @ 0x14001E150 (UsbhPCE_Suspend.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

void __fastcall UsbhBusSuspend_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbp
  int v5; // r9d
  __int16 v6; // r12
  unsigned __int16 v7; // di
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // [rsp+90h] [rbp+18h] BYREF
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = 0;
  v12 = 0;
  v4 = FdoExt(a1);
  Log(a1, 2048, 1114862963, 0LL, 0LL);
  if ( v4[1054] != v5 )
  {
    v6 = v5 + 1;
    v7 = v5 + 1;
    if ( *((_BYTE *)FdoExt(a1) + 2938) >= (unsigned __int8)(v5 + 1) )
    {
      do
      {
        v8 = UsbhQueryPortState(a1, v7, (__int64)&v12, &v13);
        if ( v8 < 0 )
        {
          if ( !Usb_Disconnected(v8) )
          {
            UsbhException(a1, v7, 78LL, 0LL, 0, v11, v13, usbfile_busm_c, 1198, 0);
            v4[1054] = 2;
          }
        }
        else if ( (v12 & 7) == 3 )
        {
          if ( (v9 = UsbhLatchPdo(a1, v7, 0LL, 0x46644433u), (v10 = v9) != 0) && PdoExt(v9)[700]
            || (UsbhPCE_Suspend(a1, a2, v7), v10) )
          {
            UsbhUnlatchPdo(a1, v10, 0LL, 0x46644433u);
          }
        }
        v7 += v6;
      }
      while ( v7 <= *((unsigned __int8 *)FdoExt(a1) + 2938) );
    }
  }
}
