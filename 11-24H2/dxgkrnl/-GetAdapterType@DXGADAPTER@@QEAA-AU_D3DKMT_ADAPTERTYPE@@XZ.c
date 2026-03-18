/*
 * XREFs of ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x140306840
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140195E9C (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x14039AA10 (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403A3D80 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@JW4START_ADAPTER_FAILURE_REASON@@@Z @ 0x1403EB654 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404056C4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x140040354 (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 */

int *__fastcall DXGADAPTER::GetAdapterType(DXGADAPTER *this, int *a2)
{
  __int64 v3; // rdi
  int v4; // r10d
  int v5; // r11d
  int v6; // r8d
  int v7; // eax
  int *result; // rax
  bool v9; // zf

  v3 = *((_QWORD *)this + 391);
  v4 = 0;
  if ( *((int *)this + 684) >= 8704
    && *((_DWORD *)this + 570) >= 0x7007u
    && *((_QWORD *)this + 145)
    && (!v3 || *((_QWORD *)this + 129)) )
  {
    v4 = 512;
  }
  v6 = *((_DWORD *)this + 744) >> 3;
  v5 = *((_DWORD *)this + 111) & 4 | (v3 != 0) | (8 * (*((_DWORD *)this + 111) & 1)) | (*((_DWORD *)this + 111) >> 2) & 0x40 | (*((_BYTE *)this + 209) != 0 ? 0x80 : 0) | (*((_BYTE *)this + 212) != 0 ? 0x100 : 0) | (*((_QWORD *)this + 390) != 0LL ? 2 : 0);
  v7 = (v4 | v5) ^ (32 * ((16 * (*((_DWORD *)this + 744) & 2)) ^ *((_BYTE *)this + 2948) & 1)) ^ ((unsigned __int8)((v4 | v5) ^ (32 * ((16 * (*((_BYTE *)this + 2976) & 2)) ^ *((_BYTE *)this + 2948) & 1))) ^ (unsigned __int8)(16 * *((_BYTE *)this + 2943))) & 0x10;
  *a2 = v7;
  if ( (v6 & 1) == 0 )
    return a2;
  *a2 = v7 | 0x800;
  if ( (*((_DWORD *)this + 617) & 0x80u) != 0 )
    return a2;
  v9 = DXGADAPTER::IsGpuVirtualAddressingSupported(this) == 0;
  result = a2;
  if ( v9 )
    *a2 |= 0x1000u;
  return result;
}
