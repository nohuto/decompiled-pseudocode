/*
 * XREFs of ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x14021DFA4
 * Callers:
 *     ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14018CA10 (-VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002F1C4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x14003336C (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     DpiGetDevicePropertyDataString @ 0x1403E8B38 (DpiGetDevicePropertyDataString.c)
 */

void __fastcall DXGADAPTER::FillInternalAdapterInfo(
        DXGADAPTER *this,
        struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *a2)
{
  unsigned int v4; // eax
  int v5; // r8d
  int v6; // ecx
  int v7; // r8d
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // edx
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a2 = *((_DWORD *)this + 111);
  v4 = *((_DWORD *)this + 570);
  v5 = 69639;
  v6 = *((_DWORD *)a2 + 3);
  if ( v4 < 0x11007 )
    v5 = v4;
  *((_DWORD *)a2 + 2) = v5;
  v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(**((_DWORD **)this + 376) >> 14)) & 8;
  *((_DWORD *)a2 + 3) = v7;
  v8 = v7 & 0xFFFFFFEF | ((**((_DWORD **)this + 376) & 0x18000) != 0 ? 0x10 : 0);
  *((_DWORD *)a2 + 3) = v8;
  v9 = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(**((_DWORD **)this + 376) >> 8)) & 0x180;
  *((_DWORD *)a2 + 3) = v9;
  v10 = v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)(**((_DWORD **)this + 376) >> 8)) & 0xC00;
  *((_DWORD *)a2 + 3) = v10;
  *((_DWORD *)a2 + 3) = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(**((_DWORD **)this + 376) >> 11)) & 0x200;
  *((_QWORD *)a2 + 2) = *(_QWORD *)((char *)this + 412);
  DXGADAPTER::GetDeviceDescriptor(this, 0xA0u, (unsigned __int16 *)a2 + 12);
  v12 = *(_QWORD *)(v11 + 216);
  P = 0LL;
  if ( (int)DpiGetDevicePropertyDataString(
              *(PDEVICE_OBJECT *)(*(_QWORD *)(v12 + 64) + 152LL),
              (DEVPROPKEY *)&DEVPKEY_Device_InstanceId,
              (__int64)&P,
              (__int64)&v13) >= 0 )
  {
    RtlStringCbCopyW((char *)a2 + 184, 0x208uLL, (char *)P);
    ExFreePoolWithTag(P, 0);
  }
}
