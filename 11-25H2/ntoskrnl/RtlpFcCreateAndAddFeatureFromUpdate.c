/*
 * XREFs of RtlpFcCreateAndAddFeatureFromUpdate @ 0x14077DCB8
 * Callers:
 *     RtlpFcUpdateFeatureConfiguration @ 0x140AA0038 (RtlpFcUpdateFeatureConfiguration.c)
 * Callees:
 *     RtlpFcDoesFeatureHaveUniqueState @ 0x14077DD24 (RtlpFcDoesFeatureHaveUniqueState.c)
 *     RtlpFcIsUpdateModifyingOrAddingFeature @ 0x14077E0D4 (RtlpFcIsUpdateModifyingOrAddingFeature.c)
 *     RtlpFcUpdateFeature @ 0x14077E1A4 (RtlpFcUpdateFeature.c)
 */

__int64 __fastcall RtlpFcCreateAndAddFeatureFromUpdate(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  _DWORD *v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // r11

  result = RtlpFcIsUpdateModifyingOrAddingFeature(a1, a2, a3, a1);
  if ( (_BYTE)result )
  {
    v6 = *a2;
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)v6 = *v5;
    *(_DWORD *)(v6 + 4) = (*(_DWORD *)(v6 + 4) ^ (v5[1] ^ *(_DWORD *)(v6 + 4)) & 0xF) & 0xFFFFFF7F;
    RtlpFcUpdateFeature(v6, v5);
    result = RtlpFcDoesFeatureHaveUniqueState(*a2);
    if ( (_BYTE)result )
    {
      ++*v8;
      result = v7 + 16;
      *a2 = v7 + 16;
    }
  }
  return result;
}
