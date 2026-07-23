/*
 * XREFs of MiDecreaseUsedPtes @ 0x14021C060
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiDecommitLargePoolVa @ 0x14021BCD4 (MiDecommitLargePoolVa.c)
 *     MiDeleteShadowStackPtes @ 0x14021EA48 (MiDeleteShadowStackPtes.c)
 *     MiFillPoolCommitPageTable @ 0x14034C910 (MiFillPoolCommitPageTable.c)
 *     MiUnmapMdlCommon @ 0x140433530 (MiUnmapMdlCommon.c)
 *     MiUpdateAwePageTable @ 0x14046E1F0 (MiUpdateAwePageTable.c)
 *     MiDeleteSystemPageTable @ 0x1404811C0 (MiDeleteSystemPageTable.c)
 *     MiUnmapKernelScp @ 0x140498D98 (MiUnmapKernelScp.c)
 *     MiMarkBootGuardPage @ 0x1406810CC (MiMarkBootGuardPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecreaseUsedPtes(__int64 a1, unsigned __int64 CurrentThread, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  ULONG_PTR v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // r8
  unsigned int v11; // r8d
  unsigned int v12; // r8d

  v3 = *(_QWORD *)CurrentThread;
  v4 = CurrentThread;
  BugCheckParameter4 = (unsigned int)a3;
  if ( CurrentThread >= 0xFFFFF6FB7DBED000uLL && CurrentThread <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v6 = *(_QWORD *)CurrentThread;
    if ( (v3 & 1) != 0 )
    {
      LOBYTE(a3) = (v3 & 0x42) != 0;
      LOBYTE(CurrentThread) = (v3 & 0x20) != 0;
      if ( ((unsigned __int8)a3 & (unsigned __int8)CurrentThread) == 0 && (MiFlags & 0x600000) != 0 )
      {
        CurrentThread = (unsigned __int64)KeGetCurrentThread();
        a3 = *(_QWORD *)(CurrentThread + 184);
        if ( *(_BYTE *)(a3 + 352) != 1 )
        {
          CurrentThread = *(_QWORD *)(a3 + 1288);
          if ( CurrentThread )
          {
            v4 = (v4 >> 3) & 0x1FF;
            CurrentThread = *(_QWORD *)(CurrentThread + 8 * v4);
            if ( (CurrentThread & 0x20) != 0 )
              v6 = v3 | 0x20;
            v3 = v6 | 0x42;
            if ( (CurrentThread & 0x42) == 0 )
              v3 = v6;
          }
        }
      }
    }
  }
  v7 = 0xFFFFFFFFFFLL;
  v8 = 48 * ((v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7, CurrentThread, a3, v4) )
      {
        HvlNotifyLongSpinWait(v9);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  if ( (*(_DWORD *)(v8 + 36) & 0x4000000) != 0 )
    v10 = HIDWORD(*(_QWORD *)v8);
  else
    v10 = *(_QWORD *)(v8 + 16) >> 16;
  v11 = v10 & 0x3FF;
  if ( v11 < (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41790uLL, v8, v11, BugCheckParameter4);
  v12 = v11 - BugCheckParameter4;
  if ( (*(_DWORD *)(v8 + 36) & 0x4000000) != 0 )
    *(_QWORD *)v8 = ((unsigned __int64)v12 << 32) ^ (*(_QWORD *)v8 ^ ((unsigned __int64)v12 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
  else
    *(_QWORD *)(v8 + 16) = ((unsigned __int64)v12 << 16) ^ (*(_QWORD *)(v8 + 16) ^ ((unsigned __int64)v12 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v12;
}
