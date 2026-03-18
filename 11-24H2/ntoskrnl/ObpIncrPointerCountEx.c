/*
 * XREFs of ObpIncrPointerCountEx @ 0x140419440
 * Callers:
 *     NtWriteFile @ 0x1408C1170 (NtWriteFile.c)
 *     ObReferenceFileObjectForWrite @ 0x140988C30 (ObReferenceFileObjectForWrite.c)
 *     ObInitializeFastReference @ 0x140A3134C (ObInitializeFastReference.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall ObpIncrPointerCountEx(volatile signed __int64 *a1, int a2)
{
  __int64 v2; // rax

  v2 = _InterlockedExchangeAdd64(a1, a2);
  if ( v2 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, a2 + v2);
  return a2 + v2;
}
