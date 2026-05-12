/*
 * XREFs of NvmeGetFeaturesSupportedCacheCapabilitiesCompletion @ 0x1400CADF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeGetFeaturesSupportedCacheCapabilitiesCompletion(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // r10d
  __int64 result; // rax

  if ( a3 )
  {
    *(_WORD *)(*a2 + 4260) = *(_WORD *)(a3 + 14);
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) == 0 )
    {
      v3 = *(unsigned __int16 *)(*a2 + 4260) >> 1;
      if ( (unsigned __int8)v3 <= 6u && !(_BYTE)v3 )
        *(_QWORD *)(a1 + 1096) = *(_QWORD *)(a1 + 1096) & 0xFFFFFFFFFFFFFFFBuLL | (4LL * (*(_DWORD *)a3 & 1));
    }
  }
  result = *a2;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  return result;
}
