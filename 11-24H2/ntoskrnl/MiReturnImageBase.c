/*
 * XREFs of MiReturnImageBase @ 0x1409D83E0
 * Callers:
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiFreeRelocations @ 0x14093B4DC (MiFreeRelocations.c)
 *     MiRelocateImageAgain @ 0x140AEAE48 (MiRelocateImageAgain.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiZeroCfgSystemWideBitmap @ 0x1403D22BC (MiZeroCfgSystemWideBitmap.c)
 *     MiReturnSystemImageAddress @ 0x140A611C0 (MiReturnSystemImageAddress.c)
 */

void __fastcall MiReturnImageBase(__int64 a1)
{
  unsigned __int64 v1; // rdi
  int v3; // eax
  __int64 *v4; // r15
  __int64 *v5; // r14
  __int64 v6; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  char *v8; // rax
  char *v9; // rbp

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
          v5 = &qword_140E2D800;
          v6 = 2013265920LL;
          break;
        case 2:
          v5 = (__int64 *)&unk_140E2D7A8;
          v6 = 2013265920LL;
          v4 = &qword_140E2D800;
          break;
        case 3:
          v6 = 2013265920LL;
          v5 = (__int64 *)&unk_140E2D7A8;
          break;
        default:
          v5 = &qword_140E2D770;
          v6 = 0x7FFFFFFF0000LL;
          break;
      }
      MiZeroCfgSystemWideBitmap(a1, v6 - ((v1 + *(unsigned int *)(a1 + 8)) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v8 = (char *)KeAbPreAcquire((__int64)&qword_140E2D768, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D768, 0LL) )
        ExfAcquirePushLockExclusiveEx(&qword_140E2D768, v8, (__int64)&qword_140E2D768);
      if ( v9 )
        v9[10] = 1;
      if ( v4 )
        RtlClearBitsEx((__int64)v4, v1, *(unsigned int *)(a1 + 8));
      RtlClearBitsEx((__int64)v5, v1, *(unsigned int *)(a1 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D768, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D768);
      KeAbPostRelease((ULONG_PTR)&qword_140E2D768);
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
}
