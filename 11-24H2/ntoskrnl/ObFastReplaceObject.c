/*
 * XREFs of ObFastReplaceObject @ 0x14044674C
 * Callers:
 *     CcChangeBackingFileObject @ 0x140446404 (CcChangeBackingFileObject.c)
 *     MmChangeSectionBackingFile @ 0x14044663C (MmChangeSectionBackingFile.c)
 *     MiEnableImageDirectMap @ 0x14067BB08 (MiEnableImageDirectMap.c)
 *     ObpCreateSymbolicLinkName @ 0x1407421D0 (ObpCreateSymbolicLinkName.c)
 *     ObpDeleteDeviceMap @ 0x140742944 (ObpDeleteDeviceMap.c)
 *     PsShutdownSystem @ 0x140778A44 (PsShutdownSystem.c)
 *     SeExchangePrimaryToken @ 0x140792C70 (SeExchangePrimaryToken.c)
 *     PspThreadDelete @ 0x140ACF4E0 (PspThreadDelete.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ObFastReplaceObject(volatile __int64 *a1, ULONG_PTR a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 result; // rax
  int v5; // ecx

  if ( a2 )
  {
    v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 48), 0xFuLL);
    if ( v2 <= 0 )
      KeBugCheckEx(0x18u, 0LL, a2, 0x10uLL, v2 + 15);
  }
  v3 = _InterlockedExchange64(a1, (a2 | 0xF) & -(__int64)(a2 != 0));
  result = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = v3 & 0xF;
    if ( v5 )
      _InterlockedAdd64((volatile signed __int64 *)(result - 48), -v5);
  }
  return result;
}
