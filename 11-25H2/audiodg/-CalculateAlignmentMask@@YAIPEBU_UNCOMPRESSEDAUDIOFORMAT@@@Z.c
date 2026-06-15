/*
 * XREFs of ?CalculateAlignmentMask@@YAIPEBU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14003DC4C
 * Callers:
 *     ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x14000D58C (-CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCac.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateAlignmentMask(const struct _UNCOMPRESSEDAUDIOFORMAT *a1)
{
  __int64 result; // rax
  DWORD v2; // r8d
  unsigned int v3; // ecx

  result = 15LL;
  v2 = a1->dwSamplesPerFrame * a1->dwBytesPerSampleContainer;
  v3 = 16;
  if ( v2 > 0x10 )
  {
    result = v2 - 1;
    if ( ((unsigned int)result & v2) != 0 )
    {
      do
        v3 *= 2;
      while ( v2 / v3 );
      return v3 - 1;
    }
  }
  return result;
}
