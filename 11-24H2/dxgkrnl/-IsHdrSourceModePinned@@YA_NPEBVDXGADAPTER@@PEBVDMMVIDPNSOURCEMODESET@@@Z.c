/*
 * XREFs of ?IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1402698C8
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x140365490 (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDM.c)
 * Callees:
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x14003DE80 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline @ 0x140090DBC (Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402DE5CC (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1403D5698 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 */

char __fastcall IsHdrSourceModePinned(const struct DXGADAPTER *a1, const struct DMMVIDPNSOURCEMODESET *a2)
{
  unsigned int PreferredHdrPixelFormat; // eax
  __int64 v4; // rbx
  unsigned int v5; // r14d
  __int64 v6; // rbx
  const struct DMMVIDPNSOURCEMODESET *v7; // rsi
  const struct DMMVIDPNSOURCEMODE *NextMode; // rsi
  char v9; // di

  PreferredHdrPixelFormat = ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(*((_QWORD *)a1 + 390));
  v4 = *((_QWORD *)a2 + 18);
  v5 = PreferredHdrPixelFormat;
  if ( !v4 )
    return 0;
  if ( !(unsigned int)Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = *(_QWORD *)(v4 + 76);
    v7 = (const struct DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 6);
    if ( v7 != (const struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 48) )
    {
      NextMode = (const struct DMMVIDPNSOURCEMODESET *)((char *)v7 - 8);
      if ( NextMode )
      {
        v9 = 1;
        while ( *((_DWORD *)NextMode + 18) != 1
             || v6 != *(_QWORD *)((char *)NextMode + 76)
             || !(unsigned __int8)BmlPixelFormatMatchHdrPixelFormat(*((unsigned int *)NextMode + 24), v5, 0LL) )
        {
          NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(a2, NextMode);
          if ( !NextMode )
            return 0;
        }
        return v9;
      }
    }
    return 0;
  }
  v9 = 1;
  if ( *(_DWORD *)(v4 + 72) != 1
    || !(unsigned __int8)BmlPixelFormatMatchHdrPixelFormat(*(unsigned int *)(v4 + 96), v5, 0LL) )
  {
    return 0;
  }
  return v9;
}
