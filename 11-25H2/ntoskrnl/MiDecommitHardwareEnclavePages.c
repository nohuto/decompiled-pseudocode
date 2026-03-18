/*
 * XREFs of MiDecommitHardwareEnclavePages @ 0x1403FC4C8
 * Callers:
 *     MiDecommitEnclavePages @ 0x1408F7408 (MiDecommitEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140B53720 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiPageTableLockIsContended @ 0x140338780 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     RtlInterlockedSetClearRun @ 0x1403B8CC0 (RtlInterlockedSetClearRun.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeRemoveEnclavePage @ 0x1403FC880 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePage @ 0x1403FC8BC (MiDeleteEnclavePage.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KeBlockEnclavePage @ 0x1405B67A4 (KeBlockEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405B69AC (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x1405B69E8 (KeOutPageEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1405B6AA0 (KeTrackEnclaveTbFlush.c)
 *     MiGetExceptionInfo @ 0x140666ED8 (MiGetExceptionInfo.c)
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
  __int64 *v30; // rax
  __int64 *v31; // r12
  int v32; // eax
  int v33; // edi
  unsigned int v34; // ecx
  volatile signed __int32 *v35; // r9
  __int64 v36; // r10
  int v37; // r12d
  int v39; // [rsp+30h] [rbp-A8h]
  __int64 v40; // [rsp+38h] [rbp-A0h]
  unsigned int v41; // [rsp+48h] [rbp-90h]
  int v42; // [rsp+4Ch] [rbp-8Ch]
  ULONG_PTR v43; // [rsp+50h] [rbp-88h]
  unsigned int v44; // [rsp+6Ch] [rbp-6Ch]
  ULONG_PTR v45; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-48h]
  unsigned __int8 v48; // [rsp+E0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 1024;
  v40 = a1 + 1024;
  v6 = 0LL;
  v7 = 0;
  v43 = 0LL;
  v8 = 0LL;
  v9 = 2;
  v42 = 2;
  v48 = MiLockWorkingSetShared(a1 + 1024);
  v10 = 0;
  while ( 1 )
  {
    v41 = v10;
    v44 = v10;
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
    v45 = a3;
    while ( v12 <= a4 )
    {
      if ( (v12 & 0x78) == 0 && v12 != v11 )
      {
        v17 = 0;
        if ( (unsigned int)MiWorkingSetIsContended(v40, 0)
          || KeShouldYieldProcessor()
          || v6 && (unsigned int)MiPageTableLockIsContended(v40, v6) )
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
            v5 = v40;
            MiUnlockPageTable(v40, v6);
            v6 = 0LL;
          }
          else
          {
            v5 = v40;
          }
          MiUnlockWorkingSetShared(v5, v48);
          MiLockWorkingSetShared(v5);
        }
        else
        {
          v5 = v40;
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
        MiUnlockPageTable(v5, v6);
      }
      v6 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v12, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v48, 0);
LABEL_10:
      v13 = MI_READ_PTE_LOCK_FREE(v12);
      if ( !v13 )
        goto LABEL_17;
      v14 = (__int64)(v12 << 25) >> 16;
      if ( v41 )
      {
        if ( v41 == 1 )
        {
          v15 = KeRemoveEnclavePage((__int64)(v12 << 25) >> 16);
          v39 = v15;
          if ( v15 < 0 )
          {
            if ( v15 != -1073741757 || a5 )
            {
              v32 = 0;
            }
            else
            {
              if ( !v43 )
              {
                while ( 1 )
                {
                  v23 = (*(_DWORD *)(qword_140E37288 + 8) & 4) != 0LL ? 0x20 : 0;
                  v24 = *(_QWORD *)(qword_140E37288 + 8) - ((*(_QWORD *)(qword_140E37288 + 8) & 4LL) != 0 ? 4 : 0);
                  v25 = v23 + *(_DWORD *)qword_140E37288 - 1;
                  if ( *(_DWORD *)qword_140E37288 )
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
                  if ( (unsigned int)RtlInterlockedSetClearRun(qword_140E37288, v7, 1u) )
                  {
                    v29 = v7 == -1;
                    break;
                  }
                }
                v12 = v45;
                if ( v29 )
                {
                  if ( v8 )
                  {
                    MiFlushTbList((__int64)v8);
                    MiReleaseProcessorFlushList();
                    v8 = 0LL;
                  }
                  MiUnlockPageTable(v40, v6);
                  MiUnlockWorkingSetShared(v40, v48);
                  --CurrentThread->SpecialApcDisable;
                  v30 = KeAbPreAcquire((__int64)&qword_140E37290, 0LL);
                  v31 = v30;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37290, 0LL) )
                    ExfAcquirePushLockExclusiveEx(&qword_140E37290, v30, (__int64)&qword_140E37290);
                  if ( v31 )
                    *((_BYTE *)v31 + 10) = 1;
                  v7 = 0;
                  MiLockWorkingSetShared(v40);
                  MiMakeSystemAddressValid(v45, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v48, 0);
                }
                v43 = qword_140E37280 + 8 * v7;
                ++v42;
              }
              KeBlockEnclavePage(v14);
              v32 = v39;
            }
            if ( v32 < 0 )
              goto LABEL_15;
          }
        }
        else
        {
          do
          {
            ExAcquireSpinLockSharedAtDpcLevel(&dword_140E37298);
            v33 = KeOutPageEnclavePage(v14, *(_QWORD *)(a2 + 88), v43);
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140E37298);
          }
          while ( v33 == -1073741802 );
          if ( v33 < 0 )
            KeBugCheckEx(0x1Au, 0x51602uLL, v14, v33, 0LL);
          v12 = v45;
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
        MiInitializeTbFlushList((__int64)v8, v40, *((_DWORD *)v8 + 3), 0, v44 != 0 ? 1 : 32);
        MiInsertTbFlushEntry(v19, v14, 1LL, v20);
      }
LABEL_17:
      v12 += 8LL;
      v45 = v12;
      v5 = v40;
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
      MiUnlockPageTable(v5, v6);
      v6 = 0LL;
    }
    v10 = v41 + 1;
    v9 = v42;
  }
  LOBYTE(v18) = MiUnlockWorkingSetShared(v5, v48);
  if ( v43 )
  {
    if ( v7 )
    {
      v34 = 1;
      v35 = (volatile signed __int32 *)(*(_QWORD *)(qword_140E37288 + 8) + 4 * ((unsigned __int64)v7 >> 5));
      v36 = v7 & 0x1F;
      LOBYTE(v18) = v36 + 1;
      if ( (unsigned __int64)(v36 + 1) > 0x20 )
      {
        v37 = v7 & 0x1F;
        if ( v37 )
        {
          LODWORD(v18) = ~(((1 << (32 - v37)) - 1) << v36);
          _InterlockedAnd(v35, (unsigned int)v18);
          v34 = 1 - (32 - v37);
          ++v35;
        }
        if ( v34 >= 0x20 )
        {
          v18 = (_QWORD *)((unsigned __int64)v34 >> 5);
          do
          {
            *v35++ = 0;
            v34 -= 32;
            v18 = (_QWORD *)((char *)v18 - 1);
          }
          while ( v18 );
        }
        if ( v34 )
          _InterlockedAnd(v35, -1 << v34);
      }
      else
      {
        _InterlockedAnd(v35, ~(1 << v36));
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37290, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37290);
      LOBYTE(v18) = KeAbPostRelease((ULONG_PTR)&qword_140E37290);
      v29 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v29 )
      {
        v18 = &CurrentThread->152;
        if ( (_QWORD *)*v18 != v18 )
          LOBYTE(v18) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v18;
}
