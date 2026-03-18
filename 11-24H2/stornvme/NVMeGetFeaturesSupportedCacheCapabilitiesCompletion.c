/*
 * XREFs of NVMeGetFeaturesSupportedCacheCapabilitiesCompletion @ 0x140006260
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeGetFeaturesSupportedCacheCapabilitiesCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _BYTE *v4; // r8
  __int64 v5; // r9

  result = GetSrbExtension(a2);
  if ( *(_BYTE *)(v3 + 3) == 1 )
  {
    if ( v4 )
      *(_BYTE *)(v5 + 3964) = *(_BYTE *)(v5 + 3964) & 0xFB | (4 * (*v4 & 1));
    else
      *(_BYTE *)(v3 + 3) = 4;
  }
  *(_BYTE *)(result + 4225) |= 8u;
  return result;
}
