/*
 * XREFs of RtlpHpLfhHeatMapUpdate @ 0x1800D5A30
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlpHpLfhHeatMapUpdate(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4)
{
  __int64 v5; // rax
  int v6; // r8d
  volatile signed __int16 *v7; // r10
  int v8; // ecx

  v5 = *a3 >> 1;
  if ( (unsigned int)v5 < 0x7E )
  {
    v6 = *(unsigned __int16 *)(a2 + 2 * v5);
    v7 = (volatile signed __int16 *)(a2 + 2 * v5);
    while ( 1 )
    {
      v8 = v6 + a4;
      if ( (unsigned int)(v6 + a4) >= 0xFFFF )
        v8 = 0xFFFF;
      if ( v8 == v6 )
        break;
      LOWORD(v5) = a1 + 192;
      if ( a2 != a1 + 192 )
      {
        *v7 = v8;
        return v5;
      }
      LOWORD(v5) = _InterlockedCompareExchange16(v7, v8, v6);
      if ( (unsigned __int16)v5 == v6 )
        return v5;
      v6 = (unsigned __int16)v5;
    }
  }
  return v5;
}
