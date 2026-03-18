/*
 * XREFs of UsbhEtwLogDeviceDescription @ 0x1C005B5DC
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0056570 (UsbhPdoPnp_StartDevice.c)
 *     UsbhEtwRundown @ 0x1C005BED0 (UsbhEtwRundown.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0009AC0 (UsbhEtwWrite.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C005B56C (UsbhEtwGetDeviceInfo.c)
 */

NTSTATUS __fastcall UsbhEtwLogDeviceDescription(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  NTSTATUS result; // eax
  _DWORD *v5; // rax
  int v6; // [rsp+50h] [rbp+7h] BYREF
  __int16 v7; // [rsp+54h] [rbp+Bh]
  __int16 v8; // [rsp+56h] [rbp+Dh]
  __int16 v9; // [rsp+58h] [rbp+Fh]
  __int16 v10; // [rsp+5Ah] [rbp+11h]
  _OWORD v11[2]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v12; // [rsp+80h] [rbp+37h]
  int v13; // [rsp+88h] [rbp+3Fh]

  result = 0;
  v12 = 0LL;
  memset(v11, 0, sizeof(v11));
  v13 = 0;
  if ( dword_1C006B690 && *(_QWORD *)(a1 + 2240) )
  {
    if ( *(_DWORD *)(a1 + 2248) )
    {
      v5 = FdoExt(*(_QWORD *)(a1 + 1184));
      v6 = v5[1298];
      v7 = *((_WORD *)v5 + 2598);
      v8 = v5[1300];
      v9 = *((_WORD *)v5 + 2614);
      v10 = *((_WORD *)v5 + 2615);
      UsbhEtwGetDeviceInfo(a1, (__int64)v11);
      return UsbhEtwWrite(a2, 0LL, &v6, 12LL, v11, 44LL, *(_QWORD *)(a1 + 2240), *(_DWORD *)(a1 + 2248), 0LL);
    }
  }
  return result;
}
