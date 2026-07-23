/*
 * XREFs of MiDecommitHardwareEnclavePages @ 0x14046CF84
 * Callers:
 *     MiDecommitEnclavePages @ 0x1408DA7A8 (MiDecommitEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140B65940 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     RtlInterlockedSetClearRun @ 0x14021DDF0 (RtlInterlockedSetClearRun.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiPageTableLockIsContended @ 0x140391410 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     KeRemoveEnclavePage @ 0x14046D340 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePage @ 0x14046D37C (MiDeleteEnclavePage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KeBlockEnclavePage @ 0x1405B7BF8 (KeBlockEnclavePage.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405B7E00 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x1405B7E3C (KeOutPageEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1405B7EF4 (KeTrackEnclaveTbFlush.c)
 *     MiGetExceptionInfo @ 0x140673B58 (MiGetExceptionInfo.c)
 */

char __fastcall MiDecommitHardwareEnclavePages(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5)
{
  __int64 v5; // r15
  unsigned __int64 v6; // r13
  unsigned int v7; // r12d
  __int64 *v8; // rsi
  unsigned int v9; // edi
  unsigned int v10; // eax
  __int64 v11; // rax
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // r15
  int v15; // eax
  unsigned __int64 ValidPte; // rax
  __int64 v17; // r8
  int v18; // r15d
  _QWORD *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r9d
  __int64 *ProcessorFlushList; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // r10d
  __int64 v28; // r9
  unsigned int v29; // r11d
  __int64 *v30; // rdx
  __int64 i; // rax
  unsigned int v32; // edx
  bool v33; // zf
  char *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  char *v38; // r12
  int v39; // eax
  int v40; // edi
  unsigned int v41; // ecx
  volatile signed __int32 *v42; // r9
  __int64 v43; // r10
  int v44; // r12d
  int v46; // [rsp+30h] [rbp-A8h]
  __int64 v47; // [rsp+38h] [rbp-A0h]
  unsigned int v48; // [rsp+48h] [rbp-90h]
  int v49; // [rsp+4Ch] [rbp-8Ch]
  ULONG_PTR v50; // [rsp+50h] [rbp-88h]
  unsigned int v51; // [rsp+6Ch] [rbp-6Ch]
  ULONG_PTR v52; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-48h]
  unsigned __int8 v55; // [rsp+E0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 1024;
  v47 = a1 + 1024;
  v6 = 0LL;
  v7 = 0;
  v50 = 0LL;
  v8 = 0LL;
  v9 = 2;
  v49 = 2;
  v55 = MiLockWorkingSetShared(a1 + 1024, a2, a3, a4);
  v10 = 0;
  while ( 1 )
  {
    v48 = v10;
    v51 = v10;
    if ( v10 >= v9 )
      break;
    if ( v10 == 2 )
    {
      KeTrackEnclaveTbFlush((__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16);
      ProcessorFlushList = MiGetProcessorFlushList();
      MiInitializeTbFlushList((__int64)ProcessorFlushList, v5, *((_DWORD *)ProcessorFlushList + 3), 8, 128);
      MiInsertTbFlushEntry(v23, a3 << 25 >> 16, 1LL, 0);
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList();
      v8 = 0LL;
    }
    v11 = a3;
    v12 = a3;
    v52 = a3;
    while ( v12 <= a4 )
    {
      if ( (v12 & 0x78) == 0 && v12 != v11 )
      {
        v18 = 0;
        if ( (unsigned int)MiWorkingSetIsContended(v47, 0)
          || KeShouldYieldProcessor()
          || v6 && (unsigned int)MiPageTableLockIsContended(v47, v6) )
        {
          v18 = 1;
        }
        if ( v18 )
        {
          if ( v6 )
          {
            if ( v8 )
            {
              MiFlushTbList((__int64)v8);
              MiReleaseProcessorFlushList();
              v8 = 0LL;
            }
            v5 = v47;
            MiUnlockPageTableInternal(v47, v6);
            v6 = 0LL;
          }
          else
          {
            v5 = v47;
          }
          MiUnlockWorkingSetShared(v5, v55);
          MiLockWorkingSetShared(v5, v24, v25, v26);
        }
        else
        {
          v5 = v47;
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
      MiMakeSystemAddressValid(v12, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v55, 0);
LABEL_10:
      v13 = MI_READ_PTE_LOCK_FREE(v12);
      if ( !v13 )
        goto LABEL_17;
      v14 = (__int64)(v12 << 25) >> 16;
      if ( v48 )
      {
        if ( v48 == 1 )
        {
          v15 = KeRemoveEnclavePage((__int64)(v12 << 25) >> 16);
          v46 = v15;
          if ( v15 < 0 )
          {
            if ( v15 != -1073741757 || a5 )
            {
              v39 = 0;
            }
            else
            {
              if ( !v50 )
              {
                while ( 1 )
                {
                  v27 = (*(_DWORD *)(qword_140E37608 + 8) & 4) != 0LL ? 0x20 : 0;
                  v28 = *(_QWORD *)(qword_140E37608 + 8) - ((*(_QWORD *)(qword_140E37608 + 8) & 4LL) != 0 ? 4 : 0);
                  v29 = v27 + *(_DWORD *)qword_140E37608 - 1;
                  if ( *(_DWORD *)qword_140E37608 )
                  {
                    v30 = (__int64 *)(v28 + 8 * ((unsigned __int64)v27 >> 6));
                    for ( i = *v30 | ((1LL << v27) - 1); i == -1; i = *v30 )
                    {
                      if ( (unsigned __int64)++v30 > v28 + 8 * ((unsigned __int64)v29 >> 6) )
                        goto LABEL_56;
                    }
                    _BitScanForward64((unsigned __int64 *)&i, ~i);
                    v32 = i + ((unsigned int)(((__int64)v30 - v28) >> 3) << 6);
                    if ( v32 > v29 )
                      v32 = -1;
                  }
                  else
                  {
LABEL_56:
                    v32 = -1;
                  }
                  v7 = v32 - v27;
                  if ( v32 == -1 )
                    v7 = -1;
                  v33 = v7 == -1;
                  if ( v7 == -1 )
                    break;
                  if ( (unsigned int)RtlInterlockedSetClearRun(qword_140E37608, v7, 1u) )
                  {
                    v33 = v7 == -1;
                    break;
                  }
                }
                v12 = v52;
                if ( v33 )
                {
                  if ( v8 )
                  {
                    MiFlushTbList((__int64)v8);
                    MiReleaseProcessorFlushList();
                    v8 = 0LL;
                  }
                  MiUnlockPageTableInternal(v47, v6);
                  MiUnlockWorkingSetShared(v47, v55);
                  --CurrentThread->SpecialApcDisable;
                  v34 = (char *)KeAbPreAcquire((__int64)&qword_140E37610, 0LL);
                  v38 = v34;
                  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37610, 0LL) )
                    ExfAcquirePushLockExclusiveEx(&qword_140E37610, v34, (__int64)&qword_140E37610);
                  if ( v38 )
                    v38[10] = 1;
                  v7 = 0;
                  MiLockWorkingSetShared(v47, v35, v36, v37);
                  MiMakeSystemAddressValid(v52, (*(_DWORD *)(a2 + 48) >> 12) & 0x7F, v55, 0);
                }
                v50 = qword_140E37600 + 8 * v7;
                ++v49;
              }
              KeBlockEnclavePage(v14);
              v39 = v46;
            }
            if ( v39 < 0 )
              goto LABEL_15;
          }
        }
        else
        {
          do
          {
            ExAcquireSpinLockSharedAtDpcLevel(&dword_140E37618);
            v40 = KeOutPageEnclavePage(v14, *(_QWORD *)(a2 + 88), v50);
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140E37618);
          }
          while ( v40 == -1073741802 );
          if ( v40 < 0 )
            KeBugCheckEx(0x1Au, 0x51602uLL, v14, v40, 0LL);
          v12 = v52;
        }
        MiDeleteEnclavePage(v12, 1LL);
      }
      else
      {
        ValidPte = MiMakeValidPte(v12, (v13 >> 12) & 0xFFFFFFFFFFLL, -1073741820);
        MiWriteValidPteNewProtection(v12, ValidPte, v17);
      }
LABEL_15:
      if ( !v8 )
      {
        v8 = MiGetProcessorFlushList();
        MiInitializeTbFlushList((__int64)v8, v47, *((_DWORD *)v8 + 3), 0, v51 != 0 ? 1 : 32);
        MiInsertTbFlushEntry(v20, v14, 1LL, v21);
      }
LABEL_17:
      v12 += 8LL;
      v52 = v12;
      v5 = v47;
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
    v10 = v48 + 1;
    v9 = v49;
  }
  LOBYTE(v19) = MiUnlockWorkingSetShared(v5, v55);
  if ( v50 )
  {
    if ( v7 )
    {
      v41 = 1;
      v42 = (volatile signed __int32 *)(*(_QWORD *)(qword_140E37608 + 8) + 4 * ((unsigned __int64)v7 >> 5));
      v43 = v7 & 0x1F;
      LOBYTE(v19) = v43 + 1;
      if ( (unsigned __int64)(v43 + 1) > 0x20 )
      {
        v44 = v7 & 0x1F;
        if ( v44 )
        {
          LODWORD(v19) = ~(((1 << (32 - v44)) - 1) << v43);
          _InterlockedAnd(v42, (unsigned int)v19);
          v41 = 1 - (32 - v44);
          ++v42;
        }
        if ( v41 >= 0x20 )
        {
          v19 = (_QWORD *)((unsigned __int64)v41 >> 5);
          do
          {
            *v42++ = 0;
            v41 -= 32;
            v19 = (_QWORD *)((char *)v19 - 1);
          }
          while ( v19 );
        }
        if ( v41 )
          _InterlockedAnd(v42, -1 << v41);
      }
      else
      {
        _InterlockedAnd(v42, ~(1 << v43));
      }
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37610, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37610);
      LOBYTE(v19) = KeAbPostRelease((ULONG_PTR)&qword_140E37610);
      v33 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v33 )
      {
        v19 = &CurrentThread->152;
        if ( (_QWORD *)*v19 != v19 )
          LOBYTE(v19) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v19;
}
