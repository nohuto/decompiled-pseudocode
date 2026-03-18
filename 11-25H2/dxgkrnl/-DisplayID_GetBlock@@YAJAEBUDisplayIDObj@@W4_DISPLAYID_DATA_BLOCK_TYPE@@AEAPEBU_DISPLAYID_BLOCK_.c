/*
 * XREFs of ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x140060E5C
 * Callers:
 *     ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x1400609C0 (-DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x140063404 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?DisplayID_IsValidVersion2@@YA?AW4DISPLAYID_VALIDATION_RESULT@@PEBUDisplayIDObj@@@Z @ 0x1400952D4 (-DisplayID_IsValidVersion2@@YA-AW4DISPLAYID_VALIDATION_RESULT@@PEBUDisplayIDObj@@@Z.c)
 *     ?DisplayID_GetColorDataRaw@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE_COLOR_DEPTH@@PEA_N@Z @ 0x1400955C4 (-DisplayID_GetColorDataRaw@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE.c)
 *     ?DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x140095718 (-DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 *     ?DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z @ 0x1400957E0 (-DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetBlock(__int64 *a1, int a2, _QWORD *a3)
{
  __int64 v3; // r9
  int v4; // r11d
  int v5; // esi
  unsigned int v7; // r10d
  unsigned __int8 *i; // rdx
  int v9; // ecx
  int v10; // edi

  *a3 = 0LL;
  v3 = *a1;
  v4 = 0;
  v5 = *((_DWORD *)a1 + 5);
LABEL_2:
  if ( v4 >= v5 )
    return 3221225659LL;
  v7 = *(unsigned __int8 *)(v3 + 1);
  for ( i = (unsigned __int8 *)((v3 + 4) & -(__int64)(*(_BYTE *)(v3 + 1) != 0)); ; i += (unsigned int)v10 )
  {
    if ( v7 < 3 || (v9 = *i, !(_BYTE)v9) || (v10 = i[2] + 3, (int)v7 < v10) )
    {
      v3 += (unsigned __int8)(*(_BYTE *)(v3 + 1) + 5);
      ++v4;
      goto LABEL_2;
    }
    if ( v9 == a2 )
      break;
    v7 -= v10;
  }
  *a3 = i;
  return 0LL;
}
