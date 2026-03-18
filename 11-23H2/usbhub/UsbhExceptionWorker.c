/*
 * XREFs of UsbhExceptionWorker @ 0x1C004B000
 * Callers:
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C00018CC (UsbhReferenceListRemove.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhGetExceptionDispatch @ 0x1C004B0F4 (UsbhGetExceptionDispatch.c)
 *     UsbhLogException @ 0x1C004B20C (UsbhLogException.c)
 */

void __fastcall UsbhExceptionWorker(__int64 a1, __int64 a2, __int64 a3)
{
  char *ExceptionDispatch; // r10
  __int64 v6; // rcx
  _DWORD *v7; // rax
  void (__fastcall *v8)(__int64, __int64); // rax
  void *v9; // rsi

  FdoExt(a1);
  Log(a1, 128, 1702385495, 0LL, a3);
  ExceptionDispatch = (char *)UsbhGetExceptionDispatch(a1, *(unsigned int *)(a3 + 16));
  v6 = 0LL;
  v7 = &HubExceptionTable;
  while ( *(_DWORD *)(a3 + 16) != *v7 )
  {
    v6 = (unsigned int)(v6 + 1);
    v7 += 6;
    if ( (unsigned int)v6 >= 0x8E )
      goto LABEL_6;
  }
  ExceptionDispatch = (char *)&HubExceptionTable + 24 * v6;
LABEL_6:
  if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    Log(a1, 128, 1768908081, a3, 0LL);
  if ( ExceptionDispatch )
  {
    v8 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)ExceptionDispatch + 2);
    if ( v8 )
      v8(a1, a3);
  }
  v9 = (void *)UsbhLogException(a1, a3);
  UsbhReferenceListRemove(a1, a3);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
