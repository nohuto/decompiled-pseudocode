/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x14040FC0C
 * Callers:
 *     MiCheckKernelShadow @ 0x14040FAF8 (MiCheckKernelShadow.c)
 *     MiInitializeShadowPageTable @ 0x1407E6598 (MiInitializeShadowPageTable.c)
 *     MiMakeShadowPageTableRange @ 0x1407E67A4 (MiMakeShadowPageTableRange.c)
 *     MmDeleteShadowMapping @ 0x1407E6B0C (MmDeleteShadowMapping.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, unsigned __int64 a2, int a3, ULONG_PTR a4)
{
  __int64 v5; // r8
  _KPROCESS *Process; // r9
  __int64 v7; // r13
  unsigned __int64 KernelWaitTime; // r12
  unsigned __int8 v9; // al
  __int64 v10; // r14
  _QWORD *v11; // rsi
  ULONG_PTR v12; // rdi
  ULONG_PTR v13; // r15
  ULONG_PTR BugCheckParameter4; // rax
  int v16; // r14d
  int v17; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-28h]
  __int64 v19; // [rsp+40h] [rbp-20h]
  __int128 v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+58h] [rbp-8h]
  unsigned __int8 v22; // [rsp+A8h] [rbp+48h] BYREF
  int v23; // [rsp+B0h] [rbp+50h]

  v23 = a3;
  v21 = 0LL;
  v19 = 0LL;
  v5 = (int)a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = (int)a2;
  v20 = 0LL;
  KernelWaitTime = Process[2].KernelWaitTime;
  if ( (int)a2 < 4LL )
  {
    a2 = 4LL;
    do
    {
      *(&v19 + v5) = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v5;
    }
    while ( v5 < 4 );
  }
  v9 = 17;
  v10 = (int)a2;
  v22 = 17;
  v11 = (_QWORD *)KernelWaitTime;
  v12 = 0LL;
  while ( 1 )
  {
    v13 = *(&BugCheckParameter2 + v10--);
    if ( v10 == 3 )
    {
      v11 += (v13 >> 3) & 0x1FF;
    }
    else
    {
      if ( v9 != 17 )
      {
        LOBYTE(a2) = v9;
        MiUnmapPageInHyperSpaceWorker(KernelWaitTime, a2, 0x80000000LL);
      }
      KernelWaitTime = MiMapPageInHyperSpaceWorker((v12 >> 12) & 0xFFFFFFFFFFLL, &v22, 0x80000000);
      v11 = (_QWORD *)(KernelWaitTime + 8 * ((v13 >> 3) & 0x1FF));
    }
    if ( v23 && v10 == v7 )
      break;
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v11);
    v12 = BugCheckParameter4;
    if ( v10 && (BugCheckParameter4 & 0x81) == 0x81 )
      KeBugCheckEx(0x1Au, 0x1306uLL, v13, 0LL, BugCheckParameter4);
    if ( v10 == v7 )
      goto LABEL_15;
    v9 = v22;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !v10 )
      a4 |= 0x100uLL;
    v16 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v11) )
      v16 = MiSanitizeShadowPxe();
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (a4 & 0x20) == 0 )
      {
        a2 = 0xFFFFF6C000000000uLL;
        if ( (unsigned __int64)v11 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v11, a4, 128);
      }
    }
  }
  else
  {
    BugCheckParameter2 = a4;
    v16 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v11) )
    {
      v17 = MiSanitizeShadowPxe();
      a4 = BugCheckParameter2;
      v16 = v17;
    }
  }
  *v11 = a4;
  if ( v16 )
    MiWritePteShadow();
LABEL_15:
  LOBYTE(a2) = v22;
  if ( v22 != 17 )
    MiUnmapPageInHyperSpaceWorker(KernelWaitTime, a2, 0x80000000LL);
  return v12;
}
