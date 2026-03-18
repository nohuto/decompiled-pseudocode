/*
 * XREFs of MiZeroVaToActiveEntry @ 0x140433DA8
 * Callers:
 *     MiTryZeroMemory @ 0x140210860 (MiTryZeroMemory.c)
 *     MiGetZeroExceptionInfo @ 0x140433D28 (MiGetZeroExceptionInfo.c)
 * Callees:
 *     MiGetZeroingContext @ 0x140433E30 (MiGetZeroingContext.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiZeroVaToActiveEntry(__int64 a1)
{
  ULONG_PTR ZeroingContext; // rax
  ULONG_PTR v2; // r8
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r10

  ZeroingContext = MiGetZeroingContext(a1);
  if ( BugCheckParameter4 < *(_QWORD *)(ZeroingContext + 296) || BugCheckParameter4 > *(_QWORD *)(ZeroingContext + 304) )
    KeBugCheckEx(0x1Au, 0x6102uLL, v2, ZeroingContext, BugCheckParameter4);
  v4 = MiGetZeroingContext(v2);
  return v7 + 8 * ((unsigned int)((v6 - v5) / (unsigned __int64)(MiPageSizes[*(unsigned int *)(v4 + 320)] << 12)) + 3LL);
}
