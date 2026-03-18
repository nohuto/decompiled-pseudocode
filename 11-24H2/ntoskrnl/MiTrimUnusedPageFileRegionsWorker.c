/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x140403D20
 * Callers:
 *     <none>
 * Callees:
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiSwizzleInvalidPte @ 0x14022A3B0 (MiSwizzleInvalidPte.c)
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403664F0 (MiPageFileLargestBitmapsRun.c)
 *     MiTransferSoftwarePte @ 0x14039F300 (MiTransferSoftwarePte.c)
 *     MiMakePageFilePte @ 0x14039F4D8 (MiMakePageFilePte.c)
 *     MiLockWsSwapExclusive @ 0x1404043DC (MiLockWsSwapExclusive.c)
 *     MiUnlockWsSwapExclusive @ 0x140404DE4 (MiUnlockWsSwapExclusive.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x1406A6B30 (ZwFsControlFile.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiContractWsSwapPageFile @ 0x140A07248 (MiContractWsSwapPageFile.c)
 */

void __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 PageFilePte; // rdi
  __int64 v4; // rdx
  bool v5; // zf
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  __int64 *v8; // rbx
  __int64 v9; // r13
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r14
  int v15; // r15d
  unsigned int v16; // eax
  signed __int32 v17[8]; // [rsp+8h] [rbp-100h] BYREF
  NTSTATUS Object; // [rsp+58h] [rbp-B0h]
  __int128 Object_8; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+70h] [rbp-98h]
  __int128 v21; // [rsp+80h] [rbp-88h]
  unsigned int v22; // [rsp+94h] [rbp-74h]
  __int64 v23; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *v24; // [rsp+A0h] [rbp-68h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v26; // [rsp+B8h] [rbp-50h] BYREF
  char v27; // [rsp+BAh] [rbp-4Eh]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall *v29)(); // [rsp+D8h] [rbp-30h]
  __int64 v30; // [rsp+E0h] [rbp-28h]
  LONG (__fastcall *v31)(PRKEVENT); // [rsp+E8h] [rbp-20h]
  __int128 *p_Object_8; // [rsp+F0h] [rbp-18h]
  __int16 v33; // [rsp+108h] [rbp+0h]
  char v34; // [rsp+10Ah] [rbp+2h]
  __int128 InputBuffer; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v36; // [rsp+128h] [rbp+20h]

  memset_0(&v26, 0, 0x58uLL);
  v36 = 0LL;
  Object_8 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  CurrentThread = KeGetCurrentThread();
  v24 = CurrentThread;
  PageFilePte = MiMakePageFilePte(0LL);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1000)) )
  {
    MiLockWsSwapExclusive(CurrentThread, a1);
    v5 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v5 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(1LL, v4);
    v6 = *(_DWORD *)(a1 + 18520);
    v7 = 0;
    v22 = v6;
    if ( v6 )
    {
      v8 = (__int64 *)(a1 + 18528);
      v23 = a1 + 18528;
      do
      {
        v9 = *v8;
        if ( (*(_WORD *)(*v8 + 172) & 0x850) == 0x10 )
        {
          *(_QWORD *)&Object_8 = 393216LL;
          *(_QWORD *)&v20 = (char *)&Object_8 + 8;
          *((_QWORD *)&Object_8 + 1) = (char *)&Object_8 + 8;
          v21 = v7 | 0x200000000000uLL;
          *((_QWORD *)&v20 + 1) = a1;
          v10 = MiPageFileLargestBitmapsRun(v9);
          if ( v10 >= DWORD1(v21) )
          {
            do
            {
              v11 = *(_QWORD *)(a1 + 992);
              v33 = 0;
              v28 = v11;
              v26 = 18;
              v29 = xHalTimerWatchdogStop;
              v27 = 88;
              v31 = MiTrimUnusedPageFileRegionsApc;
              p_Object_8 = &Object_8;
              v30 = 0LL;
              v34 = 0;
              KeInsertQueueApc((__int64)&v26, (__int64)&Object_8, 0LL, 0);
              KeWaitForSingleObject(&Object_8, Executive, 0, 0, 0LL);
              if ( !HIDWORD(v21) )
                break;
              *((_QWORD *)&InputBuffer + 1) = (unsigned __int64)DWORD2(v21) << 12;
              v36 = (unsigned __int64)HIDWORD(v21) << 12;
              *(_QWORD *)&InputBuffer = 0x100000000LL;
              KeResetEvent((PRKEVENT)&Object_8);
              Object = ZwFsControlFile(
                         *(HANDLE *)(v9 + 192),
                         0LL,
                         MiIrpCompletionApcRoutine,
                         &Object_8,
                         &IoStatusBlock,
                         0x98208u,
                         &InputBuffer,
                         0x18u,
                         0LL,
                         0);
              if ( Object == 259 )
              {
                KeWaitForSingleObject(&Object_8, Executive, 0, 0, 0LL);
                Object = IoStatusBlock.Status;
              }
              v12 = MiTransferSoftwarePte(PageFilePte, v9, DWORD2(v21), 3);
              v13 = v12;
              if ( qword_140E2DB80 )
              {
                if ( (v12 & 0x10) != 0 )
                  v13 = v12 & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v13 = v12 & ~qword_140E2DB80;
              }
              v14 = HIDWORD(v13);
              if ( HIDWORD(v21) )
              {
                v15 = HIDWORD(v21);
                do
                {
                  MiReleasePageFileInfo(a1, v12, 2LL);
                  ++v14;
                  if ( v12 && qword_140E2DB80 )
                  {
                    if ( (v12 & 0x10) != 0 )
                      LODWORD(v12) = v12 & 0xFFFFFFEF;
                    else
                      LODWORD(v12) = ~(_DWORD)qword_140E2DB80 & v12;
                  }
                  v12 = MiSwizzleInvalidPte((v14 << 32) | (unsigned int)v12);
                  --v15;
                }
                while ( v15 );
              }
              if ( Object < 0 )
                break;
              KeResetEvent((PRKEVENT)&Object_8);
              v16 = HIDWORD(v21) + DWORD2(v21);
              *((_QWORD *)&v21 + 1) = (unsigned int)(HIDWORD(v21) + DWORD2(v21));
            }
            while ( v16 < *(_DWORD *)v9 );
            v8 = (__int64 *)v23;
            v6 = v22;
          }
        }
        ++v8;
        ++v7;
        v23 = (__int64)v8;
      }
      while ( v7 < v6 );
      CurrentThread = v24;
    }
    --CurrentThread->SpecialApcDisable;
    MiUnlockWsSwapExclusive(CurrentThread, a1);
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1000));
    *(_QWORD *)(a1 + 1128) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    _InterlockedOr(v17, 0);
    *(_QWORD *)(a1 + 1120) = 0LL;
  }
  PsDereferencePartition(*(_QWORD *)(a1 + 184));
}
