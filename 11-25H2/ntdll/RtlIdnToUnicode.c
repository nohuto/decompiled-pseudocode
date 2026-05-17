/*
 * XREFs of RtlIdnToUnicode @ 0x1800BEAE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     IdnaMemAlloc @ 0x1800BEB6C (IdnaMemAlloc.c)
 *     RtlpIdnToUnicodeWorker @ 0x1800C04F0 (RtlpIdnToUnicodeWorker.c)
 */

__int64 __fastcall RtlIdnToUnicode(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int v11; // ebx

  v9 = IdnaMemAlloc(1022LL);
  v10 = v9;
  if ( !v9 )
    return 3221225495LL;
  v11 = RtlpIdnToUnicodeWorker(a1, a2, a3, a4, a5, v9);
  RtlpSysVolFree(v10);
  return v11;
}
