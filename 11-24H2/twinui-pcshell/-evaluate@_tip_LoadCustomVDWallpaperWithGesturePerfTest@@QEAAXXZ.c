/*
 * XREFs of ?evaluate@_tip_LoadCustomVDWallpaperWithGesturePerfTest@@QEAAXXZ @ 0x180563BC4
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@EEAAXXZ @ 0x180563BB0 (-evaluate@-$merged_data@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@U1@@details@tip2@@EEAAXX.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_LoadCustomVDWallpaperWithGesturePerfTest::evaluate(
        _tip_LoadCustomVDWallpaperWithGesturePerfTest *this,
        const char *a2)
{
  __int64 v2; // r9
  int v3; // ecx
  int v4; // ecx
  const char *v5; // rax
  __int64 v6; // r9
  char v7; // r11
  char v8; // r11
  char v9; // r11

  v2 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v2 + 80) )
  {
    if ( *(_BYTE *)(v2 + 152) )
      return;
    *(_WORD *)(v2 + 154) = 0x4000;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x200) != 0 )
  {
    v3 = *((_DWORD *)this + 4);
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          return;
        v5 = tip2::details::reason_string((tip2::details *)"reason::sourceUnknown", a2);
        if ( *(_BYTE *)(v6 + 152) != v7 )
          return;
        *(_BYTE *)(v6 + 152) = 4;
        *(_WORD *)(v6 + 154) = 5;
      }
      else
      {
        v5 = tip2::details::reason_string((tip2::details *)"reason::fromDisk_loaded", a2);
        if ( *(_BYTE *)(v6 + 152) != v8 )
          return;
        *(_BYTE *)(v6 + 152) = 1;
        *(_WORD *)(v6 + 154) = 3;
      }
    }
    else
    {
      v5 = tip2::details::reason_string((tip2::details *)"reason::thumbnailCache_loaded", a2);
      if ( *(_BYTE *)(v6 + 152) != v9 )
        return;
      *(_BYTE *)(v6 + 152) = 1;
      *(_WORD *)(v6 + 154) = 1;
    }
    *(_QWORD *)(v6 + 160) = v5;
    return;
  }
  if ( !*(_BYTE *)(v2 + 152) )
  {
    *(_WORD *)(v2 + 154) = 16385;
LABEL_4:
    *(_BYTE *)(v2 + 152) = 3;
    *(_QWORD *)(v2 + 160) = 0LL;
  }
}
