/*
 * XREFs of ?Check@CCheckMPOCache@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18003A380
 * Callers:
 *     ?CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802B8D4C (-CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetPlaneResourceDesc@CDxHandleBitmapRealization@@UEBAJPEAUDWM_PLANE_RESOURCE_DESC@@@Z @ 0x18003A530 (-GetPlaneResourceDesc@CDxHandleBitmapRealization@@UEBAJPEAUDWM_PLANE_RESOURCE_DESC@@@Z.c)
 *     ?GetPlaneResourceDesc@CLegacySwapChainBuffer@@UEBAJPEAUDWM_PLANE_RESOURCE_DESC@@@Z @ 0x18003A580 (-GetPlaneResourceDesc@CLegacySwapChainBuffer@@UEBAJPEAUDWM_PLANE_RESOURCE_DESC@@@Z.c)
 *     memcmp_0 @ 0x1802DF6C8 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCheckMPOCache::Check(
        CCheckMPOCache *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  __int64 i; // rsi
  _DWORD *v9; // rbx
  char *v10; // rdi
  CDxHandleBitmapRealization *v12; // rcx
  __int64 (__fastcall *v13)(CLegacySwapChainBuffer *__hidden, struct DWM_PLANE_RESOURCE_DESC *); // rax
  int PlaneResourceDesc; // eax
  int v15; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+24h] [rbp-24h]
  int v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+2Ch] [rbp-1Ch]

  if ( a3 != 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 5) )
    return 0;
  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    v9 = (_DWORD *)(*(_QWORD *)this + 160 * i);
    v10 = (char *)a2 + 144 * i;
    if ( !v9[36]
      || !v9[37]
      || *v9 != *(_DWORD *)v10
      || v9[4] != *((_DWORD *)v10 + 4)
      || memcmp_0(v9 + 6, v10 + 24, 0x3CuLL)
      || v9[24] != *((_DWORD *)v10 + 24)
      || v9[25] != *((_DWORD *)v10 + 25) )
    {
      return 0;
    }
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v12 = (CDxHandleBitmapRealization *)*((_QWORD *)v10 + 1);
    v13 = *(__int64 (__fastcall **)(CLegacySwapChainBuffer *__hidden, struct DWM_PLANE_RESOURCE_DESC *))(*(_QWORD *)v12 + 32LL);
    if ( v13 == CDxHandleBitmapRealization::GetPlaneResourceDesc )
      PlaneResourceDesc = CDxHandleBitmapRealization::GetPlaneResourceDesc(v12, (struct DWM_PLANE_RESOURCE_DESC *)&v15);
    else
      PlaneResourceDesc = v13 == CLegacySwapChainBuffer::GetPlaneResourceDesc
                        ? CLegacySwapChainBuffer::GetPlaneResourceDesc(v12, (struct DWM_PLANE_RESOURCE_DESC *)&v15)
                        : v13(v12, (struct DWM_PLANE_RESOURCE_DESC *)&v15);
    if ( PlaneResourceDesc < 0 || v9[36] != v15 || v9[37] != v16 || v9[38] != v17 || v9[39] != v18 )
      return 0;
  }
  *a4 = *((_BYTE *)this + 992);
  *((_QWORD *)this + 123) = GetCurrentFrameId();
  return 1;
}
