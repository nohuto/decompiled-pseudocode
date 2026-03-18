/*
 * XREFs of ObFastReplaceObject @ 0x14044FAEC
 * Callers:
 *     CcChangeBackingFileObject @ 0x14044F7A0 (CcChangeBackingFileObject.c)
 *     MmChangeSectionBackingFile @ 0x14044F9DC (MmChangeSectionBackingFile.c)
 *     MiEnableImageDirectMap @ 0x14066F168 (MiEnableImageDirectMap.c)
 *     ObpDeleteDeviceMap @ 0x140738634 (ObpDeleteDeviceMap.c)
 *     PsShutdownSystem @ 0x140768C94 (PsShutdownSystem.c)
 *     SeExchangePrimaryToken @ 0x14078384C (SeExchangePrimaryToken.c)
 *     ObpCreateSymbolicLinkName @ 0x140AC15D4 (ObpCreateSymbolicLinkName.c)
 *     PspThreadDelete @ 0x140AC7750 (PspThreadDelete.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
