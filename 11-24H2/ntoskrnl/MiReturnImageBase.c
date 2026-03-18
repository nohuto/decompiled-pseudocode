/*
 * XREFs of MiReturnImageBase @ 0x1408F6610
 * Callers:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x1408F642C (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x1408F7358 (MiFreeRelocations.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlClearBitsEx @ 0x140261AD0 (RtlClearBitsEx.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiZeroCfgSystemWideBitmap @ 0x1403E471C (MiZeroCfgSystemWideBitmap.c)
 *     MiReturnSystemImageAddress @ 0x140A67CC0 (MiReturnSystemImageAddress.c)
 */

void __fastcall MiReturnImageBase(__int64 a1)
{
  unsigned __int64 v1; // rdi
  int v3; // eax
  __int64 *v4; // r15
  __int64 *v5; // r14
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 != -1LL )
  {
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( *(_BYTE *)(a1 + 13) )
        MiReturnSystemImageAddress((v1 - 0x80000000) << 16, (unsigned int)(*(_DWORD *)(a1 + 8) << 16));
    }
    else
    {
      v3 = *(_DWORD *)(a1 + 16);
      v4 = 0LL;
      switch ( v3 )
      {
        case 1:
          v5 = &qword_140E2D6C0;
          v6 = 2013265920LL;
          break;
        case 2:
          v5 = (__int64 *)&unk_140E2D668;
          v6 = 2013265920LL;
          v4 = &qword_140E2D6C0;
          break;
        case 3:
          v6 = 2013265920LL;
          v5 = (__int64 *)&unk_140E2D668;
          break;
        default:
          v5 = &qword_140E2D630;
          v6 = 0x7FFFFFFF0000LL;
          break;
      }
      MiZeroCfgSystemWideBitmap(a1, v6 - ((v1 + *(unsigned int *)(a1 + 8)) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire((__int64)&qword_140E2D628, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D628, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_140E2D628, (__int64)v8, (__int64)&qword_140E2D628);
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
      if ( v4 )
        RtlClearBitsEx((__int64)v4, v1, *(unsigned int *)(a1 + 8));
      RtlClearBitsEx((__int64)v5, v1, *(unsigned int *)(a1 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D628);
      KeAbPostRelease((ULONG_PTR)&qword_140E2D628);
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v11, v10);
      }
    }
  }
}
