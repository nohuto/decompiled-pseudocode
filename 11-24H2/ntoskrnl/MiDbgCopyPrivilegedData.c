/*
 * XREFs of MiDbgCopyPrivilegedData @ 0x14067FE28
 * Callers:
 *     MiApplyDebuggerPatches @ 0x1404F4300 (MiApplyDebuggerPatches.c)
 *     MiCopyToUntrustedMemory @ 0x14067F52C (MiCopyToUntrustedMemory.c)
 * Callees:
 *     MiGetPhysicalAddress @ 0x140292DD0 (MiGetPhysicalAddress.c)
 *     VslWriteProtectedPage @ 0x14058BABC (VslWriteProtectedPage.c)
 */

__int64 __fastcall MiDbgCopyPrivilegedData(__int64 a1, __int128 *a2, int a3, unsigned __int64 a4, unsigned int a5)
{
  unsigned int v10; // edi
  __int64 result; // rax
  int v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13[4]; // [rsp+38h] [rbp-20h] BYREF

  v13[0] = 0LL;
  v12 = 0;
  while ( a5 )
  {
    v10 = a5;
    if ( 4096 - (a4 & 0xFFF) <= a5 )
      v10 = 4096 - (a4 & 0xFFF);
    if ( !(unsigned int)MiGetPhysicalAddress(a4, v13, &v12) )
      return 3221225477LL;
    result = VslWriteProtectedPage(a1, a2, a3, v13[0], a5);
    if ( (int)result < 0 )
      return result;
    a5 -= v10;
    a4 += v10;
    a3 += v10;
  }
  return 0LL;
}
