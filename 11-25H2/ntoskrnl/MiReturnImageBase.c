/*
 * XREFs of MiReturnImageBase @ 0x140940000
 * Callers:
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x14093FE24 (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x14094288C (MiFreeRelocations.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     RtlClearBitsEx @ 0x1402A9FB0 (RtlClearBitsEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiZeroCfgSystemWideBitmap @ 0x14047E884 (MiZeroCfgSystemWideBitmap.c)
 *     MiReturnSystemImageAddress @ 0x140A651A0 (MiReturnSystemImageAddress.c)
 */

void __fastcall MiReturnImageBase(__int64 a1)
{
  unsigned __int64 v1; // rdi
  int v3; // eax
  __int64 *v4; // r15
  __int64 *v5; // r14
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v8; // rax
  __int64 *v9; // rbp

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
          v5 = &qword_140E2D480;
          v6 = 2013265920LL;
          break;
        case 2:
          v5 = (__int64 *)&unk_140E2D428;
          v6 = 2013265920LL;
          v4 = &qword_140E2D480;
          break;
        case 3:
          v6 = 2013265920LL;
          v5 = (__int64 *)&unk_140E2D428;
          break;
        default:
          v5 = &qword_140E2D3F0;
          v6 = 0x7FFFFFFF0000LL;
          break;
      }
      MiZeroCfgSystemWideBitmap(a1, v6 - ((v1 + *(unsigned int *)(a1 + 8)) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire((__int64)&qword_140E2D3E8, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D3E8, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_140E2D3E8, v8, (__int64)&qword_140E2D3E8);
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
      if ( v4 )
        RtlClearBitsEx((__int64)v4, v1, *(unsigned int *)(a1 + 8));
      RtlClearBitsEx((__int64)v5, v1, *(unsigned int *)(a1 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D3E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D3E8);
      KeAbPostRelease((ULONG_PTR)&qword_140E2D3E8);
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
