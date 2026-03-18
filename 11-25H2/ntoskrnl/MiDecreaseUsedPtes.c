/*
 * XREFs of MiDecreaseUsedPtes @ 0x14038BCF0
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x1402C2F60 (MiFillPoolCommitPageTable.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiDeleteSystemPageTable @ 0x14038A330 (MiDeleteSystemPageTable.c)
 *     MiDecommitLargePoolVa @ 0x14038BEF0 (MiDecommitLargePoolVa.c)
 *     MiUpdateAwePageTable @ 0x1403FD730 (MiUpdateAwePageTable.c)
 *     MiUnmapMdlCommon @ 0x140412070 (MiUnmapMdlCommon.c)
 *     MiDeleteShadowStackPtes @ 0x14049C92C (MiDeleteShadowStackPtes.c)
 *     MiUnmapKernelScp @ 0x14049F14C (MiUnmapKernelScp.c)
 *     MiMarkBootGuardPage @ 0x1406746AC (MiMarkBootGuardPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecreaseUsedPtes(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v6; // rbx
  int v7; // edi
  __int64 v8; // r8
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  __int64 v12; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v15; // rdx

  v3 = *(_QWORD *)a2;
  BugCheckParameter4 = a3;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v12 = *(_QWORD *)a2;
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
            v12 = v3 | 0x20;
          v3 = v12 | 0x42;
          if ( (v15 & 0x42) == 0 )
            v3 = v12;
        }
      }
    }
  }
  v6 = 48 * ((v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  if ( (*(_DWORD *)(v6 + 36) & 0x4000000) != 0 )
    v8 = HIDWORD(*(_QWORD *)v6);
  else
    v8 = *(_QWORD *)(v6 + 16) >> 16;
  v9 = v8 & 0x3FF;
  if ( v9 < (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41790uLL, v6, v9, BugCheckParameter4);
  v10 = v9 - BugCheckParameter4;
  if ( (*(_DWORD *)(v6 + 36) & 0x4000000) != 0 )
    *(_QWORD *)v6 = ((unsigned __int64)v10 << 32) ^ (*(_QWORD *)v6 ^ ((unsigned __int64)v10 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
  else
    *(_QWORD *)(v6 + 16) = ((unsigned __int64)v10 << 16) ^ (*(_QWORD *)(v6 + 16) ^ ((unsigned __int64)v10 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v10;
}
