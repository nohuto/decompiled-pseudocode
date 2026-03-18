/*
 * XREFs of ?IommuFreeGpuVa@ADAPTER_RENDER@@CAJPEAUSYSMM_ADAPTER@@_KPEAX@Z @ 0x14019D190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@@Z @ 0x14005076C (-VidMmFreeGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEBU_D3DKMT_FRE.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall ADAPTER_RENDER::IommuFreeGpuVa(struct SYSMM_ADAPTER *a1, D3DGPU_VIRTUAL_ADDRESS a2, _QWORD *a3)
{
  struct VIDMM_GLOBAL *v3; // rdi
  VIDMM_EXPORT *v4; // rbx
  struct DXGGLOBAL *Global; // rax
  _D3DKMT_FREEGPUVIRTUALADDRESS v7; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&v7.hAdapter = 0LL;
  v7.Size = 0LL;
  v3 = (struct VIDMM_GLOBAL *)a3[96];
  v7.BaseAddress = a2;
  if ( !v3 )
    return 0LL;
  v4 = (VIDMM_EXPORT *)a3[95];
  Global = DXGGLOBAL::GetGlobal();
  return VIDMM_EXPORT::VidMmFreeGpuVirtualAddress(v4, v3, *((struct DXGPROCESS **)Global + 167), &v7);
}
