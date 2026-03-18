/*
 * XREFs of ?GetPlaneResourceDesc@CLegacySwapChainBuffer@@UEBAJPEAUDWM_PLANE_RESOURCE_DESC@@@Z @ 0x18003A580
 * Callers:
 *     ?Check@CCheckMPOCache@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18003A380 (-Check@CCheckMPOCache@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChainBuffer::GetPlaneResourceDesc(
        CLegacySwapChainBuffer *this,
        struct DWM_PLANE_RESOURCE_DESC *a2)
{
  __int64 v2; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rcx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+48h] [rbp-20h]

  v2 = *((_QWORD *)this + 24);
  v4 = *(_QWORD *)(v2 + 304);
  v5 = (unsigned int)(*(_DWORD *)(v2 + 496) + *((_DWORD *)this + 26) - *(_DWORD *)(v2 + 500)) % *(_DWORD *)(v2 + 496);
  if ( v5 >= (*(_QWORD *)(v2 + 312) - v4) >> 4 )
    v6 = 0LL;
  else
    v6 = *(__int64 **)(v4 + 16 * v5);
  if ( !v6 )
    return 2291662854LL;
  v11 = 0LL;
  v12 = 0;
  v7 = *v6;
  v9 = 0LL;
  v10 = 0LL;
  (*(void (__fastcall **)(__int64 *, __int128 *))(v7 + 80))(v6, &v9);
  *(_QWORD *)a2 = v9;
  *((_DWORD *)a2 + 2) = v10;
  *((_DWORD *)a2 + 3) = v12;
  return 0LL;
}
