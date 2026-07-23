/*
 * XREFs of ObReferenceObjectExWithTag @ 0x140415020
 * Callers:
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ObReferenceObjectExWithTag(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rax

  v2 = a2;
  ObpTraceObjectReferenceIfActive(BugCheckParameter2 - 48);
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), v2);
  if ( v4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x10uLL, v2 + v4);
  return v2 + v4;
}
