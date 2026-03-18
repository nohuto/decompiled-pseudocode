/*
 * XREFs of ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x140037BF8
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x140093E90 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400AB120 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

bool __fastcall DXGADAPTER::IsGpuVaIoMmuGlobalSupported(DXGADAPTER *this)
{
  __int64 v1; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 28);
  v3 = 0;
  ((void (__fastcall *)(__int64, int *))DxgCoreInterface[97])(v1, &v3);
  return (v3 & 8) != 0;
}
