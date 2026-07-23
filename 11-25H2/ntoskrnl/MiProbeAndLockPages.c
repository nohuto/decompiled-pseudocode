/*
 * XREFs of MiProbeAndLockPages @ 0x1404011D0
 * Callers:
 *     MmProbeAndLockPagesPrivate @ 0x1404011A4 (MmProbeAndLockPagesPrivate.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiProbeAndLockPacket @ 0x1402AC750 (MiProbeAndLockPacket.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402BBC90 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiProbeAndLockPrepare @ 0x1402CB3C0 (MiProbeAndLockPrepare.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiAddMdlTracker @ 0x1404D2BE8 (MiAddMdlTracker.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmUnlockPhysicalPagesByVa @ 0x1407DABEC (MmUnlockPhysicalPagesByVa.c)
 *     MiReturnFullProcessCommitment @ 0x1409E454C (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiProbeAndLockPages(__int64 a1, char a2, int a3)
{
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // esi
  struct _KPRCB *CurrentPrcb; // r8
  char v12; // dl
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  struct _MDL *v16; // rdi
  int v17; // ebx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  char *v24; // rbx
  __int64 v25; // rdx
  unsigned __int64 v26; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-51h]
  __int64 v28; // [rsp+50h] [rbp-49h]
  volatile signed __int64 *v29; // [rsp+68h] [rbp-31h]
  PMDL MemoryDescriptorList; // [rsp+80h] [rbp-19h]
  unsigned int v31; // [rsp+88h] [rbp-11h]
  unsigned __int8 v32; // [rsp+8Ch] [rbp-Dh]
  __int64 v33; // [rsp+98h] [rbp-1h]
  unsigned int v34; // [rsp+A0h] [rbp+7h]
  __int64 v35; // [rsp+A8h] [rbp+Fh]
  __int64 v36; // [rsp+B0h] [rbp+17h]
  __int64 v37; // [rsp+B8h] [rbp+1Fh]
  PVOID P; // [rsp+C0h] [rbp+27h]

  memset_0(&v26, 0, 0xB0uLL);
  v6 = MiProbeAndLockPrepare(
         (__int64)&v26,
         a1,
         *(_QWORD *)(a1 + 32) + *(unsigned int *)(a1 + 44),
         *(unsigned int *)(a1 + 40),
         a2,
         a3,
         1);
  if ( v6 < 0 )
    RtlRaiseStatus(v6);
  v10 = MiProbeAndLockPacket((__int64)&v26, v7, v8, v9);
  if ( v29 )
  {
    if ( v29 == (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = *(_DWORD *)(v35 + 184) & 0xF;
      if ( v12 )
      {
        if ( v12 == 7 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
        }
        else
        {
          v13 = 3LL;
          if ( v12 == 5 )
            v13 = 0LL;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v13]);
        }
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[2]);
      }
    }
    else if ( (*(_DWORD *)(v35 + 184) & 0xF) != 0
           || (unsigned __int64)v29 < 0xFFFFF6FB7DBED000uLL
           || (unsigned __int64)v29 > 0xFFFFF6FB7DBEDFFFuLL
           || (v14 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
    {
      if ( (*(_DWORD *)(v35 + 184) & 0xF) != 0
        && (unsigned __int64)v29 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v29 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        _InterlockedAnd(
          &dword_140E2EE6C[(unsigned __int64)(2 * (unsigned int)((__int64)(v29 + 0x12090482600LL) >> 3)) >> 5],
          ~(2 << ((2 * ((__int64)(v29 + 0x12090482600LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                  * ((__int64)(v29 + 0x12090482600LL) >> 3)) & 0x1F)));
      }
      else
      {
        _InterlockedAnd64(v29, 0xCFFFFFFFFFFFFFFFuLL);
      }
    }
    else
    {
      ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v14
                                                                        + 4 * (((unsigned __int64)v29 >> 3) & 0x1FF)));
    }
    v29 = 0LL;
  }
  MiUnlockWorkingSetShared(v35, v32);
  v16 = MemoryDescriptorList;
  v17 = (v31 >> 6) & 1;
  if ( !v17 && (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)MemoryDescriptorList);
  if ( v10 < 0 )
  {
    if ( v17 )
    {
      v18 = v27;
      if ( v27 > v26 )
        MmUnlockPhysicalPagesByVa(v26, v27 - v26, v15, v34);
      HIDWORD(v19) = HIDWORD(v33);
      v20 = -(__int64)((v28 - v18) >> 12);
      if ( MmNumLockedPagesFixEnabled )
      {
        v21 = *(_QWORD *)(v33 + 1040);
        if ( MmNumLockedPagesFanOutEnabled )
        {
          LODWORD(v19) = KeGetPcr()->Prcb.Number;
          _InterlockedAdd64((volatile signed __int64 *)(v21 + (((v19 >> 1) & 3) << 6) + 512), v20);
        }
        else
        {
          _InterlockedAdd64((volatile signed __int64 *)(v21 + 512), v20);
        }
      }
      else
      {
        _InterlockedAdd64((volatile signed __int64 *)(v33 + 656), v20);
      }
    }
    else
    {
      MmUnlockPages(v16);
    }
    ++dword_140E2FEDC;
  }
  if ( P )
  {
    v22 = *((unsigned int *)P + 13);
    v23 = v36;
    v24 = (char *)P;
    v25 = v36 + (v22 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 32));
    *((_DWORD *)P + 13) = v36 + v22;
    v24[34] = BYTE4(v25);
    if ( v37 != v23 )
      MiReturnFullProcessCommitment(v33, v37 - v23);
    MiUnlockAndDereferenceVad(v24);
  }
  if ( v10 < 0 )
    RtlRaiseStatus(v10);
}
