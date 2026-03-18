/*
 * XREFs of ?GetPlaneResourceDesc@CDxHandleYUVBitmapRealization@@UEBAJPEAUDWM_PLANE_RESOURCE_DESC@@@Z @ 0x180218800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetPlaneResourceDesc(
        CDxHandleYUVBitmapRealization *this,
        struct DWM_PLANE_RESOURCE_DESC *a2)
{
  _DWORD *v2; // r8

  v2 = (_DWORD *)*((_QWORD *)this + 4);
  if ( !v2 )
    return 2291674884LL;
  *(_DWORD *)a2 = v2[32];
  *((_DWORD *)a2 + 1) = v2[33];
  *((_DWORD *)a2 + 2) = v2[36];
  *((_DWORD *)a2 + 3) = v2[42];
  return 0LL;
}
