/*
 * XREFs of ?GetLocalNumOfDetTim@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAEXZ @ 0x140096600
 * Callers:
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x14003D4D8 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 * Callees:
 *     ?GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@@Z @ 0x140096148 (-GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2.c)
 */

char __fastcall MonDescParser::EDID_PARSER_CEA_861_EXT::GetLocalNumOfDetTim(
        MonDescParser::EDID_PARSER_CEA_861_EXT *this)
{
  char i; // dl
  char v2; // r10
  MonDescParser::EDID_PARSER_CEA_861_EXT *v3; // r11
  char v5; // [rsp+38h] [rbp+10h] BYREF

  for ( i = 0;
        MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
          this,
          i,
          (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v5);
        i = v2 + 1 )
  {
    this = v3;
  }
  return v2;
}
