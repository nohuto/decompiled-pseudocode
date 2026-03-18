/*
 * XREFs of ?BmlGetRecommendedRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@QEBUBML_VIDPN_PATH_ORDER@@IE@Z @ 0x1403ECD6C
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140039C9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z @ 0x140090C98 (-D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z.c)
 */

__int64 __fastcall BmlGetRecommendedRotation(const struct BML_VIDPN_PATH_ORDER *const a1, unsigned int a2, char a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rbp
  __int64 v7; // rsi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  bool v11; // cf
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v12; // edx

  v3 = 0;
  v4 = 120LL * a2;
  while ( 1 )
  {
    if ( v3 >= a2 )
      return 1;
    v7 = 120LL * v3;
    if ( *(_DWORD *)(*(_QWORD *)((char *)a1 + v7 + 16) + 24LL) == *(_DWORD *)(*(_QWORD *)((char *)a1 + v4 + 16) + 24LL) )
      break;
    ++v3;
  }
  v8 = *(_DWORD *)((char *)a1 + v7 + 28);
  if ( v8 == D3DKMDT_VPPR_UNINITIALIZED )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4160;
  }
  if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v8) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4161;
  }
  if ( a3 )
  {
    v9 = *(_DWORD *)((char *)a1 + v4 + 52);
    v10 = *(_DWORD *)((char *)a1 + v4 + 56);
    if ( *(_DWORD *)((char *)a1 + v7 + 52) < *(_DWORD *)((char *)a1 + v7 + 56) != v9 < v10 )
    {
      v11 = v9 < v10;
      v12 = D3DKMDT_VPPR_ROTATE270;
      if ( !v11 )
        v12 = D3DKMDT_VPPR_ROTATE90;
      v8 = (unsigned int)D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET(v8, v12);
    }
  }
  if ( v8 == D3DKMDT_VPPR_UNINITIALIZED )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4198;
  }
  return (unsigned int)v8;
}
