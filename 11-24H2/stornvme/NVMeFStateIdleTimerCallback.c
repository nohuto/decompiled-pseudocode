/*
 * XREFs of NVMeFStateIdleTimerCallback @ 0x1400111A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFStateIdleTimerCallback(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1600);
  if ( (result & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 1600) = result & 0xFFFFFFDF;
    return StorPortExtendedFunction(51LL, a1, 0LL, 0LL);
  }
  return result;
}
