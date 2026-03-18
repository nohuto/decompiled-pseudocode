/*
 * XREFs of MiDecreaseUsedPtes @ 0x1403A4830
 * Callers:
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiDeleteShadowStackPtes @ 0x140269284 (MiDeleteShadowStackPtes.c)
 *     MiFillPoolCommitPageTable @ 0x1402EB2D0 (MiFillPoolCommitPageTable.c)
 *     MiDecommitLargePoolVa @ 0x1403A3F50 (MiDecommitLargePoolVa.c)
 *     MiUnmapMdlCommon @ 0x14040F900 (MiUnmapMdlCommon.c)
 *     MiUpdateAwePageTable @ 0x140474584 (MiUpdateAwePageTable.c)
 *     MiDeleteSystemPageTable @ 0x140485BD0 (MiDeleteSystemPageTable.c)
 *     MiUnmapKernelScp @ 0x14049DF98 (MiUnmapKernelScp.c)
 *     MiMarkBootGuardPage @ 0x14067FECC (MiMarkBootGuardPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecreaseUsedPtes(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v6; // rcx
  ULONG_PTR v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // r8
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v15; // rdx

  v3 = *(_QWORD *)a2;
  BugCheckParameter4 = a3;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v6 = *(_QWORD *)a2;
    if ( (v3 & 1) != 0 && ((v3 & 0x42) == 0 || (v3 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v15 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v15 & 0x20) != 0 )
            v6 = v3 | 0x20;
          v3 = v6 | 0x42;
          if ( (v15 & 0x42) == 0 )
            v3 = v6;
        }
      }
    }
  }
  v7 = 48 * ((v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  if ( (*(_DWORD *)(v7 + 36) & 0x4000000) != 0 )
    v9 = HIDWORD(*(_QWORD *)v7);
  else
    v9 = *(_QWORD *)(v7 + 16) >> 16;
  v10 = v9 & 0x3FF;
  if ( v10 < (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41790uLL, v7, v10, BugCheckParameter4);
  v11 = v10 - BugCheckParameter4;
  if ( (*(_DWORD *)(v7 + 36) & 0x4000000) != 0 )
    *(_QWORD *)v7 = ((unsigned __int64)v11 << 32) ^ (*(_QWORD *)v7 ^ ((unsigned __int64)v11 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
  else
    *(_QWORD *)(v7 + 16) = ((unsigned __int64)v11 << 16) ^ (*(_QWORD *)(v7 + 16) ^ ((unsigned __int64)v11 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v11;
}
