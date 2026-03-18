/*
 * XREFs of UsbhGetStringFromDevice @ 0x140026698
 * Callers:
 *     UsbhGetProductIdString @ 0x1400277A4 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x140027A08 (UsbhGetSerialNumber.c)
 *     UsbhGetMSOS_Descriptor @ 0x140041B98 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetBillboardInfo @ 0x1400465D8 (UsbhGetBillboardInfo.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x140026E60 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhGetStringFromDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 *a5,
        unsigned __int16 a6,
        unsigned __int8 a7)
{
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int16 v16; // ax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int16 v20; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v21; // [rsp+42h] [rbp-16h]
  char v22; // [rsp+43h] [rbp-15h]
  unsigned __int16 v23; // [rsp+44h] [rbp-14h]
  __int16 v24; // [rsp+46h] [rbp-12h]

  FdoExt(a1);
  if ( !a5 )
    return 3221225485LL;
  v11 = *a5;
  if ( (UsbhLogMask & 0x100) != 0 )
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
        *(_DWORD *)v13 = 827609959;
        *(_QWORD *)(v13 + 16) = v11;
        *(_QWORD *)(v13 + 24) = a7;
      }
    }
  }
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_DWORD *)v15 = 844387175;
        *(_QWORD *)(v15 + 16) = a2;
        *(_QWORD *)(v15 + 24) = a6;
      }
    }
  }
  v16 = *a5;
  v21 = a7;
  v23 = a6;
  v24 = v16;
  v20 = 1664;
  v22 = 3;
  LODWORD(result) = UsbhSyncSendCommandToDevice(a1, a2, (unsigned int)&v20, a4, (__int64)a5);
  v17 = *a5;
  if ( (UsbhLogMask & 0x100) != 0 && a1 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_DWORD *)v19 = 861164391;
      *(_QWORD *)(v19 + 16) = v17;
      *(_QWORD *)(v19 + 24) = (int)result;
    }
  }
  return (unsigned int)result;
}
