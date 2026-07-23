/*
 * XREFs of PopAdaptiveStandbyCalculateBatteryInformation @ 0x14075F448
 * Callers:
 *     PopAdaptiveStandbyWnfCallback @ 0x140762640 (PopAdaptiveStandbyWnfCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAdaptiveStandbyCalculateBatteryInformation(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // edx
  unsigned int v5; // r9d
  unsigned int v6; // ecx

  *(_OWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  result = (unsigned int)a1[13];
  *(_DWORD *)(a2 + 4) = result;
  if ( a1[13] )
  {
    result = (unsigned int)a1[9];
    if ( (result & 1) != 0 )
      *(_DWORD *)a2 |= 1u;
    v4 = a1[10];
    *(_DWORD *)(a2 + 12) = v4;
    v5 = a1[4];
    *(_DWORD *)(a2 + 8) = v5;
    if ( v5 )
    {
      v6 = 100;
      result = (100 * v4 + (v5 >> 1)) / v5;
      if ( (int)result < 100 )
        v6 = (100 * v4 + (v5 >> 1)) / v5;
      *(_DWORD *)(a2 + 16) = v6;
    }
    else
    {
      *(_DWORD *)(a2 + 16) = 100;
    }
  }
  else
  {
    *(_DWORD *)a2 |= 1u;
    *(_DWORD *)(a2 + 12) = -1;
    *(_DWORD *)(a2 + 8) = 100;
  }
  return result;
}
