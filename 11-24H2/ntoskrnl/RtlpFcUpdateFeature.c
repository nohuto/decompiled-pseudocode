/*
 * XREFs of RtlpFcUpdateFeature @ 0x14078D388
 * Callers:
 *     RtlpFcApplyUpdateAndAddFeature @ 0x14078CD44 (RtlpFcApplyUpdateAndAddFeature.c)
 *     RtlpFcCreateAndAddFeatureFromUpdate @ 0x14078CDB8 (RtlpFcCreateAndAddFeatureFromUpdate.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140A93B4C (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcUpdateFeature(_DWORD *a1, __int64 a2)
{
  int v3; // r8d
  int v4; // ecx
  int v5; // ecx
  __int64 result; // rax

  if ( (*(_DWORD *)(a2 + 28) & 1) != 0 )
  {
    v3 = a1[1] ^ ((unsigned __int8)a1[1] ^ (unsigned __int8)(16 * *(_DWORD *)(a2 + 8))) & 0x30;
    a1[1] = v3;
  }
  else
  {
    v3 = a1[1];
  }
  if ( (*(_DWORD *)(a2 + 28) & 2) != 0 )
  {
    v4 = v3 ^ ((unsigned __int16)v3 ^ (unsigned __int16)(*(unsigned __int8 *)(a2 + 16) << 8)) & 0x3F00;
    a1[1] = v4;
    a1[2] = *(_DWORD *)(a2 + 24);
    v3 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a2 + 20) << 14)) & 0xC000;
    a1[1] = v3;
  }
  a1[1] = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(a2 + 12) << 6)) & 0x40;
  v5 = a1[3] ^ ((unsigned __int8)a1[3] ^ (unsigned __int8)BYTE1(*(_DWORD *)(a2 + 16))) & 1;
  a1[3] = v5;
  result = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)BYTE1(*(_DWORD *)(a2 + 16))) & 2u;
  a1[3] = result;
  return result;
}
