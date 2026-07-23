/*
 * XREFs of ObpIncrPointerCountEx @ 0x1404091E0
 * Callers:
 *     ObReferenceFileObjectForWrite @ 0x140863440 (ObReferenceFileObjectForWrite.c)
 *     NtWriteFile @ 0x1408BEB30 (NtWriteFile.c)
 *     ObInitializeFastReference @ 0x140A4A4A0 (ObInitializeFastReference.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ObpIncrPointerCountEx(volatile signed __int64 *a1, int a2)
{
  __int64 v2; // rax

  v2 = _InterlockedExchangeAdd64(a1, a2);
  if ( v2 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, a2 + v2);
  return a2 + v2;
}
