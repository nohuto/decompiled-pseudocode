/*
 * XREFs of MiInitializePartitionSpecialPurposeMemory @ 0x1407FE3D4
 * Callers:
 *     MiInitializePartitionSpecialPurposeMemoryCallout @ 0x14068E7C0 (MiInitializePartitionSpecialPurposeMemoryCallout.c)
 *     MiSpecialPurposeMemoryChangePrepare @ 0x1407FEBA0 (MiSpecialPurposeMemoryChangePrepare.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     KeExpandKernelStackAndCallout @ 0x14027BAB0 (KeExpandKernelStackAndCallout.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     MiFindSpecialPurposeMemoryType @ 0x14068E758 (MiFindSpecialPurposeMemoryType.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     PsCreatePartition @ 0x14077AA80 (PsCreatePartition.c)
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     PsReferencePartitionByHandle @ 0x140934434 (PsReferencePartitionByHandle.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInitializePartitionSpecialPurposeMemory(__int64 a1, _OWORD *a2)
{
  char *Pool; // rdi
  PVOID *v6; // r15
  void *v7; // r14
  __int64 v8; // r14
  volatile signed __int64 *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  int v12; // esi
  _QWORD *SpecialPurposeMemoryType; // rax
  __int64 v14; // rbx
  PVOID v15; // rax
  HANDLE v16; // rax
  __int128 v17; // xmm1
  _QWORD *v18; // rcx
  __int64 *v19; // [rsp+40h] [rbp-29h] BYREF
  __int128 Parameter; // [rsp+48h] [rbp-21h] BYREF
  __int64 v21; // [rsp+58h] [rbp-11h]
  int v22[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h]
  __int64 v24; // [rsp+70h] [rbp+7h]
  int v25; // [rsp+78h] [rbp+Fh]
  int v26; // [rsp+7Ch] [rbp+13h]
  __int128 v27; // [rsp+80h] [rbp+17h]
  void *v28; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  v26 = 0;
  v22[1] = 0;
  Parameter = 0LL;
  v21 = 0LL;
  if ( MiFindSpecialPurposeMemoryType(a1, a2) )
    return 0LL;
  Pool = 0LL;
  Handle = 0LL;
  v6 = (PVOID *)(a1 + 184);
  v19 = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  if ( (ULONG *)a1 != &MiSystemPartition )
  {
    v8 = **((_QWORD **)*v6 + 9);
    v21 = 0LL;
    *(_QWORD *)&Parameter = v8;
    *((_QWORD *)&Parameter + 1) = a2;
    v9 = (volatile signed __int64 *)(v8 + 17672);
    v10 = KeAbPreAcquire(v8 + 17672, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 17672), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 17672), (__int64)v10, v8 + 17672);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    v12 = KeExpandKernelStackAndCallout(
            (PEXPAND_STACK_CALLOUT)MiInitializePartitionSpecialPurposeMemoryCallout,
            &Parameter,
            (unsigned int)KeKernelStackSize / 3);
    if ( v12 < 0
      || (v12 = v21, (int)v21 < 0)
      || (SpecialPurposeMemoryType = MiFindSpecialPurposeMemoryType(v8, a2),
          v12 = ObDuplicateObject(
                  (_DWORD)PsInitialSystemProcess,
                  SpecialPurposeMemoryType[7],
                  0,
                  (unsigned int)&v28,
                  0,
                  512,
                  2,
                  0),
          v12 < 0) )
    {
      if ( v8 != -17672 )
      {
        if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 17672));
        KeAbPostRelease(v8 + 17672);
      }
LABEL_25:
      v7 = v28;
      goto LABEL_26;
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 17672));
    KeAbPostRelease(v8 + 17672);
    v7 = v28;
  }
  Pool = (char *)MiAllocatePool(0x40uLL, 0x60uLL, 1951230285);
  if ( Pool )
  {
    v23 = 0LL;
    v24 = 0LL;
    v22[0] = 48;
    v25 = 512;
    v27 = 0LL;
    v12 = PsCreatePartition((__int64)v7, &Handle, 2031619, (int)v22, 0, 2);
    if ( v12 < 0 )
      goto LABEL_26;
    v12 = PsReferencePartitionByHandle(Handle, 2031619LL, 0LL, 1297313101LL, &v19);
    if ( v12 < 0 )
      goto LABEL_26;
    v14 = *v19;
    ObfReferenceObjectWithTag(*v6, 0x72536D4Du);
    v15 = *v6;
    v28 = 0LL;
    *(_QWORD *)(v14 + 17624) = v15;
    *(_QWORD *)(v14 + 17632) = v7;
    *(_OWORD *)(v14 + 17640) = *a2;
    *(_OWORD *)(v14 + 17656) = a2[1];
    *((_QWORD *)Pool + 2) = _InterlockedIncrement64(&qword_140E2ED78);
    v16 = Handle;
    *(_OWORD *)(Pool + 24) = *a2;
    v17 = a2[1];
    *((_QWORD *)Pool + 7) = v16;
    *((_QWORD *)Pool + 8) = v14;
    *(_OWORD *)(Pool + 40) = v17;
    v18 = *(_QWORD **)(a1 + 17632);
    if ( *v18 != a1 + 17624 )
      __fastfail(3u);
    Handle = 0LL;
    *(_QWORD *)Pool = a1 + 17624;
    *((_QWORD *)Pool + 1) = v18;
    *v18 = Pool;
    *(_QWORD *)(a1 + 17632) = Pool;
    Pool = 0LL;
    v12 = 0;
    goto LABEL_25;
  }
  v12 = -1073741670;
LABEL_26:
  if ( v7 )
    ZwClose(v7);
  if ( Handle )
    ZwClose(Handle);
  if ( v19 )
    PsDereferencePartition((__int64)v19);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)v12;
}
