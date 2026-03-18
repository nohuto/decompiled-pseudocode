/*
 * XREFs of MiDeleteEnclavePages @ 0x140B5F0CC
 * Callers:
 *     MiCreateHardwareEnclave @ 0x1407E730C (MiCreateHardwareEnclave.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B5339C (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeRemoveEnclavePage @ 0x1403FC880 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePage @ 0x1403FC8BC (MiDeleteEnclavePage.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PsDeleteVsmEnclave @ 0x14076B620 (PsDeleteVsmEnclave.c)
 *     MiReleaseEnclaveMetadataPage @ 0x140B535D4 (MiReleaseEnclaveMetadataPage.c)
 *     MiReturnReservedEnclavePages @ 0x140B536C0 (MiReturnReservedEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140B53720 (MiTerminateHardwareEnclave.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteEnclavePages(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rsi
  int v5; // eax
  void *v6; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v8; // rax
  signed __int8 v9; // cf
  __int64 *v10; // rbp
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v14; // rdx

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
      MiReleasePtes((__int64)&qword_140E37328, *(unsigned __int64 **)(a2 + 80), 1u);
      v6 = *(void **)(a2 + 88);
      if ( v6 )
        ExFreePoolWithTag(v6, 0);
      MiReturnReservedEnclavePages(a2, -1LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire((__int64)&qword_140E372B0, 0LL);
      v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E372B0, 0LL);
      v10 = v8;
      if ( v9 )
        ExfAcquirePushLockExclusiveEx(&qword_140E372B0, v8, (__int64)&qword_140E372B0);
      if ( v10 )
        *((_BYTE *)v10 + 10) = 1;
      v11 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v12 = (_QWORD *)v4[1], (_QWORD *)*v12 != v4) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *v4 = 0LL;
      if ( (__int64 *)qword_140E372A0 == &qword_140E372A0 )
        MiReleaseEnclaveMetadataPage();
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E372B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E372B0);
      result = KeAbPostRelease((ULONG_PTR)&qword_140E372B0);
      if ( CurrentThread->SpecialApcDisable++ == -1 )
      {
        result = (__int64)&CurrentThread->152;
        if ( *(_QWORD *)result != result )
          return KiCheckForKernelApcDelivery();
      }
    }
  }
  else
  {
    v14 = *(_QWORD **)(a2 + 72);
    if ( v14 )
      return PsDeleteVsmEnclave(a1, v14);
  }
  return result;
}
