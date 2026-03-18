/*
 * XREFs of UserRtlAllocMem @ 0x14019EE20
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall UserRtlAllocMem(unsigned __int64 a1)
{
  return Win32AllocPoolZInitImpl(256LL, a1, 0x74727355u);
}
