/*
 * XREFs of LdrInitializePerThreadRng @ 0x1800AEE78
 * Callers:
 *     _LdrpInitialize @ 0x1800AEAE4 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrInitializePerThreadRng(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1 ^ (unsigned __int64)&LdrSystemDllInitBlock ^ LdrSystemDllInitBlock.RngData;
  v1 = (unsigned __int64)&v3 ^ v3 ^ ((((unsigned __int64)MEMORY[0x7FFE0004] << 32)
                                    * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64);
  if ( !v1 )
    v1 = 1LL;
  return RtlInitializeTRng(a1 + 608, v1);
}
