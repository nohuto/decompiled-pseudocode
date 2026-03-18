/*
 * XREFs of ?GetPlaneResourceDesc@CDxHandleBitmapRealization@@UEBAJPEAUDWM_PLANE_RESOURCE_DESC@@@Z @ 0x18003A530
 * Callers:
 *     ?Check@CCheckMPOCache@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18003A380 (-Check@CCheckMPOCache@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::GetPlaneResourceDesc(
        CDxHandleBitmapRealization *this,
        struct DWM_PLANE_RESOURCE_DESC *a2)
{
  _DWORD *v2; // r8

  v2 = (_DWORD *)*((_QWORD *)this + 4);
  if ( !v2 )
    return 2291674884LL;
  *(_DWORD *)a2 = v2[36];
  *((_DWORD *)a2 + 1) = v2[37];
  *((_DWORD *)a2 + 2) = v2[40];
  *((_DWORD *)a2 + 3) = v2[46];
  return 0LL;
}
