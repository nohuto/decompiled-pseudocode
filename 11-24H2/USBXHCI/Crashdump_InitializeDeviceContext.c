/*
 * XREFs of Crashdump_InitializeDeviceContext @ 0x140050414
 * Callers:
 *     Crashdump_UcxEvtGetDumpData @ 0x140050F90 (Crashdump_UcxEvtGetDumpData.c)
 * Callees:
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140008E74 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     DeviceSlot_LocateDeviceByPortPath @ 0x140045CD0 (DeviceSlot_LocateDeviceByPortPath.c)
 *     Crashdump_Endpoint_Initialize @ 0x140052D74 (Crashdump_Endpoint_Initialize.c)
 *     Crashdump_UsbDevice_Initialize @ 0x1400543A0 (Crashdump_UsbDevice_Initialize.c)
 */

__int64 __fastcall Crashdump_InitializeDeviceContext(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 DeviceContextBufferVA; // rax
  int v12; // r9d
  __int64 v13; // rsi
  void *Pool2; // rdi
  __int64 i; // rsi
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // r15
  __int64 v19; // rax
  int v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+48h] [rbp-40h]
  __int64 v24; // [rsp+50h] [rbp-38h]

  v22 = 0LL;
  v8 = DeviceSlot_LocateDeviceByPortPath(a1, a4, &v22);
  if ( v8 >= 0 )
  {
    v9 = v22;
    v10 = v22 + 624;
    if ( !*(_BYTE *)(v22 + 665) )
      v10 = v22 + 616;
    DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v10);
    LOBYTE(v12) = *(_BYTE *)(v9 + 143);
    v13 = DeviceContextBufferVA;
    v21 = *(_DWORD *)(a4 + 4);
    v23 = DeviceContextBufferVA;
    v8 = Crashdump_UsbDevice_Initialize(a5, a2, a3, v12, DeviceContextBufferVA, v9, v21);
    if ( v8 >= 0 )
    {
      Pool2 = (void *)ExAllocatePool2(64LL, 200LL, 1128482904LL);
      if ( Pool2 )
      {
        v8 = Crashdump_Endpoint_Initialize((_DWORD)Pool2, a2, a5, 1, 0, v13, *(_QWORD *)(a5 + 64));
        if ( v8 < 0 )
        {
LABEL_16:
          ExFreePoolWithTag(Pool2, 0x43434858u);
        }
        else
        {
          *(_QWORD *)(a5 + 120) = Pool2;
          if ( a3 )
          {
            for ( i = 0LL; (unsigned int)i < *(_DWORD *)a3; i = (unsigned int)(i + 1) )
            {
              v24 = *(_QWORD *)(a3 + 8);
              v16 = (*(unsigned __int8 *)(v24 + 8 * i) >> 7) + 2 * (*(_BYTE *)(v24 + 8 * i) & 0x7Fu);
              v17 = *(_QWORD *)(v9 + 8 * v16 + 176) == 0LL;
              LODWORD(v22) = (*(unsigned __int8 *)(v24 + 8 * i) >> 7) + 2 * (*(_BYTE *)(v24 + 8 * i) & 0x7F);
              v18 = (unsigned int)v16;
              if ( v17 )
                return (unsigned int)-1073741811;
              v19 = ExAllocatePool2(64LL, 200LL, 1128482904LL);
              Pool2 = (void *)v19;
              if ( !v19 )
                return (unsigned int)-1073741670;
              v8 = Crashdump_Endpoint_Initialize(
                     v19,
                     a2,
                     a5,
                     v22,
                     *(_DWORD *)(v24 + 8 * i + 4),
                     v23,
                     *(_QWORD *)(a5 + 64));
              if ( v8 < 0 )
                goto LABEL_16;
              *(_QWORD *)(a5 + 8 * v18 + 112) = Pool2;
            }
          }
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v8;
}
