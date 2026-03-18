/*
 * XREFs of NVMeGetTemperatureThresholdCompletion @ 0x140029110
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeGetTemperatureThresholdCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _WORD *v4; // r8
  __int64 v5; // r9
  char v6; // dl

  result = GetSrbExtension(a2);
  if ( v4 )
  {
    v6 = *(_BYTE *)(v3 + 3);
    if ( v6 != 14 )
    {
      if ( v6 == 1 )
        *(_WORD *)(v5 + 220) = *v4;
      *(_BYTE *)(result + 4225) |= 8u;
    }
  }
  return result;
}
