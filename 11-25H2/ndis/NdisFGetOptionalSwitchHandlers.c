/*
 * XREFs of NdisFGetOptionalSwitchHandlers @ 0x14009A020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisFGetOptionalSwitchHandlers(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r9
  _QWORD *v4; // rcx
  char v5; // al
  bool v7; // cf

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD **)(v3 + 3760);
  if ( *(_BYTE *)a3 != 0xB8 )
    return 3221225485LL;
  v5 = *(_BYTE *)(a3 + 1);
  if ( v5 == 2 )
  {
    if ( *(_WORD *)(a3 + 2) < 0xF0u )
      return 3221225485LL;
  }
  else if ( v5 == 1 && *(_WORD *)(a3 + 2) < 0x70u )
  {
    return 3221225485LL;
  }
  if ( !v4[113] )
    return 3221225659LL;
  *a2 = *(_QWORD *)(v3 + 24);
  v7 = *(_BYTE *)(a3 + 1) < 2u;
  *(_QWORD *)(a3 + 8) = v4[113];
  *(_QWORD *)(a3 + 16) = v4[114];
  *(_QWORD *)(a3 + 24) = v4[116];
  *(_QWORD *)(a3 + 32) = v4[115];
  *(_QWORD *)(a3 + 40) = v4[117];
  *(_QWORD *)(a3 + 48) = v4[118];
  *(_QWORD *)(a3 + 56) = v4[119];
  *(_QWORD *)(a3 + 64) = v4[120];
  *(_QWORD *)(a3 + 72) = v4[121];
  *(_QWORD *)(a3 + 80) = v4[122];
  *(_QWORD *)(a3 + 88) = v4[123];
  *(_QWORD *)(a3 + 96) = v4[124];
  *(_QWORD *)(a3 + 104) = v4[125];
  *(_QWORD *)(a3 + 112) = v4[126];
  *(_QWORD *)(a3 + 120) = v4[127];
  if ( !v7 )
  {
    *(_QWORD *)(a3 + 128) = v4[128];
    *(_QWORD *)(a3 + 136) = v4[129];
    *(_QWORD *)(a3 + 144) = v4[130];
    *(_QWORD *)(a3 + 152) = v4[131];
    *(_QWORD *)(a3 + 160) = v4[132];
    *(_QWORD *)(a3 + 168) = v4[133];
    *(_QWORD *)(a3 + 176) = v4[134];
    *(_QWORD *)(a3 + 184) = v4[135];
    *(_QWORD *)(a3 + 192) = v4[136];
    *(_QWORD *)(a3 + 200) = v4[137];
    *(_QWORD *)(a3 + 208) = v4[138];
    *(_QWORD *)(a3 + 216) = v4[139];
    *(_QWORD *)(a3 + 224) = v4[140];
    *(_QWORD *)(a3 + 232) = v4[141];
  }
  return 0LL;
}
