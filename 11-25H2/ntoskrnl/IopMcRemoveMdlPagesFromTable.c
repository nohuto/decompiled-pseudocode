/*
 * XREFs of IopMcRemoveMdlPagesFromTable @ 0x14059F624
 * Callers:
 *     IopMcTryUnlockMdl @ 0x14059F778 (IopMcTryUnlockMdl.c)
 *     IopMcCreateBufferEntryMdl @ 0x14070DAD8 (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     IopMcShouldYield @ 0x1404BDC4C (IopMcShouldYield.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall IopMcRemoveMdlPagesFromTable(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned int v8; // ebp
  KIRQL v9; // r15
  __int64 v10; // r14
  _DWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+60h] [rbp+18h] BYREF

  if ( FeaturePfnArrayDebug )
  {
    BugCheckParameter4 = *(_QWORD *)(BugCheckParameter2 + 88);
    if ( BugCheckParameter4 != BugCheckParameter3 + 48 )
      KeBugCheckEx(0x1F4u, 5uLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  v5 = *(unsigned int *)(BugCheckParameter3 + 40);
  v6 = *(_DWORD *)(BugCheckParameter3 + 44) & 0xFFF;
  v13 = 0;
  v7 = (unsigned __int64)(v6 + v5 + 4095) >> 12;
  v8 = 0;
  v9 = ExAcquireSpinLockExclusive(&dword_140F8BB24);
  if ( (_DWORD)v7 )
  {
    v10 = BugCheckParameter2 + 96;
    do
    {
      if ( IopMcShouldYield(v8, v9) )
      {
        ExReleaseSpinLockExclusive(&dword_140F8BB24, v9);
        KeYieldProcessorEx(&v13);
        v9 = ExAcquireSpinLockExclusive(&dword_140F8BB24);
      }
      RtlAvlRemoveNode((unsigned __int64 *)&qword_140F8BB28, v10);
      ++v8;
      v10 += 32LL;
    }
    while ( v8 < (unsigned int)v7 );
  }
  ExReleaseSpinLockExclusive(&dword_140F8BB24, v9);
  if ( (_DWORD)v7 )
  {
    v11 = (_DWORD *)(BugCheckParameter2 + 120);
    v12 = (unsigned int)v7;
    do
    {
      *v11 = -2;
      v11 += 8;
      --v12;
    }
    while ( v12 );
  }
  if ( FeaturePfnArrayDebug && *(_QWORD *)(BugCheckParameter2 + 88) != BugCheckParameter3 + 48 )
    KeBugCheckEx(0x1F4u, 6uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter2 + 88));
  *(_QWORD *)(BugCheckParameter2 + 88) = 0LL;
}
