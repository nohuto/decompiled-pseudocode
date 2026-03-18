/*
 * XREFs of MiDecommitHardwareEnclavePages @ 0x1403D172C
 * Callers:
 *     MiDecommitEnclavePages @ 0x1408DC578 (MiDecommitEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140B63870 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlInterlockedSetClearRun @ 0x1403A46C0 (RtlInterlockedSetClearRun.c)
 *     MiPageTableLockIsContended @ 0x1403CFFE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 *     KeRemoveEnclavePage @ 0x1403D1AF0 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePage @ 0x1403D1B2C (MiDeleteEnclavePage.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KeBlockEnclavePage @ 0x1405BA5C8 (KeBlockEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405BA7D0 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x1405BA80C (KeOutPageEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1405BA8C4 (KeTrackEnclaveTbFlush.c)
 *     MiGetExceptionInfo @ 0x140672988 (MiGetExceptionInfo.c)
 */

char __fastcall MiDecommitHardwareEnclavePages(__int64 a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4, int a5)
{
  __int64 v5; // r15
  unsigned __int64 v6; // r13
  unsigned int v7; // r12d
  __int64 *v8; // rsi
  unsigned int v9; // edi
  unsigned int v10; // eax
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // r15
  int v15; // eax
  unsigned __int64 ValidPte; // rax
  int v17; // r15d
  _QWORD *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r9d
  __int64 *ProcessorFlushList; // rdi
  __int64 v22; // rcx
  unsigned int v23; // r10d
  __int64 v24; // r9
  unsigned int v25; // r11d
  __int64 *v26; // rdx
  __int64 i; // rax
  unsigned int v28; // edx
  bool v29; // zf
  _QWORD *v30; // rax
  _QWORD *v31; // r12
  int v32; // eax
  int v33; // edi
  __int64 v34; // rdx
  unsigned int v35; // ecx
  volatile signed __int32 *v36; // r9
  __int64 v37; // r10
  int v38; // r12d
  int v40; // [rsp+30h] [rbp-A8h]
  __int64 v41; // [rsp+38h] [rbp-A0h]
  unsigned int v42; // [rsp+48h] [rbp-90h]
  int v43; // [rsp+4Ch] [rbp-8Ch]
  ULONG_PTR v44; // [rsp+50h] [rbp-88h]
  unsigned int v45; // [rsp+6Ch] [rbp-6Ch]
  ULONG_PTR v46; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-48h]
  unsigned __int8 v49; // [rsp+E0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 1024;
  v41 = a1 + 1024;
  v6 = 0LL;
  v7 = 0;
  v44 = 0LL;
  v8 = 0LL;
  v9 = 2;
  v43 = 2;
  v49 = MiLockWorkingSetShared(a1 + 1024);
  v10 = 0;
  while ( 1 )
  {
    v42 = v10;
    v45 = v10;
    if ( v10 >= v9 )
      break;
    if ( v10 == 2 )
    {
      KeTrackEnclaveTbFlush((__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16);
      ProcessorFlushList = MiGetProcessorFlushList();
      MiInitializeTbFlushList((__int64)ProcessorFlushList, v5, *((_DWORD *)ProcessorFlushList + 3), 8, 128);
      MiInsertTbFlushEntry(v22, (__int64)(a3 << 25) >> 16, 1LL, 0);
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList();
      v8 = 0LL;
    }
    v11 = a3;
    v12 = a3;
    v46 = a3;
    while ( v12 <= a4 )
    {
      if ( (v12 & 0x78) == 0 && v12 != v11 )
      {
        v17 = 0;
        if ( (unsigned int)MiWorkingSetIsContended(v41, 0)
          || KeShouldYieldProcessor()
          || v6 && (unsigned int)MiPageTableLockIsContended(v41, v6) )
        {
          v17 = 1;
        }
        if ( v17 )
        {
          if ( v6 )
          {
            if ( v8 )
            {
              MiFlushTbList((__int64)v8);
              MiReleaseProcessorFlushList();
              v8 = 0LL;
            }
            v5 = v41;
            MiUnlockPageTableInternal(v41, v6);
            v6 = 0LL;
          }
          else
          {
            v5 = v41;
          }
          MiUnlockWorkingSetShared(v5, v49);
          MiLockWorkingSetShared(v5);
        }
        else
        {
          v5 = v41;
        }
      }
      if ( v6 )
      {
        if ( (v12 & 0xFFF) != 0 )
          goto LABEL_10;
        if ( v8 )
        {
          MiFlushTbList((__int64)v8);
          MiReleaseProcessorFlushList();
          v8 = 0LL;
        }
        MiUnlockPageTableInternal(v5, v6);
      }
      v6 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v12, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v49, 0);
LABEL_10:
      v13 = MI_READ_PTE_LOCK_FREE(v12);
      if ( !v13 )
        goto LABEL_17;
      v14 = (__int64)(v12 << 25) >> 16;
      if ( v42 )
      {
        if ( v42 == 1 )
        {
          v15 = KeRemoveEnclavePage((__int64)(v12 << 25) >> 16);
          v40 = v15;
          if ( v15 < 0 )
          {
            if ( v15 != -1073741757 || a5 )
            {
              v32 = 0;
            }
            else
            {
              if ( !v44 )
              {
                while ( 1 )
                {
                  v23 = (*(_DWORD *)(qword_140E374C8 + 8) & 4) != 0LL ? 0x20 : 0;
                  v24 = *(_QWORD *)(qword_140E374C8 + 8) - ((*(_QWORD *)(qword_140E374C8 + 8) & 4LL) != 0 ? 4 : 0);
                  v25 = v23 + *(_DWORD *)qword_140E374C8 - 1;
                  if ( *(_DWORD *)qword_140E374C8 )
                  {
                    v26 = (__int64 *)(v24 + 8 * ((unsigned __int64)v23 >> 6));
                    for ( i = *v26 | ((1LL << v23) - 1); i == -1; i = *v26 )
                    {
                      if ( (unsigned __int64)++v26 > v24 + 8 * ((unsigned __int64)v25 >> 6) )
                        goto LABEL_56;
                    }
                    _BitScanForward64((unsigned __int64 *)&i, ~i);
                    v28 = i + ((unsigned int)(((__int64)v26 - v24) >> 3) << 6);
                    if ( v28 > v25 )
                      v28 = -1;
                  }
                  else
                  {
LABEL_56:
                    v28 = -1;
                  }
                  v7 = v28 - v23;
                  if ( v28 == -1 )
                    v7 = -1;
                  v29 = v7 == -1;
                  if ( v7 == -1 )
                    break;
                  if ( (unsigned int)RtlInterlockedSetClearRun(qword_140E374C8, v7, 1u) )
                  {
                    v29 = v7 == -1;
                    break;
                  }
                }
                v12 = v46;
                if ( v29 )
                {
                  if ( v8 )
                  {
                    MiFlushTbList((__int64)v8);
                    MiReleaseProcessorFlushList();
                    v8 = 0LL;
                  }
                  MiUnlockPageTableInternal(v41, v6);
                  MiUnlockWorkingSetShared(v41, v49);
                  --CurrentThread->SpecialApcDisable;
                  v30 = KeAbPreAcquire((__int64)&qword_140E374D0, 0LL);
                  v31 = v30;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E374D0, 0LL) )
                    ExfAcquirePushLockExclusiveEx(&qword_140E374D0, (__int64)v30, (__int64)&qword_140E374D0);
                  if ( v31 )
                    *((_BYTE *)v31 + 10) = 1;
                  v7 = 0;
                  MiLockWorkingSetShared(v41);
                  MiMakeSystemAddressValid(v46, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v49, 0);
                }
                v44 = qword_140E374C0 + 8 * v7;
                ++v43;
              }
              KeBlockEnclavePage(v14);
              v32 = v40;
            }
            if ( v32 < 0 )
              goto LABEL_15;
          }
        }
        else
        {
          do
          {
            ExAcquireSpinLockSharedAtDpcLevel(&dword_140E374D8);
            v33 = KeOutPageEnclavePage(v14, *(_QWORD *)(a2 + 88), v44);
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140E374D8);
          }
          while ( v33 == -1073741802 );
          if ( v33 < 0 )
            KeBugCheckEx(0x1Au, 0x51602uLL, v14, v33, 0LL);
          v12 = v46;
        }
        MiDeleteEnclavePage(v12, 1LL);
      }
      else
      {
        ValidPte = MiMakeValidPte(v12, (v13 >> 12) & 0xFFFFFFFFFFLL, -1073741820);
        MiWriteValidPteNewProtection(v12, ValidPte);
      }
LABEL_15:
      if ( !v8 )
      {
        v8 = MiGetProcessorFlushList();
        MiInitializeTbFlushList((__int64)v8, v41, *((_DWORD *)v8 + 3), 0, v45 != 0 ? 1 : 32);
        MiInsertTbFlushEntry(v19, v14, 1LL, v20);
      }
LABEL_17:
      v12 += 8LL;
      v46 = v12;
      v5 = v41;
      v11 = a3;
    }
    if ( v8 )
    {
      MiFlushTbList((__int64)v8);
      MiReleaseProcessorFlushList();
      v8 = 0LL;
    }
    if ( v6 )
    {
      MiUnlockPageTableInternal(v5, v6);
      v6 = 0LL;
    }
    v10 = v42 + 1;
    v9 = v43;
  }
  LOBYTE(v18) = MiUnlockWorkingSetShared(v5, v49);
  if ( v44 )
  {
    if ( v7 )
    {
      v35 = 1;
      v36 = (volatile signed __int32 *)(*(_QWORD *)(qword_140E374C8 + 8) + 4 * ((unsigned __int64)v7 >> 5));
      v37 = v7 & 0x1F;
      LOBYTE(v18) = v37 + 1;
      if ( (unsigned __int64)(v37 + 1) > 0x20 )
      {
        v38 = v7 & 0x1F;
        if ( v38 )
        {
          LODWORD(v18) = ~(((1 << (32 - v38)) - 1) << v37);
          _InterlockedAnd(v36, (unsigned int)v18);
          v35 = 1 - (32 - v38);
          ++v36;
        }
        if ( v35 >= 0x20 )
        {
          v18 = (_QWORD *)((unsigned __int64)v35 >> 5);
          do
          {
            *v36++ = 0;
            v35 -= 32;
            v18 = (_QWORD *)((char *)v18 - 1);
          }
          while ( v18 );
        }
        if ( v35 )
          _InterlockedAnd(v36, -1 << v35);
      }
      else
      {
        _InterlockedAnd(v36, ~(1 << v37));
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E374D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E374D0);
      LOBYTE(v18) = KeAbPostRelease((ULONG_PTR)&qword_140E374D0);
      v29 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v29 )
      {
        v18 = &CurrentThread->152;
        if ( (_QWORD *)*v18 != v18 )
          LOBYTE(v18) = KiCheckForKernelApcDelivery((__int64)CurrentThread, v34);
      }
    }
  }
  return (char)v18;
}
