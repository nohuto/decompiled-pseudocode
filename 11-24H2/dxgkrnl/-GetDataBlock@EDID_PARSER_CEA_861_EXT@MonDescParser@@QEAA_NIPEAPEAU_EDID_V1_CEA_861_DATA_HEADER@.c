/*
 * XREFs of ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x140098554
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x14003C948 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x14003CE98 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ?GetMsftDisplayVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1400638B0 (-GetMsftDisplayVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_MSFT.c)
 *     ?GetColorimetryData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@@@Z @ 0x1400984D0 (-GetColorimetryData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_COLORIMETR.c)
 *     ?GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAUEDID_V1_CEA_861_DOLBY_VISION_DATABLOCK@@@Z @ 0x1400985F0 (-GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAUEDID_V1_CEA_861_DOLBY.c)
 *     ?GetHDRData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z @ 0x140098754 (-GetHDRData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z.c)
 *     ?GetHdmiForum20VendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_2_0_VENDOR_SPECIFIC_DESC@@@Z @ 0x1400987F4 (-GetHdmiForum20VendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI.c)
 *     ?GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_1_4_VENDOR_SPECIFIC_DESC@@@Z @ 0x140098880 (-GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NPEAU_EDID_V1_CEA_861_HDMI_LLC.c)
 * Callees:
 *     <none>
 */

char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this,
        int a2,
        struct _EDID_V1_CEA_861_DATA_HEADER **a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  unsigned int i; // r10d
  struct _EDID_V1_CEA_861_DATA_HEADER *v7; // rdx

  v3 = *((_DWORD *)this + 2);
  v4 = 0;
  *a3 = 0LL;
  for ( i = 4; v4 < v3 && i < 0x7F; i += (*(_BYTE *)v7 & 0x1F) + 1 )
  {
    v7 = (struct _EDID_V1_CEA_861_DATA_HEADER *)(*(_QWORD *)this + i);
    if ( v4 == a2 )
    {
      *a3 = v7;
      return 1;
    }
    ++v4;
  }
  return 0;
}
