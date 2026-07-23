/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x1403C5F70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     MiTransferSoftwarePte @ 0x140215AA0 (MiTransferSoftwarePte.c)
 *     MiMakePageFilePte @ 0x140215C78 (MiMakePageFilePte.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403C5B54 (MiPageFileLargestBitmapsRun.c)
 *     MiLockWsSwapExclusive @ 0x1403C637C (MiLockWsSwapExclusive.c)
 *     MiUnlockWsSwapExclusive @ 0x1403C6778 (MiUnlockWsSwapExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x1406A7AD0 (ZwFsControlFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiContractWsSwapPageFile @ 0x140A03778 (MiContractWsSwapPageFile.c)
 */

void __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 PageFilePte; // rdi
  bool v4; // zf
  unsigned int v5; // r14d
  unsigned int v6; // r12d
  __int64 *v7; // rbx
  __int64 v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // r9
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
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1000)) )
  {
    MiLockWsSwapExclusive(CurrentThread, a1);
    v4 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v4 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v5 = *(_DWORD *)(a1 + 18520);
    v6 = 0;
    v22 = v5;
    if ( v5 )
    {
      v7 = (__int64 *)(a1 + 18528);
      v23 = a1 + 18528;
      do
      {
        v8 = *v7;
        if ( (*(_WORD *)(*v7 + 172) & 0x850) == 0x10 )
        {
          *(_QWORD *)&Object_8 = 393216LL;
          *(_QWORD *)&v20 = (char *)&Object_8 + 8;
          *((_QWORD *)&Object_8 + 1) = (char *)&Object_8 + 8;
          v21 = v6 | 0x200000000000uLL;
          *((_QWORD *)&v20 + 1) = a1;
          v9 = MiPageFileLargestBitmapsRun(v8);
          if ( v9 >= DWORD1(v21) )
          {
            do
            {
              v10 = *(_QWORD *)(a1 + 992);
              v33 = 0;
              v28 = v10;
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
                         *(HANDLE *)(v8 + 192),
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
              v11 = MiTransferSoftwarePte(PageFilePte, v8, DWORD2(v21), 3);
              v13 = v11;
              if ( qword_140E2DCC0 )
              {
                if ( (v11 & 0x10) != 0 )
                  v13 = v11 & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v13 = v11 & ~qword_140E2DCC0;
              }
              v14 = HIDWORD(v13);
              if ( HIDWORD(v21) )
              {
                v15 = HIDWORD(v21);
                do
                {
                  MiReleasePageFileInfo(a1, v11, 2LL, v12);
                  ++v14;
                  if ( v11 && qword_140E2DCC0 )
                  {
                    if ( (v11 & 0x10) != 0 )
                      LODWORD(v11) = v11 & 0xFFFFFFEF;
                    else
                      LODWORD(v11) = ~(_DWORD)qword_140E2DCC0 & v11;
                  }
                  v11 = MiSwizzleInvalidPte((v14 << 32) | (unsigned int)v11);
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
            while ( v16 < *(_DWORD *)v8 );
            v7 = (__int64 *)v23;
            v5 = v22;
          }
        }
        ++v7;
        ++v6;
        v23 = (__int64)v7;
      }
      while ( v6 < v5 );
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
