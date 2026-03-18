/*
 * XREFs of MiProbeAndLockPrepare @ 0x1402CB3C0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1402AABA0 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x1402CB0A0 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MiProbeAndLockPages @ 0x1404011D0 (MiProbeAndLockPages.c)
 *     MmLockPhysicalPagesByVa @ 0x1407DAAE0 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiInitializeProbePacketVm @ 0x1402FC3C0 (MiInitializeProbePacketVm.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
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
  int v10; // r8d
  int v11; // eax
  struct _KTHREAD *CurrentThread; // r9
  int v13; // ecx
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int16 v20; // cx
  __int16 v21; // ax
  __int16 v22; // cx
  _KPROCESS *Process; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // ecx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // ebx

  *(_QWORD *)(a1 + 64) = a2;
  v10 = a6;
  a6 = 0;
  v11 = *(_DWORD *)(a1 + 72);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 80) = CurrentThread;
  *(_DWORD *)(a1 + 96) = v10;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a3;
  v13 = a7 & 2;
  *(_QWORD *)(a1 + 16) = a3 + a4;
  v14 = v11 & 0xFFFFFFBF | (32 * v13);
  *(_DWORD *)(a1 + 72) = v14;
  if ( a5 )
  {
    if ( !a4 || (v15 = a4 + a3 - 1, v15 < a3) || v15 > 0x7FFFFFFEFFFFLL )
    {
      ++dword_140E2FEB8;
      return 3221225477LL;
    }
  }
  v17 = a3 + a4 - 1;
  if ( (v14 & 0x40) != 0 )
  {
    v18 = a4 >> 12;
    v19 = 0LL;
  }
  else
  {
    v19 = a2 + 48;
    v18 = ((*(_DWORD *)(a1 + 8) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a2 + 40) + 4095) >> 12;
  }
  *(_QWORD *)(a1 + 56) = v19;
  *(_QWORD *)(a1 + 24) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 32) = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = *(_WORD *)(a2 + 10);
  *(_QWORD *)(a1 + 144) = 0x3FFFFFFFFFLL;
  v21 = v20 & 0xFF7F;
  v22 = v20 | 0x80;
  if ( !v10 )
    v22 = v21;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_WORD *)(a2 + 10) = v22 | 2;
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    Process = CurrentThread->ApcState.Process;
    *(_QWORD *)(a1 + 88) = Process;
    *(_QWORD *)(a2 + 16) = Process;
    if ( v10 == 3 )
    {
      v24 = MiObtainReferencedVadEx(a3, 0, &a6);
      v25 = v24;
      if ( !v24 )
        return (unsigned int)a6;
      if ( (unsigned int)MiVadPureReserve(v24)
        || (*(unsigned int *)(v25 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 34) << 32)) >= 0x7FFFFFFFDLL
        || (v26 = *(_DWORD *)(v25 + 48), (v26 & 0x70) == 0x10)
        || (v26 & 0x200000) == 0 && (v26 & 0x70) != 0x20 )
      {
        v32 = -1073741819;
      }
      else
      {
        v27 = (*(unsigned int *)(v25 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 32) << 32)) << 12;
        if ( a3 >= v27 )
        {
          v28 = ((*(unsigned int *)(v25 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 33) << 32)) << 12) | 0xFFF;
          if ( a3 <= v28 && v17 >= v27 && v17 <= v28 )
          {
            a6 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 88), v18);
            if ( a6 < 0 )
            {
              MiUnlockAndDereferenceVad((PVOID)v25);
              return (unsigned int)a6;
            }
            *(_QWORD *)(a1 + 128) = v25;
            *(_QWORD *)(a1 + 120) = v18;
            goto LABEL_27;
          }
        }
        v32 = -1073741800;
      }
      MiUnlockAndDereferenceVad((PVOID)v25);
      return v32;
    }
LABEL_27:
    if ( (a7 & 1) != 0 )
    {
      v29 = *(_QWORD *)(a1 + 88);
      if ( MmNumLockedPagesFixEnabled )
      {
        v30 = *(_QWORD *)(v29 + 1040);
        if ( MmNumLockedPagesFanOutEnabled )
        {
          LODWORD(v29) = KeGetPcr()->Prcb.Number;
          v31 = v30 + (((v29 >> 1) & 3) << 6);
        }
        else
        {
          v31 = *(_QWORD *)(v29 + 1040);
        }
        _InterlockedAdd64((volatile signed __int64 *)(v31 + 512), v18);
      }
      else
      {
        _InterlockedAdd64((volatile signed __int64 *)(v29 + 656), v18);
      }
    }
    return MiInitializeProbePacketVm(a1);
  }
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  return MiInitializeProbePacketVm(a1);
}
