/*
 * XREFs of KiPublishProcessorFeatures @ 0x140C2BE88
 * Callers:
 *     KiSetProcessorSignature @ 0x1405C08F0 (KiSetProcessorSignature.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiPublishProcessorFeatures(__int64 a1)
{
  __int16 v1; // r8
  __int64 result; // rax

  v1 = KeFeatureBits2;
  *(_BYTE *)(MmWriteableSharedUserData + 661) = (KeFeatureBits2 & 2) != 0;
  if ( (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 132LL) & 0x2000) == 0 )
    *(_BYTE *)(MmWriteableSharedUserData + 663) = (v1 & 0x2000) != 0LL;
  result = KeLoaderBlock_0;
  if ( (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 132LL) & 0x8000) == 0 )
  {
    result = (*(_QWORD *)(a1 + 36768) >> 33) & 1LL;
    KeSmapEnabled = (*(_QWORD *)(a1 + 36768) >> 33) & 1;
  }
  return result;
}
