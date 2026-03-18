/*
 * XREFs of MiDeleteEnclavePages @ 0x140B6E178
 * Callers:
 *     MiCreateHardwareEnclave @ 0x1407F719C (MiCreateHardwareEnclave.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B634EC (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeRemoveEnclavePage @ 0x1403D1AF0 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePage @ 0x1403D1B2C (MiDeleteEnclavePage.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PsDeleteVsmEnclave @ 0x14077B1C0 (PsDeleteVsmEnclave.c)
 *     MiReleaseEnclaveMetadataPage @ 0x140B63724 (MiReleaseEnclaveMetadataPage.c)
 *     MiReturnReservedEnclavePages @ 0x140B63810 (MiReturnReservedEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140B63870 (MiTerminateHardwareEnclave.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteEnclavePages(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rsi
  int v5; // eax
  void *v6; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v8; // rax
  signed __int8 v9; // cf
  _QWORD *v10; // rbp
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v16; // rdx

  result = *(unsigned int *)(a2 + 64);
  if ( (result & 1) != 0 )
  {
    v4 = (_QWORD *)(a2 + 128);
    if ( *(_QWORD *)(a2 + 128) )
    {
      if ( (result & 8) == 0 )
        MiTerminateHardwareEnclave(a1, a2);
      if ( (**(_QWORD **)(a2 + 80) & 1) != 0 )
      {
        v5 = KeRemoveEnclavePage((__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16);
        if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741795 )
          KeBugCheckEx(0x1Au, 0x51601uLL, *(_QWORD *)(a2 + 80), v5, 0LL);
        MiDeleteEnclavePage(*(_QWORD *)(a2 + 80), 0);
      }
      MiReleasePtes((__int64)&qword_140E37568, *(_QWORD **)(a2 + 80), 1u);
      v6 = *(void **)(a2 + 88);
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      MiReturnReservedEnclavePages(a2, -1LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire((__int64)&qword_140E374F0, 0LL);
      v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E374F0, 0LL);
      v10 = v8;
      if ( v9 )
        ExfAcquirePushLockExclusiveEx(&qword_140E374F0, (__int64)v8, (__int64)&qword_140E374F0);
      if ( v10 )
        *((_BYTE *)v10 + 10) = 1;
      v11 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v12 = (_QWORD *)v4[1], (_QWORD *)*v12 != v4) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *v4 = 0LL;
      if ( (__int64 *)qword_140E374E0 == &qword_140E374E0 )
        MiReleaseEnclaveMetadataPage();
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E374F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E374F0);
      result = KeAbPostRelease((ULONG_PTR)&qword_140E374F0);
      if ( CurrentThread->SpecialApcDisable++ == -1 )
      {
        result = (__int64)&CurrentThread->152;
        if ( *(_QWORD *)result != result )
          return KiCheckForKernelApcDelivery(v14, v13);
      }
    }
  }
  else
  {
    v16 = *(_QWORD **)(a2 + 72);
    if ( v16 )
      return PsDeleteVsmEnclave(a1, v16);
  }
  return result;
}
