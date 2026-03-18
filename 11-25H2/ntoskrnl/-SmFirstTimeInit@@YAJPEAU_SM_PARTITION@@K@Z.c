/*
 * XREFs of ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404AAD80
 * Callers:
 *     SmProcessCreateRequest @ 0x1409C16A4 (SmProcessCreateRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14022B760 (MmStoreChargeResidentAvailableForRead.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     SmFpCleanup @ 0x140396584 (SmFpCleanup.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SmFpPreAllocate @ 0x1404C4BB8 (SmFpPreAllocate.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405FDAE4 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x1405FDCE8 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x1405FE19C (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1405FE568 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmTerminateStoreProcess @ 0x140600ADC (SmTerminateStoreProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePrivateWorkerPool @ 0x1406EFC08 (ExAllocatePrivateWorkerPool.c)
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x14078D7BC (SmHwAcceleratorPartitionMgrCleanup.c)
 *     SmHwAcceleratorPartitionMgrInitialize @ 0x14078D8D4 (SmHwAcceleratorPartitionMgrInitialize.c)
 *     SmHwAcceleratorPartitionMgrStart @ 0x14078D8F0 (SmHwAcceleratorPartitionMgrStart.c)
 *     MmStoreCheckPagefiles @ 0x1407ED4D4 (MmStoreCheckPagefiles.c)
 *     MmStoreRegister @ 0x1407ED518 (MmStoreRegister.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SmRegistrationCtxStart @ 0x140AAF2F8 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmFirstTimeInit(struct _SM_PARTITION *a1, unsigned int a2)
{
  unsigned __int64 *v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rax
  __int64 *v7; // r14
  int v8; // eax
  int v9; // eax
  int v10; // eax
  NTSTATUS MinimalProcess; // edi
  char v13; // al
  int v14; // edx
  char v15; // al
  __int64 v16; // r14
  __int64 v17; // rdi
  int v18; // r9d
  bool v19; // zf
  unsigned int v20; // r14d
  __int64 v21; // xmm1_8
  int v22; // eax
  HANDLE Handle; // [rsp+60h] [rbp-49h] BYREF
  int v24; // [rsp+68h] [rbp-41h]
  PVOID Object; // [rsp+70h] [rbp-39h] BYREF
  __int128 v26; // [rsp+78h] [rbp-31h] BYREF
  __int64 v27; // [rsp+88h] [rbp-21h]
  _OWORD v28[3]; // [rsp+90h] [rbp-19h] BYREF
  int v29; // [rsp+C0h] [rbp+17h]
  int v30; // [rsp+C4h] [rbp+1Bh]
  int v31; // [rsp+C8h] [rbp+1Fh]

  v31 = 1048596;
  memset(v28, 0, sizeof(v28));
  v2 = (unsigned __int64 *)((char *)a1 + 2152);
  Handle = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((__int64)a1 + 2152, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v6, (__int64)v2);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  if ( *((PVOID *)a1 + 262) != PspSystemPartition && !*((_QWORD *)a1 + 263) )
  {
    MinimalProcess = -1073741394;
    goto LABEL_15;
  }
  if ( (*((_DWORD *)a1 + 534) & 8) == 0 )
  {
    MinimalProcess = SmRegistrationCtxStart((char *)a1 + 2848);
    if ( MinimalProcess < 0 )
      goto LABEL_15;
    *((_DWORD *)a1 + 534) |= 8u;
  }
  if ( !*((_QWORD *)a1 + 270) )
  {
    if ( !(unsigned int)MmStoreCheckPagefiles(*((_QWORD *)a1 + 262)) )
    {
      MinimalProcess = -1073741637;
      goto LABEL_15;
    }
    v16 = *((_QWORD *)a1 + 262);
    v17 = *(_QWORD *)(v16 + 120);
    KiStackAttachProcess((_KPROCESS *)v17, 0, (__int64)v28);
    LOBYTE(v18) = *(_BYTE *)(v17 + 1530);
    MinimalProcess = PsCreateMinimalProcess(
                       v17,
                       (unsigned int)&unk_140E08D90,
                       0,
                       v18,
                       0LL,
                       0,
                       16,
                       0LL,
                       *((_QWORD *)a1 + 263),
                       v16,
                       0LL,
                       (__int64)&Handle);
    KiUnstackDetachProcess((__int64)v28, 0LL);
    if ( MinimalProcess < 0 )
      goto LABEL_15;
    Object = 0LL;
    MinimalProcess = ObReferenceObjectByHandle(Handle, 0, 0LL, 0, &Object, 0LL);
    if ( MinimalProcess < 0 )
    {
      ZwClose(Handle);
      goto LABEL_15;
    }
    *((_QWORD *)a1 + 270) = Handle;
    *((_QWORD *)a1 + 271) = Object;
    PsDereferencePartition(v16);
  }
  if ( *((_DWORD *)a1 + 536) == 3 )
  {
    v19 = (*((_DWORD *)a1 + 556) & 0x1000) == 0;
    *((_DWORD *)a1 + 536) = 0;
    if ( !v19 )
    {
      MinimalProcess = SmHwAcceleratorPartitionMgrStart((char *)a1 + 3120, &unk_140E28048, *((_QWORD *)a1 + 271));
      if ( MinimalProcess < 0 )
      {
        SmHwAcceleratorPartitionMgrCleanup((char *)a1 + 3120, *((_QWORD *)a1 + 271));
        SmHwAcceleratorPartitionMgrInitialize((char *)a1 + 3120);
        goto LABEL_15;
      }
      *((_DWORD *)a1 + 534) |= 0x40u;
      if ( *((_DWORD *)a1 + 792) )
        *((_DWORD *)a1 + 536) = (*((_DWORD *)a1 + 798) != 1) + 1;
    }
  }
  v8 = *((_DWORD *)a1 + 534);
  if ( (v8 & 2) == 0 )
  {
    v20 = *((_DWORD *)a1 + 536);
    *((_QWORD *)a1 + 253) = *((_QWORD *)a1 + 270);
    MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(a1);
    if ( MinimalProcess < 0
      || (*((_DWORD *)a1 + 500) & 0x20) != 0
      && (MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerStart((char *)a1 + 1264, v20), MinimalProcess < 0) )
    {
      v21 = *((_QWORD *)a1 + 252);
      v26 = *((_OWORD *)a1 + 125);
      v27 = v21;
      SMKM_STORE_MGR<SM_TRAITS>::SmCleanup(a1);
      SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(a1, &v26);
      SmTerminateStoreProcess(a1);
      goto LABEL_15;
    }
    v8 = *((_DWORD *)a1 + 534) | 2;
    *((_DWORD *)a1 + 534) = v8;
  }
  if ( (v8 & 0x10) == 0 )
  {
    v13 = MmStoreChargeResidentAvailableForRead(*((ULONG ***)a1 + 262), 1LL);
    *((_DWORD *)a1 + 534) ^= ((unsigned __int8)*((_DWORD *)a1 + 534) ^ (unsigned __int8)(16 * v13)) & 0x10;
    if ( (v13 & 1) == 0 )
    {
      MinimalProcess = -1073741670;
      goto LABEL_15;
    }
  }
  v9 = *((_DWORD *)a1 + 535);
  if ( v9 )
  {
    if ( a2 != v9 )
    {
      MinimalProcess = -1073741800;
      goto LABEL_15;
    }
  }
  else
  {
    v24 = (a2 >> 8) & 0xFFFF0 | 0x100003;
    v22 = (a2 >> 8) & 0xFFFF0;
    v30 = v22 | 0x100002;
    v29 = v22 | 0x100005;
    MinimalProcess = SmFpPreAllocate((PEX_SPIN_LOCK)a1 + 720);
    if ( MinimalProcess < 0 )
      goto LABEL_15;
    MinimalProcess = SmFpPreAllocate((PEX_SPIN_LOCK)a1 + 750);
    if ( MinimalProcess < 0 )
    {
      SmFpCleanup((__int64)a1 + 2880);
      memset_0((char *)a1 + 2880, 0, 0x78uLL);
      *((_WORD *)a1 + 1444) = 1;
      *((_BYTE *)a1 + 2890) = 6;
      *((_DWORD *)a1 + 723) = 0;
      *((_QWORD *)a1 + 363) = (char *)a1 + 2896;
      *((_QWORD *)a1 + 362) = (char *)a1 + 2896;
      *((_QWORD *)a1 + 364) = a1;
      goto LABEL_15;
    }
    *((_DWORD *)a1 + 535) = a2;
  }
  v10 = *((_DWORD *)a1 + 534);
  if ( (v10 & 0x20) == 0 )
  {
    MinimalProcess = ExAllocatePrivateWorkerPool((char *)a1 + 2208, *((_QWORD *)a1 + 262));
    if ( MinimalProcess < 0 )
      goto LABEL_15;
    v10 = *((_DWORD *)a1 + 534) | 0x20;
    *((_DWORD *)a1 + 534) = v10;
  }
  if ( (v10 & 1) != 0 )
    goto LABEL_19;
  v14 = (*((_DWORD *)a1 + 556) >> 7) & 1;
  v15 = v14 | 2;
  if ( (*((_DWORD *)a1 + 556) & 0xC00) != 0xC00 )
    v15 = v14;
  MinimalProcess = MmStoreRegister(*((_QWORD *)a1 + 262), v14, 3072, *((_QWORD *)a1 + 271), v15);
  if ( MinimalProcess >= 0 )
  {
    *((_DWORD *)a1 + 534) |= 1u;
LABEL_19:
    MinimalProcess = 0;
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 269, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)a1 + 269);
  KeAbPostRelease((ULONG_PTR)a1 + 2152);
  KeLeaveCriticalRegion();
  return (unsigned int)MinimalProcess;
}
