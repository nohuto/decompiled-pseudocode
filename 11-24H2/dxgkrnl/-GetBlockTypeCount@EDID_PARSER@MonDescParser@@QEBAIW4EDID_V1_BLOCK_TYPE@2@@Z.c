/*
 * XREFs of ?GetBlockTypeCount@EDID_PARSER@MonDescParser@@QEBAIW4EDID_V1_BLOCK_TYPE@2@@Z @ 0x14009894C
 * Callers:
 *     ?EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z @ 0x1400645C0 (-EDID_V1_GetExtractedDisplayIdBlobSize@@YAKKPEBE@Z.c)
 *     ?EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z @ 0x140096468 (-EDID_V1_ExtractDisplayIdBlob@@YAJKPEBEPEAUDisplayIDObj@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_PARSER::GetBlockTypeCount(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v2; // r10
  unsigned int v3; // r8d

  v1 = 0;
  v2 = a1 + 8LL * *(_QWORD *)(a1 + 80);
  while ( a1 != v2 )
  {
    v3 = v1 + 1;
    if ( **(_BYTE **)a1 != 112 )
      v3 = v1;
    a1 += 8LL;
    v1 = v3;
  }
  return v1;
}
