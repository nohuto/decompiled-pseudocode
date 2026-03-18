/*
 * XREFs of DxgkGetSwapChainSurfacePhysicalAddress @ 0x1401FB5F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1401F6988 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 *     ?GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1401F8204 (-GetClientSurfacePhysicalAddress@DXGSWAPCHAIN@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x14038CBB0 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x14039DE6C (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403B80D0 (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkGetSwapChainSurfacePhysicalAddress(ULONG64 a1)
{
  const void *v2; // rdx
  NTSTATUS v3; // eax
  int ClientSurfacePhysicalAddress; // ebx
  struct DXGSWAPCHAIN *v5; // rsi
  int v6; // eax
  void *v8; // rcx
  HANDLE Handle[2]; // [rsp+30h] [rbp-C8h] BYREF
  PVOID Object[2]; // [rsp+40h] [rbp-B8h] BYREF
  PVOID v11; // [rsp+50h] [rbp-A8h] BYREF
  struct DXGDEVICE *v12; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v13[128]; // [rsp+60h] [rbp-98h] BYREF

  *(_OWORD *)Handle = 0LL;
  v2 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v2, 0x10uLL);
  Object[0] = 0LL;
  v3 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, Object, 0LL);
  ClientSurfacePhysicalAddress = v3;
  v11 = Object[0];
  if ( v3 >= 0 )
  {
    v5 = *(struct DXGSWAPCHAIN **)Object[0];
    v12 = 0LL;
    DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v13, v5, 0, 1);
    v6 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v13, &v12, 1, 0);
    ClientSurfacePhysicalAddress = v6;
    if ( v6 >= 0 )
    {
      ClientSurfacePhysicalAddress = DXGSWAPCHAIN::GetClientSurfacePhysicalAddress(
                                       (struct _KTHREAD **)v5,
                                       (union _LARGE_INTEGER *)&Handle[1]);
      if ( ClientSurfacePhysicalAddress < 0 )
      {
        Object[1] = 0LL;
        Handle[1] = 0LL;
      }
      v8 = (void *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v8 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(v8, &Handle[1], 8uLL);
    }
    else
    {
      WdLogSingleEntry1(3LL, v6);
      WdLogGlobalForLineNumber = 1555;
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v13);
  }
  else
  {
    WdLogSingleEntry2(3LL, Handle[0], v3);
    WdLogGlobalForLineNumber = 1543;
  }
  NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v11);
  return (unsigned int)ClientSurfacePhysicalAddress;
}
