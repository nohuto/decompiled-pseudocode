/*
 * XREFs of MiCheckKernelShadow @ 0x1402EE7D4
 * Callers:
 *     MiCheckRelevantKernelShadows @ 0x1402EE648 (MiCheckRelevantKernelShadows.c)
 * Callees:
 *     MiVaToPfnEx @ 0x140293EF0 (MiVaToPfnEx.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402EE8E8 (MiReadWriteAnyLevelShadowPte.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiCheckKernelShadow(char a1, unsigned __int64 a2, __int64 a3)
{
  ULONG_PTR v5; // rdi
  unsigned __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v11; // rbx

  v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = (((a2 + a3 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0xFFFFFFFFLL;
  v8 = 0LL;
  v9 = a2;
  while ( v5 <= v6 )
  {
    BugCheckParameter4 = MiReadWriteAnyLevelShadowPte(v5, 0LL, 0LL, CLFS_LSN_NULL_EXT);
    v11 = BugCheckParameter4;
    if ( (BugCheckParameter4 & 1) == 0 )
    {
      if ( (a1 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1302uLL, v5, BugCheckParameter4, BugCheckParameter4);
      return v8 + a2;
    }
    if ( MiVaToPfnEx(v9) != ((BugCheckParameter4 >> 12) & 0xFFFFFFFFFFLL) )
    {
      if ( (a1 & 8) == 0 )
        KeBugCheckEx(0x1Au, 0x1303uLL, v5, v11, v11);
      return v9;
    }
    v5 += 8LL;
    v8 += 4096LL;
    v9 += 4096LL;
  }
  return v7;
}
