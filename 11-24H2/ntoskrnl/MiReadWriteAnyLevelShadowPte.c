/*
 * XREFs of MiReadWriteAnyLevelShadowPte @ 0x1402EE8E8
 * Callers:
 *     MiCheckKernelShadow @ 0x1402EE7D4 (MiCheckKernelShadow.c)
 *     MiInitializeShadowPageTable @ 0x1407F6B9C (MiInitializeShadowPageTable.c)
 *     MiMakeShadowPageTableRange @ 0x1407F6DA8 (MiMakeShadowPageTableRange.c)
 *     MmDeleteShadowMapping @ 0x1407F7110 (MmDeleteShadowMapping.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  ULONG_PTR v23; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+40h] [rbp-20h]
  __int128 v26; // [rsp+48h] [rbp-18h]
  __int64 v27; // [rsp+58h] [rbp-8h]
  unsigned __int8 v28; // [rsp+A8h] [rbp+48h] BYREF
  int v29; // [rsp+B0h] [rbp+50h]

  v29 = a3;
  v27 = 0LL;
  v25 = 0LL;
  v5 = (int)a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = (int)a2;
  v26 = 0LL;
  KernelWaitTime = Process[2].KernelWaitTime;
  if ( (int)a2 < 4LL )
  {
    a2 = 4LL;
    do
    {
      *(&v25 + v5) = a1;
      a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      ++v5;
    }
    while ( v5 < 4 );
  }
  v9 = 17;
  v10 = (int)a2;
  v28 = 17;
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
      KernelWaitTime = MiMapPageInHyperSpaceWorker((v12 >> 12) & 0xFFFFFFFFFFLL, &v28, 0x80000000);
      v11 = (_QWORD *)(KernelWaitTime + 8 * ((v13 >> 3) & 0x1FF));
    }
    if ( v29 && v10 == v7 )
      break;
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v11);
    v12 = BugCheckParameter4;
    if ( v10 && (BugCheckParameter4 & 0x81) == 0x81 )
      KeBugCheckEx(0x1Au, 0x1306uLL, v13, 0LL, BugCheckParameter4);
    if ( v10 == v7 )
      goto LABEL_15;
    v9 = v28;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !v10 )
      a4 |= 0x100uLL;
    v23 = a4;
    v16 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v11) )
    {
      v20 = MiSanitizeShadowPxe(v17, (__int64)&v23, v18);
      a4 = v23;
      v16 = v20;
    }
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (a4 & 0x20) == 0 )
      {
        a2 = 0xFFFFF6C000000000uLL;
        if ( (unsigned __int64)v11 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v11, a4, 128LL);
      }
    }
  }
  else
  {
    BugCheckParameter2 = a4;
    v16 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v11) )
    {
      v22 = MiSanitizeShadowPxe(v21, (__int64)&BugCheckParameter2, v18);
      a4 = BugCheckParameter2;
      v16 = v22;
    }
  }
  *v11 = a4;
  if ( v16 )
    MiWritePteShadow((__int64)v11, a4, v18, v19);
LABEL_15:
  LOBYTE(a2) = v28;
  if ( v28 != 17 )
    MiUnmapPageInHyperSpaceWorker(KernelWaitTime, a2, 0x80000000LL);
  return v12;
}
