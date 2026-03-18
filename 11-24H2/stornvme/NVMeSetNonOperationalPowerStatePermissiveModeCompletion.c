/*
 * XREFs of NVMeSetNonOperationalPowerStatePermissiveModeCompletion @ 0x14002C600
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeSetNonOperationalPowerStatePermissiveModeCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rbx

  result = GetSrbExtension(a2);
  v6 = result;
  if ( (*(_DWORD *)(v5 + 4336) & 2) != 0 || v4 && *(_BYTE *)(v3 + 3) != 14 )
  {
    if ( (*(_BYTE *)(v5 + 21) & 8) != 0 )
      result = StorPortExtendedFunction(85LL, v5, 0LL, 0LL);
    *(_BYTE *)(v6 + 4225) |= 8u;
  }
  return result;
}
