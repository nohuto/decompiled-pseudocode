/*
 * XREFs of RtlpFcAssertGovernedFeaturesBootEffectiveStatesAreEqual @ 0x14077DC38
 * Callers:
 *     RtlpFcUpdateGovernedFeaturesEffectiveStates @ 0x140772B88 (RtlpFcUpdateGovernedFeaturesEffectiveStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcAssertGovernedFeaturesBootEffectiveStatesAreEqual(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r10d
  unsigned int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // r11
  unsigned int v9; // ebx
  int *v10; // rdx
  __int64 v11; // r11
  int v12; // ecx
  int v13; // r8d

  v4 = 0;
  if ( a2 != a4 )
    return (unsigned int)-1073741811;
  v6 = 0;
  v7 = a1 + *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a3 + 8) + a3;
  v9 = (unsigned __int16)*(_DWORD *)a1;
  if ( (unsigned __int16)*(_DWORD *)a1 )
  {
    v10 = (int *)(v7 + 8);
    v11 = v8 - v7;
    while ( 1 )
    {
      v12 = *v10;
      v13 = *(int *)((char *)v10 + v11);
      if ( (((unsigned __int8)v13 ^ *(_BYTE *)v10) & 1) != 0
        || (((unsigned __int8)v13 ^ (unsigned __int8)v12) & 0x78) != 0
        || (((unsigned __int8)v13 ^ (unsigned __int8)v12) & 6) != 0
        || ((v13 ^ v12) & 0x7FFF80) != 0 )
      {
        break;
      }
      ++v6;
      v10 += 4;
      if ( v6 >= v9 )
        return v4;
    }
    return (unsigned int)-1073741811;
  }
  return v4;
}
