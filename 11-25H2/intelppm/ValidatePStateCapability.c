/*
 * XREFs of ValidatePStateCapability @ 0x14002B200
 * Callers:
 *     <none>
 * Callees:
 *     IsProcGV3Capable @ 0x1400066A4 (IsProcGV3Capable.c)
 *     IsProcGV3Enabled @ 0x140007400 (IsProcGV3Enabled.c)
 */

__int64 __fastcall ValidatePStateCapability(_BYTE *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx

  v5 = -1073741637;
  if ( IsProcGV3Capable() && IsProcGV3Enabled() && (*a1 == 1 || *a1 == 127) )
    return 0;
  else
    *a3 |= 0x20u;
  return v5;
}
