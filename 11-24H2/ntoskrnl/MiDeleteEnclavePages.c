/*
 * XREFs of MiDeleteEnclavePages @ 0x140B6FC18
 * Callers:
 *     MiCreateHardwareEnclave @ 0x1407F7910 (MiCreateHardwareEnclave.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140B655BC (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeRemoveEnclavePage @ 0x14046D340 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePage @ 0x14046D37C (MiDeleteEnclavePage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PsDeleteVsmEnclave @ 0x14077B070 (PsDeleteVsmEnclave.c)
 *     MiReleaseEnclaveMetadataPage @ 0x140B657F4 (MiReleaseEnclaveMetadataPage.c)
 *     MiReturnReservedEnclavePages @ 0x140B658E0 (MiReturnReservedEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140B65940 (MiTerminateHardwareEnclave.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteEnclavePages(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rsi
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  char *v10; // rax
  signed __int8 v11; // cf
  char *v12; // rbp
  __int64 v13; // rcx
  _QWORD *v14; // rax
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
        MiDeleteEnclavePage(*(_QWORD *)(a2 + 80), 0LL, v6, v7);
      }
      MiReleasePtes((__int64)&qword_140E376A8, *(_QWORD **)(a2 + 80), 1u);
      v8 = *(void **)(a2 + 88);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      MiReturnReservedEnclavePages(a2, -1LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v10 = (char *)KeAbPreAcquire((__int64)&qword_140E37630, 0LL);
      v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37630, 0LL);
      v12 = v10;
      if ( v11 )
        ExfAcquirePushLockExclusiveEx(&qword_140E37630, v10, (__int64)&qword_140E37630);
      if ( v12 )
        v12[10] = 1;
      v13 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v14 = (_QWORD *)v4[1], (_QWORD *)*v14 != v4) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *v4 = 0LL;
      if ( (__int64 *)qword_140E37620 == &qword_140E37620 )
        MiReleaseEnclaveMetadataPage();
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37630, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37630);
      result = KeAbPostRelease((ULONG_PTR)&qword_140E37630);
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
    v16 = *(_QWORD **)(a2 + 72);
    if ( v16 )
      return PsDeleteVsmEnclave(a1, v16);
  }
  return result;
}
