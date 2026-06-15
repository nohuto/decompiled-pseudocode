/*
 * XREFs of ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x1400390F8
 * Callers:
 *     ?GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z @ 0x14008DE80 (-GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z.c)
 *     ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140090140 (-GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSpatialCrossProcessBaseEndpoint::ValidateAndGetFlags(
        CSpatialCrossProcessBaseEndpoint *this,
        enum CSpatialCrossProcessBaseEndpoint::CPFlags *a2)
{
  signed __int32 v2; // ecx
  bool result; // al

  v2 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 163) + 64LL), 0, 0);
  *(_DWORD *)a2 = v2;
  result = 1;
  if ( (v2 & 1) == 0 || (v2 & 0xFFFFFF80) != 0 )
    return 0;
  return result;
}
