/*
 * XREFs of Interrupter_DetermineSegmentSizeAndCount @ 0x14007BFC0
 * Callers:
 *     Interrupter_PrepareInterrupter @ 0x140082C5C (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574 (Feature_UMPERS__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall Interrupter_DetermineSegmentSizeAndCount(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  unsigned int v4; // edi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(*(_QWORD *)(v2 + 128) + 64LL) )
  {
    v3 = 1;
  }
  else
  {
    v3 = 8;
    if ( (*(_QWORD *)(v2 + 736) & 0x10000000LL) == 0 )
      v3 = 4;
  }
  v4 = *(_DWORD *)(*(_QWORD *)(v2 + 88) + 92LL);
  if ( v4 >= v3 )
    v4 = v3;
  if ( v4 > 2 && _bittest64((const signed __int64 *)(v2 + 736), 0x30u) )
    v4 = 2;
  *(_DWORD *)(a1 + 124) = v4;
  *(_DWORD *)(a1 + 128) = v4;
  *(_DWORD *)(a1 + 120) = 4096;
  if ( (unsigned int)Feature_UMPERS__private_IsEnabledDeviceUsageNoInline()
    && v4 == 1
    && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x8000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 120) = 0x10000;
  }
  result = *(_DWORD *)(a1 + 120) >> 4;
  *(_DWORD *)(a1 + 132) = result;
  return result;
}
