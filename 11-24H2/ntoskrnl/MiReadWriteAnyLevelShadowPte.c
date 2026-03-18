/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x1402666A8
 * Callers:
 *     MiCheckKernelShadow @ 0x140266594 (MiCheckKernelShadow.c)
 *     MiInitializeShadowPageTable @ 0x1407F6428 (MiInitializeShadowPageTable.c)
 *     MiMakeShadowPageTableRange @ 0x1407F6634 (MiMakeShadowPageTableRange.c)
 *     MmDeleteShadowMapping @ 0x1407F699C (MmDeleteShadowMapping.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140266854 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiReadWriteAnyLevelShadowPte(unsigned __int64 a1, unsigned __int64 a2, int a3, ULONG_PTR a4)
{
  __int64 v5; // r8
  _KPROCESS *Process; // r9
  __int64 v7; // r13
  unsigned __int64 KernelWaitTime; // r12
  unsigned __int64 v9; // r9
  unsigned __int8 v10; // al
  __int64 v11; // r14
  _QWORD *v12; // rsi
  ULONG_PTR v13; // rdi
  ULONG_PTR v14; // r15
  ULONG_PTR BugCheckParameter4; // rax
  int v17; // r14d
  int v18; // eax
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-28h]
  __int64 v20; // [rsp+40h] [rbp-20h]
  __int128 v21; // [rsp+48h] [rbp-18h]
  __int64 v22; // [rsp+58h] [rbp-8h]
  unsigned __int8 v23; // [rsp+A8h] [rbp+48h] BYREF
  int v24; // [rsp+B0h] [rbp+50h]

  v24 = a3;
  v22 = 0LL;
  v20 = 0LL;
  v5 = (int)a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = (int)a2;
  v21 = 0LL;
  KernelWaitTime = Process[2].KernelWaitTime;
  v9 = 0xFFFFF68000000000uLL;
  if ( (int)a2 < 4LL )
  {
    a2 = 4LL;
    do
    {
      *(&v20 + v5) = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v5;
    }
    while ( v5 < 4 );
  }
  v10 = 17;
  v11 = (int)a2;
  v23 = 17;
  v12 = (_QWORD *)KernelWaitTime;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = *(&BugCheckParameter2 + v11--);
    if ( v11 == 3 )
    {
      v12 += (v14 >> 3) & 0x1FF;
    }
    else
    {
      if ( v10 != 17 )
      {
        LOBYTE(a2) = v10;
        MiUnmapPageInHyperSpaceWorker(KernelWaitTime, a2, 0x80000000LL, v9);
      }
      KernelWaitTime = MiMapPageInHyperSpaceWorker((v13 >> 12) & 0xFFFFFFFFFFLL, &v23, 0x80000000LL);
      v12 = (_QWORD *)(KernelWaitTime + 8 * ((v14 >> 3) & 0x1FF));
    }
    if ( v24 && v11 == v7 )
      break;
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v12);
    v13 = BugCheckParameter4;
    if ( v11 && (BugCheckParameter4 & 0x81) == 0x81 )
      KeBugCheckEx(0x1Au, 0x1306uLL, v14, 0LL, BugCheckParameter4);
    if ( v11 == v7 )
      goto LABEL_15;
    v10 = v23;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !v11 )
      a4 |= 0x100uLL;
    v17 = 0;
    if ( (unsigned int)MiPteInShadowRange(v12) )
      v17 = MiSanitizeShadowPxe();
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (a4 & 0x20) == 0 )
      {
        a2 = 0xFFFFF6C000000000uLL;
        if ( (unsigned __int64)v12 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v12, a4, 128);
      }
    }
  }
  else
  {
    BugCheckParameter2 = a4;
    v17 = 0;
    if ( (unsigned int)MiPteInShadowRange(v12) )
    {
      v18 = MiSanitizeShadowPxe();
      a4 = BugCheckParameter2;
      v17 = v18;
    }
  }
  *v12 = a4;
  if ( v17 )
    MiWritePteShadow();
LABEL_15:
  LOBYTE(a2) = v23;
  if ( v23 != 17 )
    MiUnmapPageInHyperSpaceWorker(KernelWaitTime, a2, 0x80000000LL, v9);
  return v13;
}
