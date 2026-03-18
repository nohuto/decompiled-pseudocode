/*
 * XREFs of UsbhIoctlGetDescriptorForPDO @ 0x140012028
 * Callers:
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140010050 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x14001E740 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x14001E9F0 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhSyncSendCommandToDevice @ 0x140026E60 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhAcquireFdoPnpLock @ 0x14002DD30 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x14002DDF4 (UsbhReleaseFdoPnpLock.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x140061040 (memmove.c)
 */

__int64 __fastcall UsbhIoctlGetDescriptorForPDO(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        char *a6,
        char a7,
        char a8)
{
  int v12; // r10d
  unsigned int v13; // ebx
  _DWORD *v14; // r14
  __int64 v15; // r15
  int v16; // r10d
  _DWORD *v17; // rax
  unsigned int v18; // eax
  char v19; // al
  _WORD *v20; // rdx
  unsigned __int16 v21; // si
  unsigned __int16 v22; // si
  int v23; // r10d
  int v24; // r9d
  int v25; // edx
  int v26; // r8d
  int v27; // r8d
  char v28; // al
  __int64 v29; // r11
  __int64 v31; // [rsp+20h] [rbp-48h]

  Log(a1, 32, 1195659313, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      33,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
    v12 = 32;
  }
  if ( *(_WORD *)(a4 + 6) > *a5 )
  {
    Log(a1, v12, 1195659314, a2, 0LL);
    v13 = -1073741789;
    goto LABEL_64;
  }
  if ( *(_BYTE *)(a4 + 1) != 6 )
  {
    Log(a1, v12, 1195659315, a2, *(unsigned __int8 *)(a4 + 1));
LABEL_8:
    v13 = -1073741811;
    goto LABEL_64;
  }
  if ( *(char *)a4 >= 0 )
  {
    Log(a1, v12, 1195659316, a2, 0LL);
    goto LABEL_8;
  }
  v14 = PdoExt(a2);
  v15 = UsbhRefPdoDeviceHandle(a1, a2, a3, 1212444263LL);
  Log(a1, 32, 1919304753, 0, v15);
  if ( v15 && !a8 )
  {
    if ( a7 )
    {
      v17 = FdoExt(a1);
      UsbhReleaseFdoPnpLock(a1, v17 + 434);
    }
    v13 = UsbhSyncSendCommandToDevice(a1, a2, a4, (_DWORD)a6, (__int64)a5);
    UsbhDerefPdoDeviceHandle(a1, v15, a3, 1212444263LL);
    if ( a7 )
    {
      v18 = (unsigned int)FdoExt(a1);
      UsbhAcquireFdoPnpLock(a1, v18 + 1736, 11, -267583477, 0);
    }
    Log(a1, 32, 1195659316, v13, 0LL);
    goto LABEL_64;
  }
  v19 = *(_BYTE *)(a4 + 3);
  if ( v19 == 2 )
  {
    if ( !*(_BYTE *)(a4 + 2) )
    {
      v20 = (_WORD *)*((_QWORD *)v14 + 299);
      goto LABEL_21;
    }
    goto LABEL_42;
  }
  if ( v19 != 1 )
  {
    if ( v19 == 15 && !*(_BYTE *)(a4 + 2) )
    {
      v20 = (_WORD *)*((_QWORD *)v14 + 300);
LABEL_21:
      if ( v20 )
      {
        v21 = v20[1];
        if ( *a5 <= v21 )
          v21 = *a5;
        if ( v21 <= *(_WORD *)(a4 + 6) && v21 <= *a5 && v21 )
        {
          memmove(a6, v20, v21);
          v13 = 0;
        }
        else
        {
          v13 = -1073741823;
          v21 = 0;
        }
        *a5 = v21;
        goto LABEL_62;
      }
      goto LABEL_60;
    }
    goto LABEL_42;
  }
  if ( *(_BYTE *)(a4 + 2) )
  {
LABEL_42:
    if ( v19 != 3 )
      goto LABEL_61;
    v28 = *(_BYTE *)(a4 + 2);
    if ( !v28 || v28 != *((_BYTE *)v14 + 1416) || !*((_QWORD *)v14 + 267) || !v14[533] || *(_WORD *)(a4 + 4) != 1033 )
      goto LABEL_61;
    v22 = *((_WORD *)v14 + 1066);
    if ( *(unsigned __int8 *)a5 <= v22 )
      v22 = *(unsigned __int8 *)a5;
    Log(a1, v16, 1195659319, *(unsigned __int16 *)(a4 + 6), *a5);
    if ( v22 <= *(_WORD *)(a4 + 6) && v22 <= *a5 )
    {
      if ( v22 )
        *a6 = v22;
      if ( v22 >= (unsigned __int16)v29 )
      {
        a6[1] = 3;
        if ( v22 > (unsigned __int16)v29 )
        {
          memmove(a6 + 2, *((const void **)v14 + 267), v22 - v29);
          v23 = 32;
        }
      }
      v24 = (int)a6;
      v31 = v22;
      v26 = 1195659320;
      v25 = v23;
      goto LABEL_37;
    }
    v27 = 1195659321;
    goto LABEL_59;
  }
  v22 = *a5;
  if ( *a5 > 0x12u )
    v22 = 18;
  Log(a1, v16, 1195659316, *(unsigned __int16 *)(a4 + 6), *a5);
  if ( v22 <= *(_WORD *)(a4 + 6) && v22 <= *a5 )
  {
    memmove(a6, v14 + 350, v22);
    v24 = (int)a6;
    v25 = 32;
    v26 = 1195659317;
    v31 = v22;
LABEL_37:
    *a5 = v22;
    Log(a1, v25, v26, v24, v31);
    v13 = 0;
    goto LABEL_62;
  }
  v27 = 1195659318;
LABEL_59:
  Log(a1, v23, v27, (_DWORD)a6, v22);
LABEL_60:
  *a5 = 0;
LABEL_61:
  v13 = -1073741823;
LABEL_62:
  if ( v15 )
    UsbhDerefPdoDeviceHandle(a1, v15, a3, 1212444263LL);
LABEL_64:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      34,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v13);
  return v13;
}
