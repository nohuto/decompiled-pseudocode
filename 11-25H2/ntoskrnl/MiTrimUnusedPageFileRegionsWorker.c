/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x1403DB700
 * Callers:
 *     <none>
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14021A0C0 (MiSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x1402280C0 (MiTransferSoftwarePte.c)
 *     MiMakePageFilePte @ 0x14022828C (MiMakePageFilePte.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403DB268 (MiPageFileLargestBitmapsRun.c)
 *     MiLockWsSwapExclusive @ 0x1403DBAE8 (MiLockWsSwapExclusive.c)
 *     MiUnlockWsSwapExclusive @ 0x1403DBB44 (MiUnlockWsSwapExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x14069B860 (ZwFsControlFile.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiContractWsSwapPageFile @ 0x140A0514C (MiContractWsSwapPageFile.c)
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
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r14
  int v14; // r15d
  signed __int32 v15[8]; // [rsp+8h] [rbp-100h] BYREF
  NTSTATUS Object; // [rsp+58h] [rbp-B0h]
  __int128 Object_8; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v18; // [rsp+70h] [rbp-98h]
  __int128 v19; // [rsp+80h] [rbp-88h]
  unsigned int v20; // [rsp+94h] [rbp-74h]
  __int64 v21; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *v22; // [rsp+A0h] [rbp-68h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-60h] BYREF
  __int16 v24; // [rsp+B8h] [rbp-50h] BYREF
  char v25; // [rsp+BAh] [rbp-4Eh]
  __int64 v26; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall *v27)(); // [rsp+D8h] [rbp-30h]
  __int64 v28; // [rsp+E0h] [rbp-28h]
  LONG (__fastcall *v29)(PRKEVENT); // [rsp+E8h] [rbp-20h]
  __int128 *p_Object_8; // [rsp+F0h] [rbp-18h]
  __int16 v31; // [rsp+108h] [rbp+0h]
  char v32; // [rsp+10Ah] [rbp+2h]
  __int128 InputBuffer; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v34; // [rsp+128h] [rbp+20h]

  memset_0(&v24, 0, 0x58uLL);
  v34 = 0LL;
  Object_8 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  CurrentThread = KeGetCurrentThread();
  v22 = CurrentThread;
  PageFilePte = MiMakePageFilePte(0LL);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1000)) )
  {
    MiLockWsSwapExclusive(CurrentThread, a1);
    v4 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v4 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v5 = *(_DWORD *)(a1 + 18520);
    v6 = 0;
    v20 = v5;
    if ( v5 )
    {
      v7 = (__int64 *)(a1 + 18528);
      v21 = a1 + 18528;
      do
      {
        v8 = *v7;
        if ( (*(_WORD *)(*v7 + 172) & 0x850) == 0x10 )
        {
          *(_QWORD *)&Object_8 = 393216LL;
          *(_QWORD *)&v18 = (char *)&Object_8 + 8;
          *((_QWORD *)&Object_8 + 1) = (char *)&Object_8 + 8;
          v19 = v6 | 0x200000000000uLL;
          *((_QWORD *)&v18 + 1) = a1;
          v9 = MiPageFileLargestBitmapsRun(v8);
          if ( v9 >= DWORD1(v19) )
          {
            do
            {
              v10 = *(_QWORD *)(a1 + 992);
              v31 = 0;
              v26 = v10;
              v24 = 18;
              v27 = xHalTimerWatchdogStop;
              v25 = 88;
              v29 = MiTrimUnusedPageFileRegionsApc;
              p_Object_8 = &Object_8;
              v28 = 0LL;
              v32 = 0;
              KeInsertQueueApc((__int64)&v24, (__int64)&Object_8, 0LL, 0);
              KeWaitForSingleObject(&Object_8, Executive, 0, 0, 0LL);
              if ( !HIDWORD(v19) )
                break;
              *((_QWORD *)&InputBuffer + 1) = (unsigned __int64)DWORD2(v19) << 12;
              v34 = (unsigned __int64)HIDWORD(v19) << 12;
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
              v11 = MiTransferSoftwarePte(PageFilePte, v8, (_KPROCESS *)DWORD2(v19), 3);
              v12 = v11;
              if ( qword_140E2D940 )
              {
                if ( (v11 & 0x10) != 0 )
                  v12 = v11 & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v12 = v11 & ~qword_140E2D940;
              }
              v13 = HIDWORD(v12);
              if ( HIDWORD(v19) )
              {
                v14 = HIDWORD(v19);
                do
                {
                  MiReleasePageFileInfo(a1, v11, 2);
                  ++v13;
                  if ( v11 && qword_140E2D940 )
                  {
                    if ( (v11 & 0x10) != 0 )
                      LODWORD(v11) = v11 & 0xFFFFFFEF;
                    else
                      LODWORD(v11) = ~(_DWORD)qword_140E2D940 & v11;
                  }
                  v11 = MiSwizzleInvalidPte((v13 << 32) | (unsigned int)v11);
                  --v14;
                }
                while ( v14 );
              }
              if ( Object < 0 )
                break;
              KeResetEvent((PRKEVENT)&Object_8);
              *((_QWORD *)&v19 + 1) = (unsigned int)(HIDWORD(v19) + DWORD2(v19));
            }
            while ( DWORD2(v19) < *(_DWORD *)v8 );
            v7 = (__int64 *)v21;
            v5 = v20;
          }
        }
        ++v7;
        ++v6;
        v21 = (__int64)v7;
      }
      while ( v6 < v5 );
      CurrentThread = v22;
    }
    --CurrentThread->SpecialApcDisable;
    MiUnlockWsSwapExclusive(CurrentThread, a1);
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1000));
    *(_QWORD *)(a1 + 1128) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    _InterlockedOr(v15, 0);
    *(_QWORD *)(a1 + 1120) = 0LL;
  }
  PsDereferencePartition(*(_QWORD *)(a1 + 184));
}
