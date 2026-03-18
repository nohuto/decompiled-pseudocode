/*
 * XREFs of ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1401ECC5C
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x140217710 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14002F5C0 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x14034F628 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403A4C78 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

struct DXGDEVICE *__fastcall DXGPROCESS::GetVirtualGpuDevice(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  DXGADAPTER *v5; // rcx
  int v6; // eax
  char *v8; // rbx
  int Device; // eax
  char v10; // [rsp+28h] [rbp-40h]
  char v11; // [rsp+30h] [rbp-38h]
  char v12; // [rsp+38h] [rbp-30h]
  char v13; // [rsp+50h] [rbp-18h]
  unsigned int v14; // [rsp+78h] [rbp+10h] BYREF

  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(this, *(_DWORD *)(*((_QWORD *)a2 + 2) + 240LL));
  if ( !RenderAdapterInfo )
  {
    v5 = (DXGADAPTER *)*((_QWORD *)a2 + 2);
    v14 = 0;
    v6 = DXGADAPTER::CreateHandle(v5, this, &v14);
    if ( v6 < 0 )
    {
      WdLogSingleEntry1(3LL, v6);
      WdLogGlobalForLineNumber = 3037;
      return 0LL;
    }
    RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(this, *(_DWORD *)(*((_QWORD *)a2 + 2) + 240LL));
  }
  v8 = (char *)RenderAdapterInfo + 72;
  if ( !*((_QWORD *)RenderAdapterInfo + 9) )
  {
    v13 = 1;
    v12 = 0;
    v11 = 0;
    v10 = 0;
    Device = ADAPTER_RENDER::CreateDevice(
               *((_QWORD *)RenderAdapterInfo + 10),
               (char *)RenderAdapterInfo + 72,
               0LL,
               3LL,
               0LL,
               v10,
               v11,
               v12,
               0LL,
               0LL,
               v13);
    if ( Device < 0 )
    {
      WdLogSingleEntry1(3LL, Device);
      WdLogGlobalForLineNumber = 3059;
      return 0LL;
    }
  }
  return *(struct DXGDEVICE **)v8;
}
