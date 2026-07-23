/*
 * XREFs of MiProbeAndLockPrepare @ 0x1402379F0
 * Callers:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MmStoreProbeAndLockPages @ 0x1402E9990 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140390AC0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPages @ 0x140415B10 (MiProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x14042AF44 (IopProbeAndLockPages_0.c)
 *     MmLockPhysicalPagesByVa @ 0x1407EAF70 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiInitializeProbePacketVm @ 0x14020AD30 (MiInitializeProbePacketVm.c)
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPrepare(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        int a6,
        char a7)
{
  int v9; // r9d
  int v11; // eax
  struct _KTHREAD *CurrentThread; // r10
  int v13; // ecx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int16 v20; // ax
  unsigned __int64 v21; // rcx
  _KPROCESS *Process; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  int v25; // ecx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx

  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)a1 = a3;
  v9 = a6;
  *(_DWORD *)(a1 + 96) = a6;
  v11 = *(_DWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 8) = a3;
  a6 = 0;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 80) = CurrentThread;
  v13 = a7 & 2;
  *(_QWORD *)(a1 + 16) = a3 + a4;
  v14 = v11 & 0xFFFFFFBF | (32 * v13);
  *(_DWORD *)(a1 + 72) = v14;
  if ( a5 )
  {
    if ( !a4 || (v15 = a4 + a3 - 1, v15 < a3) || v15 > 0x7FFFFFFEFFFFLL )
    {
      ++dword_140E30240;
      return 3221225477LL;
    }
  }
  v17 = a3 + a4 - 1;
  if ( (v14 & 0x40) != 0 )
  {
    v18 = 0LL;
  }
  else
  {
    v18 = a2 + 48;
    a4 = (a3 & 0xFFF) + *(unsigned int *)(a2 + 40) + 4095LL;
  }
  v19 = a4 >> 12;
  *(_QWORD *)(a1 + 56) = v18;
  *(_QWORD *)(a1 + 24) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 32) = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v21 = *(unsigned __int16 *)(a2 + 10);
  *(_QWORD *)(a1 + 144) = 0x3FFFFFFFFFLL;
  v20 = v21 & 0xFF7F;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  LOWORD(v21) = v21 | 0x80;
  if ( !v9 )
    LOWORD(v21) = v20;
  *(_WORD *)(a2 + 10) = v21 | 2;
  if ( a3 > 0x7FFFFFFEFFFFLL )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  else
  {
    Process = CurrentThread->ApcState.Process;
    *(_QWORD *)(a1 + 88) = Process;
    *(_QWORD *)(a2 + 16) = Process;
    if ( v9 == 3 )
    {
      v23 = MiObtainReferencedVadEx(a3, 0LL, &a6);
      v24 = v23;
      if ( !v23 )
        return (unsigned int)a6;
      if ( MiVadPureReserve(v23)
        || (*(unsigned int *)(v24 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 34) << 32)) >= 0x7FFFFFFFDLL
        || (v25 = *(_DWORD *)(v24 + 48), (v25 & 0x70) == 0x10)
        || (v25 & 0x200000) == 0 && (v25 & 0x70) != 0x20 )
      {
        MiUnlockAndDereferenceVad((PVOID)v24);
        return 3221225477LL;
      }
      v26 = (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32)) << 12;
      if ( a3 < v26
        || (v27 = ((*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) << 12) | 0xFFF,
            a3 > v27)
        || v17 < v26
        || v17 > v27 )
      {
        MiUnlockAndDereferenceVad((PVOID)v24);
        return 3221225496LL;
      }
      a6 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 88));
      if ( a6 < 0 )
      {
        MiUnlockAndDereferenceVad((PVOID)v24);
        return (unsigned int)a6;
      }
      *(_QWORD *)(a1 + 128) = v24;
      *(_QWORD *)(a1 + 120) = v19;
    }
    if ( (a7 & 1) != 0 )
    {
      LODWORD(v21) = KeGetPcr()->Prcb.Number;
      _InterlockedAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 1040LL) + ((((v21 >> 1) & 3) + 8) << 6)),
        v19);
    }
  }
  return MiInitializeProbePacketVm(a1);
}
