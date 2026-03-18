/*
 * XREFs of ?IsValidSection@DisplayID_Section_Parser@@QEBA_NXZ @ 0x140097904
 * Callers:
 *     ?DisplayID_Init@@YA?AW4DISPLAYID_VALIDATION_RESULT@@PEAUDisplayIDObj@@PEBXI_N@Z @ 0x140097454 (-DisplayID_Init@@YA-AW4DISPLAYID_VALIDATION_RESULT@@PEAUDisplayIDObj@@PEBXI_N@Z.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x140097580 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 * Callees:
 *     ?ComputeChecksum@DisplayID_Section_Parser@@QEBAEXZ @ 0x14009629C (-ComputeChecksum@DisplayID_Section_Parser@@QEBAEXZ.c)
 */

bool __fastcall DisplayID_Section_Parser::IsValidSection(DisplayID_Section_Parser *this)
{
  _BYTE *v1; // r9
  unsigned __int64 v2; // rdx
  unsigned __int8 v3; // al
  __int64 v4; // r9
  __int64 v5; // r10

  v1 = *(_BYTE **)this;
  if ( (unsigned __int8)((**(_BYTE **)this >> 4) - 1) > 1u || (v1[2] & 0xF) == 0 && v1[3] )
    return 0;
  if ( v1[1] > 0xFBu )
    return 0;
  v2 = *((_QWORD *)this + 1);
  if ( (unsigned __int8)v1[1] > v2 - 5 || v2 < 5 )
    return 0;
  v3 = DisplayID_Section_Parser::ComputeChecksum(this);
  return v3 == *(_BYTE *)(v5 + v4 + 4);
}
